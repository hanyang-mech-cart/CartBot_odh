from my_action_interface.action import DockingTwo
import rclpy
from rclpy.action import ActionServer, GoalResponse
from rclpy.node import Node

from geometry_msgs.msg import PoseArray, Twist
import numpy as np
from scipy.spatial.transform import Rotation
import time

class DockingTwoActionServer(Node):

    def __init__(self):
        # 이전 이름 : 'pose_to_cmdvel'
        super().__init__('dockingtwo_action_server')
        # action server 생성
        self.action_server = ActionServer(
            self,
            DockingTwo,
            'dockingtwo',
            self.execute_callback,
            goal_callback = self.goal_callback,
        )

        self.get_logger().info('### DockingTwo Action Server Started')

        ###### 아래부터 PoseToCmdVel 부분 ######
        self.subscription = self.create_subscription(
            PoseArray,
            '/aruco_poses',
            self.pose_callback,
            1
        )
        # pulisher 생성하는 부분.
        self.publisher = self.create_publisher(Twist, '/cmd_vel', 10)

        # pose 초기화
        self.pose_x = 0
        self.pose_y = 0
        self.pose_z = 0
        self.pose_qx = 0
        self.pose_qy = 0
        self.pose_qz = 0
        self.pose_qw = 0


        # PID init
        self.prev_error = 0.0
        self.integral = 0.0
        self.kp = 0.5
        self.integral = 0.0
        self.ki = 0.1
        self.kd = 0.01
        
        # Angular velocity limits
        self.max_angular_z = 0.3
        
        # count
        self.cnt_num = 0
        self.cnt_time = 0
        self.ok = False
        self.again = False

        # # Timer 설정
        # self.timer_period = 1.0 / 2  # 초당 10번
        # self.timer = self.create_timer(self.timer_period, self.publish_cmd_vel)
        # self.linear_x = 0.0
        # self.angular_z = 0.0
    
    
    # PoseToCmdVel 로직 부분.
    # 'pose_callback' -> 'execute_callback' 으로 이름 변경.
    async def execute_callback(self, goal_handle):
        self.get_logger().info('Executing goal...')

        feedback_msg = DockingTwo.Feedback()
        feedback_msg.

        self.get_logger().info(f'Feedback: {feedback_msg}')
        
        # goal_handle
        goal_handle.succeed()
        self.get_logger().warn('### Succeed ###')

        # result response
        result = DockingTwo.Result()
        # result.sequence = feedback_msg.partial_sequence
        
        return result

    def pose_callback(self, msg):
        if len(msg.poses) >= 0:

            # 포즈 정보를 개별 변수에 저장
            pose_x = msg.poses[0].position.x
            pose_y = msg.poses[0].position.y
            pose_z = msg.poses[0].position.z
            pose_qx = msg.poses[0].orientation.x
            pose_qy = msg.poses[0].orientation.y
            pose_qz = msg.poses[0].orientation.z
            pose_qw = msg.poses[0].orientation.w

            object_orientation = np.array([pose_qx, pose_qy, pose_qz, pose_qw])
            rotation_matrix = Rotation.from_quat(object_orientation).as_matrix()
            object_direction = rotation_matrix[:, 0]
            my_direction = np.array([1, 0, 0])
            angle_radians = np.arccos(np.dot(object_direction, my_direction))
            # self.get_logger().info('rad: %f' % angle_radians)
            
            error = -0.05 - pose_x
            self.integral += error
            derivative = error - self.prev_error
            
            angular_z = self.kp * error + self.ki * self.integral + self.kd * derivative

            # 제어값을 제한하여 너무 큰 값이 발생하지 않도록 함
            if angular_z > self.max_angular_z:
                angular_z = self.max_angular_z
            elif angular_z < -self.max_angular_z:
                angular_z = -self.max_angular_z
            
            cmd_vel_msg = Twist()
            cmd_vel_msg.linear.x = -0.2
            cmd_vel_msg.linear.y = 0.0
            cmd_vel_msg.linear.z = 0.0
            cmd_vel_msg.angular.x = 0.0
            cmd_vel_msg.angular.y = 0.0
            cmd_vel_msg.angular.z = angular_z

            if(pose_z < 0.9 and abs(angle_radians) < 0.2 and self.ok == False):
                cmd_vel_msg.linear.x = -0.1
                self.get_logger().info('##################################poze_z < 0.9##################################')

                if(abs(error) < 0.02):
                    self.get_logger().info('///Wait///')
                    time.sleep(2)
                        
                    cmd_vel_msg.linear.x = -0.4
                    cmd_vel_msg.angular.z = 0.0                    
                    self.get_logger().info('Back')
                        
                    while(self.cnt_time < 100000):
                        self.cnt_time = self.cnt_time + 1
                        self.publisher.publish(cmd_vel_msg)
                    
                    cmd_vel_msg.linear.x = 0.0    
                    self.publisher.publish(cmd_vel_msg)
                    self.ok = True

            elif(pose_z < 0.9 and abs(angle_radians) >= 0.2 and self.ok == False):
                self.again = True
                
            if(self.again == True):
                cmd_vel_msg.linear.x = 0.2
                cmd_vel_msg.angular.z = 5*error
                if cmd_vel_msg.angular.z > self.max_angular_z:
                    cmd_vel_msg.angular.z = self.max_angular_z
                elif cmd_vel_msg.angular.z < -self.max_angular_z:
                    cmd_vel_msg.angular.z = -self.max_angular_z 
                    
                self.publisher.publish(cmd_vel_msg)
                self.get_logger().info('///Again///')
                if(abs(angle_radians) < 0.2 or pose_z >= 1.2):
                    self.again = False

            # 이 부분 조건 충족 전까지 반복.        
            elif(self.ok == True and pose_z < 0.9):
                cmd_vel_msg.linear.x = 0.0
                cmd_vel_msg.angular.z = 0.0
                return 0
                
            self.publisher.publish(cmd_vel_msg)
            self.get_logger().info('Cmd linear x: %f' % cmd_vel_msg.linear.x)
            self.get_logger().info('Cmd angular z: %f' % cmd_vel_msg.angular.z)
            self.get_logger().info('Distance: %f' % pose_z)
            self.get_logger().info('Error: %f' % error)
            
            if(self.ok):
                self.get_logger().info('********************Done********************')

            self.get_logger().info(' ')
            
            self.prev_error = error
            # self.linear_x = cmd_vel_msg.linear.x
            # self.angular_z = cmd_vel_msg.angular.z


    # goal request 가 sever 도달 시 처음 진입하게 되는 callback
    def goal_callback(self, goal_request):
        "Accept or reject a client request to begin an action."
        self.get_logger().info('Received goal request')

        return GoalResponse.ACCEPT
    

def main(args=None):
    rclpy.init(args=args)

    dockingtwo_action_server = DockingTwoActionServer()
    # dockingtwo_action_client 로부터 request 가 새로 전달받을 때까지 대기.
    rclpy.spin(dockingtwo_action_server)

    dockingtwo_action_server.destroy()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
