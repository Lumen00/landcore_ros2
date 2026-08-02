cmake_minimum_required(VERSION 3.8)
project(land_description)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

find_package(ament_cmake REQUIRED)
find_package(hardware_interface REQUIRED)
find_package(pluginlib REQUIRED)
find_package(rclcpp REQUIRED)
find_package(rclcpp_lifecycle REQUIRED)

# Your hardware interface + PCA9685 driver, compiled as one shared library
add_library(mecanum_system_hardware SHARED
  src/mecanum_system_hardware.cpp
  src/motorhat_driver.cpp
)

target_include_directories(mecanum_system_hardware PRIVATE
  include
)

ament_target_dependencies(mecanum_system_hardware
  hardware_interface
  pluginlib
  rclcpp
  rclcpp_lifecycle
)

# lgpio isn't an ament package — link it directly
target_link_libraries(mecanum_system_hardware lgpio)

# Register the plugin so pluginlib/controller_manager can find it by name
pluginlib_export_plugin_description_file(hardware_interface mecanum_hardware_plugin.xml)

install(
  TARGETS mecanum_system_hardware
  DESTINATION lib
)

install(
  DIRECTORY src launch rviz config world urdf include
  DESTINATION share/${PROJECT_NAME}
)

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  set(ament_cmake_copyright_FOUND TRUE)
  set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

ament_package()