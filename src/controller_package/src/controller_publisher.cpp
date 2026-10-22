#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"
#include "package_messages/msg/controller.hpp"

class ControllerPublisher : public rclcpp::Node {
public:
  ControllerPublisher() : Node("controller_publisher") {
    pub_pos = this->create_publisher<package_messages::msg::Controller>("controller", 10);
    timer_ = this->create_wall_timer(
      std::chrono::seconds(1),
      std::bind(&ControllerPublisher::timer_callback, this)
    );
  }

private:
  void timer_callback() {
    auto message = package_messages::msg::Controller();
    message.velx = 1.5;
    message.vely = 0.5;
    message.angvel = 0.2;

    RCLCPP_INFO(this->get_logger(), "Publishing Controller -> velx: %.2f, vely: %.2f, angvel: %.2f", 
                message.velx, message.vely, message.angvel);
    pub_pos->publish(message);
  }

  rclcpp::Publisher<package_messages::msg::Controller>::SharedPtr pub_pos;
  rclcpp::TimerBase::SharedPtr timer_;
};

int main(int argc, char *argv[]) {
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<ControllerPublisher>());
  rclcpp::shutdown();
  return 0;
}
