# generated from rosidl_cmake/cmake/rosidl_cmake_aggregate_target-extras.cmake.in

# Create a convenience aggregate target magcal_wrapper::magcal_wrapper
# that links all generated interface targets, so downstream packages can use
# a single modern CMake target name instead of ${magcal_wrapper_TARGETS}.
if(magcal_wrapper_TARGETS AND NOT TARGET magcal_wrapper::magcal_wrapper)
  add_library(magcal_wrapper::magcal_wrapper INTERFACE IMPORTED)
  set_target_properties(magcal_wrapper::magcal_wrapper PROPERTIES
    INTERFACE_LINK_LIBRARIES "${magcal_wrapper_TARGETS}")
endif()
