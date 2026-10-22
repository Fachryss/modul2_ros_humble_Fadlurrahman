#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"
#include "package_messages/msg/controller.hpp"

class ControllerSubscriber : public rclcpp::Node {
public:
  ControllerSubscriber() : Node("controller_subscriber") {
    sub_controller = this->create_subscription<package_messages::msg::Controller>(
      "controller", 10,
      std::bind(&ControllerSubscriber::controllerCallback, this, std::placeholders::_1)
    );
  }

private:
  void controllerCallback(const package_messages::msg::Controller::SharedPtr msg) {
    uint8_t arr[20];
    
    // Menyimpan data custom message ke dalam array sesuai modul
    memcpy(arr + 3, &msg->velx, 4);
    memcpy(arr + 7, &msg->vely, 4);
    memcpy(arr + 11, &msg->angvel, 4);

    RCLCPP_INFO(this->get_logger(), "I heard Controller -> velx: %.2f, vely: %.2f, angvel: %.2f", 
                msg->velx, msg->vely, msg->angvel);
  }

  rclcpp::Subscription<package_messages::msg::Controller>::SharedPtr sub_controller;
};

int main(int argc, char *argv[]) {
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<ControllerSubscriber>());
  rclcpp::shutdown();
  return 0;
}