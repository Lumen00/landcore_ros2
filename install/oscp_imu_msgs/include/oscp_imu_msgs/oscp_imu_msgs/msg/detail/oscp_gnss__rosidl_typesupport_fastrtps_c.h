// generated from rosidl_typesupport_fastrtps_c/resource/idl__rosidl_typesupport_fastrtps_c.h.em
// with input from oscp_imu_msgs:msg/OscpGnss.idl
// generated code does not contain a copyright notice
#ifndef OSCP_IMU_MSGS__MSG__DETAIL__OSCP_GNSS__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
#define OSCP_IMU_MSGS__MSG__DETAIL__OSCP_GNSS__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_


#include <stddef.h>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "oscp_imu_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "oscp_imu_msgs/msg/detail/oscp_gnss__struct.h"
#include "fastcdr/Cdr.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_oscp_imu_msgs
bool cdr_serialize_oscp_imu_msgs__msg__OscpGnss(
  const oscp_imu_msgs__msg__OscpGnss * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_oscp_imu_msgs
bool cdr_deserialize_oscp_imu_msgs__msg__OscpGnss(
  eprosima::fastcdr::Cdr &,
  oscp_imu_msgs__msg__OscpGnss * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_oscp_imu_msgs
size_t get_serialized_size_oscp_imu_msgs__msg__OscpGnss(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_oscp_imu_msgs
size_t max_serialized_size_oscp_imu_msgs__msg__OscpGnss(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_oscp_imu_msgs
bool cdr_serialize_key_oscp_imu_msgs__msg__OscpGnss(
  const oscp_imu_msgs__msg__OscpGnss * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_oscp_imu_msgs
size_t get_serialized_size_key_oscp_imu_msgs__msg__OscpGnss(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_oscp_imu_msgs
size_t max_serialized_size_key_oscp_imu_msgs__msg__OscpGnss(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_oscp_imu_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, oscp_imu_msgs, msg, OscpGnss)();

#ifdef __cplusplus
}
#endif

#endif  // OSCP_IMU_MSGS__MSG__DETAIL__OSCP_GNSS__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
