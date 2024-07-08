#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/float64.hpp"
#include <iostream>

class HelloWorldSubNode : public rclcpp::Node
{
    public:
        HelloWorldSubNode(): Node("helloworldsubnode"){
        Subscription = this->create_subscription<std_msgs::msg::Float64>(
            "Speed", 10, std::bind(&HelloWorldSubNode::sub_callback,this,std::placeholders::_1)
        );
        std::cout<<"Sub ius running";




        }
    private:


        void sub_callback(const std_msgs::msg::Float64 & msg) const {
            std::cout<<"Speed is " <<msg.data<<std::endl;
        }
        rclcpp::Subscription<std_msgs::msg::Float64> ::SharedPtr Subscription;







};


int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<HelloWorldSubNode>());
  rclcpp::shutdown();
  
  return 0;
}