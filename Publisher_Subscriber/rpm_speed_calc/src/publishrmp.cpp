#include <chrono>
#include <functional> 

#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/float64.hpp"

using namespace std::chrono_literals;

class RPMNODE : public rclcpp::Node
{
  public: 
    RPMNODE() : Node("RPMNODE") 
    {
      publisher_ = this->create_publisher<std_msgs::msg::Float64>("RPM", 10);
      timer_ = this->create_wall_timer(1s, std::bind(&RPMNODE::publish_rpm, this));
      std::cout<<"RPM IS RUNNING";
    }

  private:
    void publish_rpm()
    {
      data = data + 1;
      auto message = std_msgs::msg::Float64();
      
      message.data = data;
      publisher_->publish(message);
      
    }

    rclcpp::Publisher<std_msgs::msg::Float64>::SharedPtr publisher_;
    rclcpp::TimerBase::SharedPtr timer_;
    double data = 100;
};


int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<RPMNODE>());
  rclcpp::shutdown();
  
  return 0;
}