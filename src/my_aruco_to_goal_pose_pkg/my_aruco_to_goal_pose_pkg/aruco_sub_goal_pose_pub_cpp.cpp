#include <chrono>
#include <memory>
#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"
#include "geometry_msgs/msg/pose_stamped.hpp"
#include "geometry_msgs/msg/pose.hpp"
#include "geometry_msgs/msg/transform_stamped.hpp"
#include "tf2_ros/buffer.h"
#include "tf2_ros/transform_listener.h"
#include "nav2_simple_commander/robot_navigator.hpp"
#include "ros2_aruco_interfaces/msg/aruco_markers.hpp"

using namespace std::chrono_literals;

class MyNode : public rclcpp::Node {
public:
    MyNode() : Node("my_node") {
        auto qos_profile = rclcpp::QoS(10);
        initializeSubscribers(qos_profile);
        initializePublishers(qos_profile);
        initializeTF();
    }

private:
    void initializeSubscribers(const rclcpp::QoS& qos_profile) {
        aruco_sub_node = this->create_subscription<ros2_aruco_interfaces::msg::ArucoMarkers>(
            "aruco_markers", qos_profile,
            std::bind(&MyNode::arucoSubNodeMsg, this, std::placeholders::_1));
    }

    void initializePublishers(const rclcpp::QoS& qos_profile) {
        my_node_pub = this->create_publisher<std_msgs::msg::String>("my_node_pub", qos_profile);
    }

    void initializeTF() {
        tf_buffer = std::make_shared<tf2_ros::Buffer>(this->get_clock());
        tf_listener = std::make_shared<tf2_ros::TransformListener>(*tf_buffer, this);
    }

    void goalPosePubNodeMsg(const std::string& frame_ids, const std::vector<int>& marker_ids) {
        auto msg = std::make_unique<std_msgs::msg::String>();
        auto tf_map_to_cart_base_0 = tf_buffer->lookupTransform("marker_0_waypt", "camera_color_optical_frame", rclcpp::Time(), rclcpp::Duration(1s));
        RCLCPP_INFO(this->get_logger(), "%s", tf_map_to_cart_base_0);
        double my_goal_x = tf_map_to_cart_base_0.transform.translation.x;
        double my_goal_y = tf_map_to_cart_base_0.transform.translation.y;
        double my_goal_w = tf_map_to_cart_base_0.transform.rotation.w;
        double my_goal_z = tf_map_to_cart_base_0.transform.rotation.z;

        auto my_goal_pose = std::make_shared<geometry_msgs::msg::PoseStamped>();
        my_goal_pose->header.frame_id = "map";
        my_goal_pose->header.stamp = this->now();
        my_goal_pose->pose.position.x = my_goal_x;
        my_goal_pose->pose.position.y = my_goal_y;
        my_goal_pose->pose.orientation.w = my_goal_w;
        my_goal_pose->pose.orientation.z = my_goal_z;

        my_navigator->goToPose(*my_goal_pose);

        msg->data = "frame_ids = " + frame_ids + "  marker_ids = " + std::to_string(marker_ids[0]);
        my_node_pub->publish(std::move(msg));
    }

    void arucoSubNodeMsg(const ros2_aruco_interfaces::msg::ArucoMarkers::SharedPtr msg) {
        RCLCPP_INFO(this->get_logger(), "%s", msg->header.frame_id);
        RCLCPP_INFO(this->get_logger(), "%d", msg->marker_ids[0]);
        RCLCPP_INFO(this->get_logger(), "%s", msg->poses[0].position);
        RCLCPP_INFO(this->get_logger(), "%s", msg->poses[0].orientation);
        goalPosePubNodeMsg(msg->header.frame_id, msg->marker_ids);
    }

    rclcpp::Subscription<ros2_aruco_interfaces::msg::ArucoMarkers>::SharedPtr aruco_sub_node;
    rclcpp::Publisher<std_msgs::msg::String>::SharedPtr my_node_pub;
    std::shared_ptr<BasicNavigator> my_navigator = std::make_shared<BasicNavigator>();
    std::shared_ptr<tf2_ros::Buffer> tf_buffer;
    std::shared_ptr<tf2_ros::TransformListener> tf_listener;
};

int main(int argc, char **argv) {
    rclcpp::init(argc, argv);
    auto my_node = std::make_shared<MyNode>();
    rclcpp::spin(my_node);
    rclcpp::shutdown();
    return 0;
}
