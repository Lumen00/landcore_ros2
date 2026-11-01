// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from oscp_imu_driver:srv/GetIMUConfig.idl
// generated code does not contain a copyright notice

#ifndef OSCP_IMU_DRIVER__SRV__DETAIL__GET_IMU_CONFIG__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define OSCP_IMU_DRIVER__SRV__DETAIL__GET_IMU_CONFIG__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include <cstddef>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "oscp_imu_driver/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "oscp_imu_driver/srv/detail/get_imu_config__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace oscp_imu_driver
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_oscp_imu_driver
cdr_serialize(
  const oscp_imu_driver::srv::GetIMUConfig_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_oscp_imu_driver
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  oscp_imu_driver::srv::GetIMUConfig_Request & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_oscp_imu_driver
get_serialized_size(
  const oscp_imu_driver::srv::GetIMUConfig_Request & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_oscp_imu_driver
max_serialized_size_GetIMUConfig_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_oscp_imu_driver
cdr_serialize_key(
  const oscp_imu_driver::srv::GetIMUConfig_Request & ros_message,
  eprosima::fastcdr::Cdr &);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_oscp_imu_driver
get_serialized_size_key(
  const oscp_imu_driver::srv::GetIMUConfig_Request & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_oscp_imu_driver
max_serialized_size_key_GetIMUConfig_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace oscp_imu_driver

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_oscp_imu_driver
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, oscp_imu_driver, srv, GetIMUConfig_Request)();

#ifdef __cplusplus
}
#endif

// already included above
// #include <cstddef>
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "oscp_imu_driver/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
// already included above
// #include "oscp_imu_driver/srv/detail/get_imu_config__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// already included above
// #include "fastcdr/Cdr.h"

namespace oscp_imu_driver
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_oscp_imu_driver
cdr_serialize(
  const oscp_imu_driver::srv::GetIMUConfig_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_oscp_imu_driver
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  oscp_imu_driver::srv::GetIMUConfig_Response & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_oscp_imu_driver
get_serialized_size(
  const oscp_imu_driver::srv::GetIMUConfig_Response & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_oscp_imu_driver
max_serialized_size_GetIMUConfig_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_oscp_imu_driver
cdr_serialize_key(
  const oscp_imu_driver::srv::GetIMUConfig_Response & ros_message,
  eprosima::fastcdr::Cdr &);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_oscp_imu_driver
get_serialized_size_key(
  const oscp_imu_driver::srv::GetIMUConfig_Response & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_oscp_imu_driver
max_serialized_size_key_GetIMUConfig_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace oscp_imu_driver

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_oscp_imu_driver
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, oscp_imu_driver, srv, GetIMUConfig_Response)();

#ifdef __cplusplus
}
#endif

// already included above
// #include <cstddef>
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "oscp_imu_driver/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
// already included above
// #include "oscp_imu_driver/srv/detail/get_imu_config__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// already included above
// #include "fastcdr/Cdr.h"

namespace oscp_imu_driver
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_oscp_imu_driver
cdr_serialize(
  const oscp_imu_driver::srv::GetIMUConfig_Event & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_oscp_imu_driver
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  oscp_imu_driver::srv::GetIMUConfig_Event & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_oscp_imu_driver
get_serialized_size(
  const oscp_imu_driver::srv::GetIMUConfig_Event & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_oscp_imu_driver
max_serialized_size_GetIMUConfig_Event(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_oscp_imu_driver
cdr_serialize_key(
  const oscp_imu_driver::srv::GetIMUConfig_Event & ros_message,
  eprosima::fastcdr::Cdr &);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_oscp_imu_driver
get_serialized_size_key(
  const oscp_imu_driver::srv::GetIMUConfig_Event & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_oscp_imu_driver
max_serialized_size_key_GetIMUConfig_Event(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace oscp_imu_driver

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_oscp_imu_driver
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, oscp_imu_driver, srv, GetIMUConfig_Event)();

#ifdef __cplusplus
}
#endif

#include "rmw/types.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "oscp_imu_driver/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_oscp_imu_driver
const rosidl_service_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, oscp_imu_driver, srv, GetIMUConfig)();

#ifdef __cplusplus
}
#endif

#endif  // OSCP_IMU_DRIVER__SRV__DETAIL__GET_IMU_CONFIG__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
