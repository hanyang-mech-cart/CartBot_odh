import math
import sys

from geometry_msgs.msg import TransformStamped

import numpy as np

import rclpy
from rclpy.node import Node

from tf2_ros.static_transform_broadcaster import StaticTransformBroadcaster


# def quaternion_from_euler_zyx(ai, aj, ak):
#     ai /= 2.0
#     aj /= 2.0
#     ak /= 2.0
#     ci = math.cos(ai)
#     si = math.sin(ai)
#     cj = math.cos(aj)
#     sj = math.sin(aj)
#     ck = math.cos(ak)
#     sk = math.sin(ak)
#     cc = ci*ck
#     cs = ci*sk
#     sc = si*ck
#     ss = si*sk

#     q = np.empty((4, ))
#     q[0] = cj*sc - sj*cs
#     q[1] = cj*ss + sj*cc
#     q[2] = cj*cs - sj*sc
#     q[3] = cj*cc + sj*ss

#     return q

def quaternion_from_euler_xyz(ai, aj, ak):
    ai /= 2.0
    aj /= 2.0
    ak /= 2.0
    ci = math.cos(ai)
    si = math.sin(ai)
    cj = math.cos(aj)
    sj = math.sin(aj)
    ck = math.cos(ak)
    sk = math.sin(ak)
    cc = ci*ck
    cs = ci*sk
    sc = si*ck
    ss = si*sk

    q = np.empty((4, ))
    q[0] = ck*cj*si + sk*sj*ci
    q[1] = ck*sj*ci - sk*cj*si
    q[2] = sk*cj*ci + ck*sj*si
    q[3] = ck*cj*ci - sk*sj*si

    return q



class StaticFramePublisher(Node):

    def __init__(self, n):
        super().__init__('my_static_cart_tf2_broadcaster')

        self.tf_static_broadcaster = StaticTransformBroadcaster(self)
        
        # marker_0: 정면
        # marker_1 : 왼쪽
        # marker_2 : 후면
        # marker_3 : 오른쪽
        '''
        self.transformations = [
            ['marker_0', 'marker_0_map', 0      , -0.418 , 0.01  , math.radians(-90) , 0 , math.radians(90)],
            ['marker_1', 'maker_1_map', -0.362 , -0.410 , -0.2  , math.radians(-90) , 0 , 0],
            ['marker_2', 'maker_2_map', 0      , -0.615 , -0.664, math.radians(-90) , 0 , math.radians(-90)],
            ['marker_3', 'maker_3_map', 0.362  , -0.410 , -0.2  , math.radians(-90) , 0 ,  math.radians(-180)],
        ]
        '''
        
        # bar 정면 1m 지점.
        self.transformations = [
            ['marker_0', 'marker_0_map', 0      , -0.418 , 2.01  , math.radians(-90) , 0 , math.radians(-90)],
            ['marker_1', 'marker_0_map', -2.362 , -0.410 , -0.2  , math.radians(-90) , 0 , math.radians(180)],
            ['marker_2', 'marker_0_map', 0      , -0.615 , -2.664, math.radians(-90) , 0 , math.radians(90)],
            ['marker_3', 'marker_0_map', 2.362  , -0.410 , -0.2  , math.radians(-90) , 0 ,  math.radians(0)],
        ]         
        
        self.make_transforms()



    def make_transforms(self):

        transforms = []

        for transfomation in self.transformations:
            t = TransformStamped()

            t.header.stamp = self.get_clock().now().to_msg()
            t.header.frame_id = transfomation[0]
            t.child_frame_id = transfomation[1]

            t.transform.translation.x = float(transfomation[2])
            t.transform.translation.y = float(transfomation[3])
            t.transform.translation.z = float(transfomation[4])
            quat = quaternion_from_euler_xyz(float(transfomation[5]), float(transfomation[6]), float(transfomation[7]))
            t.transform.rotation.x = quat[0]
            t.transform.rotation.y = quat[1]
            t.transform.rotation.z = quat[2]
            t.transform.rotation.w = quat[3]

            transforms.append(t)

        self.tf_static_broadcaster.sendTransform(transforms)


def main():
    logger = rclpy.logging.get_logger('logger')

    # obtain parameters from command line arguments
    if len(sys.argv) != 1:
        logger.info('Invalid number of parameters. Usage: \n'
                    '$ ros2 run my_tf2_package my_static_cart_tf2_broadcaster'
                    'n')
        sys.exit(1)

    if sys.argv[0] == '0':
        logger.info('cart number cannot be "0"')
        sys.exit(2)

    # pass parameters and initialize node
    rclpy.init()
    node = StaticFramePublisher(sys.argv)

    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass

    rclpy.shutdown()

if __name__ == '__main__':
    main()

