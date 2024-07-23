cmake_minimum_required(VERSION 3.8)
project(firstservicepkg)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(std_msgs REQUIRED)
find_package(rosidl_default_generators REQUIRED)
find_package(sensor_msgs REQUIRED)
find_package(OpenCV REQUIRED)
find_package(cv_bridge REQUIRED)

# Generate custom interfaces
rosidl_generate_interfaces(${PROJECT_NAME}
  "srv/TurnCamera.srv"
  DEPENDENCIES
  sensor_msgs 
  ADD_LINTER_TESTS
)

# Set support for using custom interfaces in C++ from this package
rosidl_get_typesupport_target(cpp_typesupport_target "${PROJECT_NAME}" "rosidl_typesupport_cpp")


add_executable(turn_camera_service src/turn_camera_service.cpp)
ament_target_dependencies(turn_camera_service rclcpp std_msgs sensor_msgs OpenCV cv_bridge)
target_link_libraries(turn_camera_service "${cpp_typesupport_target}")

add_executable(turn_camera_client src/turn_camera_client.cpp)
ament_target_dependencies(turn_camera_client rclcpp std_msgs sensor_msgs OpenCV cv_bridge)
target_link_libraries(turn_camera_client "${cpp_typesupport_target}")


# config for ROS2 cli tools 
install(TARGETS 
  turn_camera_service
  turn_camera_client
  DESTINATION lib/${PROJECT_NAME}
)

install(DIRECTORY 
  launch 
  DESTINATION share/${PROJECT_NAME}/
)

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  # the following line skips the linter which checks for copyrights
  # comment the line when a copyright and license is added to all source files
  set(ament_cmake_copyright_FOUND TRUE)
  # the following line skips cpplint (only works in a git repo)
  # comment the line when this package is in a git repo and when
  # a copyright and license is added to all source files
  set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

ament_package()