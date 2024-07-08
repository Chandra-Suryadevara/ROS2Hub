#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/float64.hpp"
#include <iostream>
#include <chrono>
#include <functional> 


using namespace std::chrono_literals;

class SPEEDNODE : public rclcpp::Node
{
    public:
        SPEEDNODE(): Node("SPEEDNODE"){
        Subscription = this->create_subscription<std_msgs::msg::Float64>(
            "RPM", 10, std::bind(&SPEEDNODE::publish_rpm,this,std::placeholders::_1)
        );

        publisher_ = this->create_publisher<std_msgs::msg::Float64>("Speed", 10);
        std::cout<<"SPPED IS RUNNING";
        }
    private:


         void publish_rpm(const std_msgs::msg::Float64 & msg)
            {

                speed = msg.data*10;
        auto message = std_msgs::msg::Float64();
        message.data = speed;
        publisher_->publish(message);
        }

        rclcpp::Publisher<std_msgs::msg::Float64>::SharedPtr publisher_;
        rclcpp::Subscription<std_msgs::msg::Float64> ::SharedPtr Subscription;
        int speed;







};


int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<SPEEDNODE>());
  rclcpp::shutdown();
  
  return 0;
}