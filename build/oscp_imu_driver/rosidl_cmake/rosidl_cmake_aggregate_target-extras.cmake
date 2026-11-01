# generated from rosidl_cmake/cmake/rosidl_cmake_aggregate_target-extras.cmake.in

# Create a convenience aggregate target oscp_imu_driver::oscp_imu_driver
# that links all generated interface targets, so downstream packages can use
# a single modern CMake target name instead of ${oscp_imu_driver_TARGETS}.
if(oscp_imu_driver_TARGETS AND NOT TARGET oscp_imu_driver::oscp_imu_driver)
  add_library(oscp_imu_driver::oscp_imu_driver INTERFACE IMPORTED)
  set_target_properties(oscp_imu_driver::oscp_imu_driver PROPERTIES
    INTERFACE_LINK_LIBRARIES "${oscp_imu_driver_TARGETS}")
endif()
