cmake_minimum_required(VERSION 3.8)
project(picam_publisher)

if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 17)
endif()

find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(image_transport REQUIRED)
find_package(cv_bridge REQUIRED)
find_package(sensor_msgs REQUIRED)
find_package(OpenCV REQUIRED)

add_executable(picam_publisher_node src/picam_publisher.cpp)

ament_target_dependencies(picam_publisher_node
  rclcpp
  image_transport
  cv_bridge
  sensor_msgs
  OpenCV
)

install(TARGETS
  picam_publisher_node
  DESTINATION lib/${PROJECT_NAME}
)

ament_package()