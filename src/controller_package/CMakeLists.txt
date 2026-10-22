cmake_minimum_required(VERSION 3.8)
project(controller_package)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# Temukan dependency utama ROS 2 dan package messages kamu
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(std_msgs REQUIRED)
find_package(package_messages REQUIRED)

# Executable Publisher
add_executable(controller_publisher src/controller_publisher.cpp)
ament_target_dependencies(controller_publisher
  rclcpp
  std_msgs
  package_messages
)

# Executable Subscriber
add_executable(controller_subscriber src/controller_subscriber.cpp)
ament_target_dependencies(controller_subscriber
  rclcpp
  std_msgs
  package_messages
)

# Install agar dikenali oleh ros2 run
install(TARGETS
  controller_publisher
  controller_subscriber
  DESTINATION lib/${PROJECT_NAME}
)

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  ament_lint_auto_find_test_dependencies()
endif()

ament_package()