// generated from rosidl_typesupport_fastrtps_c/resource/idl__rosidl_typesupport_fastrtps_c.h.em
// with input from oscp_imu_msgs:msg/OscpRaw.idl
// generated code does not contain a copyright notice
#ifndef OSCP_IMU_MSGS__MSG__DETAIL__OSCP_RAW__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
#define OSCP_IMU_MSGS__MSG__DETAIL__OSCP_RAW__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_


#include <stddef.h>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "oscp_imu_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "oscp_imu_msgs/msg/detail/oscp_raw__struct.h"
#include "fastcdr/Cdr.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_oscp_imu_msgs
bool cdr_serialize_oscp_imu_msgs__msg__OscpRaw(
  const oscp_imu_msgs__msg__OscpRaw * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_oscp_imu_msgs
bool cdr_deserialize_oscp_imu_msgs__msg__OscpRaw(
  eprosima::fastcdr::Cdr &,
  oscp_imu_msgs__msg__OscpRaw * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_oscp_imu_msgs
size_t get_serialized_size_oscp_imu_msgs__msg__OscpRaw(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_oscp_imu_msgs
size_t max_serialized_size_oscp_imu_msgs__msg__OscpRaw(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_oscp_imu_msgs
bool cdr_serialize_key_oscp_imu_msgs__msg__OscpRaw(
  const oscp_imu_msgs__msg__OscpRaw * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_oscp_imu_msgs
size_t get_serialized_size_key_oscp_imu_msgs__msg__OscpRaw(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_oscp_imu_msgs
size_t max_serialized_size_key_oscp_imu_msgs__msg__OscpRaw(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_oscp_imu_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, oscp_imu_msgs, msg, OscpRaw)();

#ifdef __cplusplus
}
#endif

#endif  // OSCP_IMU_MSGS__MSG__DETAIL__OSCP_RAW__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
