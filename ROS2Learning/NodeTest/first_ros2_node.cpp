#include "/opt/ros/foxy/include/rclcpp/rclcpp.hpp"

int main(int argc , char ** argv){
    rclcpp :: init(argc , argv);
    rclcpp :: spin(std :: make_shared<rclcpp :: Node>("first_Node"));
    return 0;
}
