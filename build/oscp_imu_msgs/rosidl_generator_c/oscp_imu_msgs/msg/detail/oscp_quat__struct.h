// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from oscp_imu_msgs:msg/OscpQuat.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "oscp_imu_msgs/msg/oscp_quat.h"


#ifndef OSCP_IMU_MSGS__MSG__DETAIL__OSCP_QUAT__STRUCT_H_
#define OSCP_IMU_MSGS__MSG__DETAIL__OSCP_QUAT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"

/// Struct defined in msg/OscpQuat in the package oscp_imu_msgs.
/**
  * OSCP Quaternion IMU Frame
  * Corresponds to oscp_quat_t structure
 */
typedef struct oscp_imu_msgs__msg__OscpQuat
{
  std_msgs__msg__Header header;
  /// Misalignment Correction (2b) | Operating Mode (3b) | Frame Type (3b)
  uint8_t header_byte;
  /// Wrapping frame counter [0,255]
  uint8_t counter;
  /// Timestamp in ms since last power up or reset
  uint64_t timestamp_ms;
  float quat_w;
  float quat_x;
  float quat_y;
  float quat_z;
  /// Status byte - use OSCP_STATUS_* masks
  uint8_t status;
  /// Checksum (CRC-16)
  uint16_t crc;
} oscp_imu_msgs__msg__OscpQuat;

// Struct for a sequence of oscp_imu_msgs__msg__OscpQuat.
typedef struct oscp_imu_msgs__msg__OscpQuat__Sequence
{
  oscp_imu_msgs__msg__OscpQuat * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} oscp_imu_msgs__msg__OscpQuat__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // OSCP_IMU_MSGS__MSG__DETAIL__OSCP_QUAT__STRUCT_H_
