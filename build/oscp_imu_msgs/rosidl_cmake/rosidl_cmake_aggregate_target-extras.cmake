# generated from rosidl_cmake/cmake/rosidl_cmake_aggregate_target-extras.cmake.in

# Create a convenience aggregate target oscp_imu_msgs::oscp_imu_msgs
# that links all generated interface targets, so downstream packages can use
# a single modern CMake target name instead of ${oscp_imu_msgs_TARGETS}.
if(oscp_imu_msgs_TARGETS AND NOT TARGET oscp_imu_msgs::oscp_imu_msgs)
  add_library(oscp_imu_msgs::oscp_imu_msgs INTERFACE IMPORTED)
  set_target_properties(oscp_imu_msgs::oscp_imu_msgs PROPERTIES
    INTERFACE_LINK_LIBRARIES "${oscp_imu_msgs_TARGETS}")
endif()
