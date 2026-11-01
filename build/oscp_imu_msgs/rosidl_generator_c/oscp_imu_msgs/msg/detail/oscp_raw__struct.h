// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from oscp_imu_msgs:msg/OscpRaw.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "oscp_imu_msgs/msg/oscp_raw.h"


#ifndef OSCP_IMU_MSGS__MSG__DETAIL__OSCP_RAW__STRUCT_H_
#define OSCP_IMU_MSGS__MSG__DETAIL__OSCP_RAW__STRUCT_H_

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

/// Struct defined in msg/OscpRaw in the package oscp_imu_msgs.
/**
  * OSCP Raw IMU Frame
  * Corresponds to oscp_raw_t structure
 */
typedef struct oscp_imu_msgs__msg__OscpRaw
{
  std_msgs__msg__Header header;
  /// Misalignment Correction (2b) | Operating Mode (3b) | Frame Type (3b)
  uint8_t header_byte;
  /// Wrapping frame counter [0,255]
  uint8_t counter;
  /// Timestamp in ms since last power up or reset
  uint64_t timestamp_ms;
  /// °/sec
  float gyro_x;
  /// °/sec
  float gyro_y;
  /// °/sec
  float gyro_z;
  /// g
  float accel_x;
  /// g
  float accel_y;
  /// g
  float accel_z;
  /// mg
  float incl_x;
  /// mg
  float incl_y;
  /// μT
  float mag_x;
  /// μT
  float mag_y;
  /// μT
  float mag_z;
  /// °C
  float temp;
  /// Status byte - use OSCP_STATUS_* masks
  uint8_t status;
  /// Checksum (CRC-16)
  uint16_t crc;
} oscp_imu_msgs__msg__OscpRaw;

// Struct for a sequence of oscp_imu_msgs__msg__OscpRaw.
typedef struct oscp_imu_msgs__msg__OscpRaw__Sequence
{
  oscp_imu_msgs__msg__OscpRaw * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} oscp_imu_msgs__msg__OscpRaw__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // OSCP_IMU_MSGS__MSG__DETAIL__OSCP_RAW__STRUCT_H_
