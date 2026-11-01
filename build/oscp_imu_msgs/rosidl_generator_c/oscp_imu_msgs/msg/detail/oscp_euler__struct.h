// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from oscp_imu_msgs:msg/OscpEuler.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "oscp_imu_msgs/msg/oscp_euler.h"


#ifndef OSCP_IMU_MSGS__MSG__DETAIL__OSCP_EULER__STRUCT_H_
#define OSCP_IMU_MSGS__MSG__DETAIL__OSCP_EULER__STRUCT_H_

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

/// Struct defined in msg/OscpEuler in the package oscp_imu_msgs.
/**
  * OSCP Euler IMU Frame
  * Corresponds to oscp_euler_t structure
 */
typedef struct oscp_imu_msgs__msg__OscpEuler
{
  std_msgs__msg__Header header;
  /// Misalignment Correction (2b) | Operating Mode (3b) | Frame Type (3b)
  uint8_t header_byte;
  /// Wrapping frame counter [0,255]
  uint8_t counter;
  /// Timestamp in ms since last power up or reset
  uint64_t timestamp_ms;
  /// deg
  float roll;
  /// deg
  float pitch;
  /// deg
  float yaw;
  /// Status byte - use OSCP_STATUS_* masks
  uint8_t status;
  /// Checksum (CRC-16)
  uint16_t crc;
} oscp_imu_msgs__msg__OscpEuler;

// Struct for a sequence of oscp_imu_msgs__msg__OscpEuler.
typedef struct oscp_imu_msgs__msg__OscpEuler__Sequence
{
  oscp_imu_msgs__msg__OscpEuler * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} oscp_imu_msgs__msg__OscpEuler__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // OSCP_IMU_MSGS__MSG__DETAIL__OSCP_EULER__STRUCT_H_
