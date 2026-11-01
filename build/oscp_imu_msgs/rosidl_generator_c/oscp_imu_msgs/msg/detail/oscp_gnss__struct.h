// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from oscp_imu_msgs:msg/OscpGnss.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "oscp_imu_msgs/msg/oscp_gnss.h"


#ifndef OSCP_IMU_MSGS__MSG__DETAIL__OSCP_GNSS__STRUCT_H_
#define OSCP_IMU_MSGS__MSG__DETAIL__OSCP_GNSS__STRUCT_H_

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

/// Struct defined in msg/OscpGnss in the package oscp_imu_msgs.
/**
  * OSCP GNSS Operating Frame
  * Corresponds to oscp_gnss_t structure from manual Table 11
 */
typedef struct oscp_imu_msgs__msg__OscpGnss
{
  std_msgs__msg__Header header;
  /// Misalignment Correction (2b) | Operating Mode (3b) | Frame Type (3b)
  uint8_t header_byte;
  /// Wrapping frame counter [0,255]
  uint8_t counter;
  /// Timestamp in ms since last power up or reset
  uint64_t timestamp_ms;
  /// GNSS Fix Type (see Table 26)
  uint8_t fix_type;
  /// Number of satellites used
  uint8_t num_satellites;
  /// degrees
  float longitude;
  /// degrees
  float latitude;
  /// mm above ellipsoid (signed)
  int32_t height_mm;
  /// Horizontal accuracy estimate (mm)
  uint32_t h_accuracy_mm;
  /// Vertical accuracy estimate (mm)
  uint32_t v_accuracy_mm;
  /// Velocity North in mm/sec (signed)
  int32_t vel_north_mms;
  /// Velocity East in mm/sec (signed)
  int32_t vel_east_mms;
  /// Velocity Down in mm/sec (signed)
  int32_t vel_down_mms;
  /// Speed Accuracy Estimate (mm/sec)
  uint32_t speed_accuracy_mms;
  /// Heading of Motion (°)
  float heading_motion;
  /// Heading Accuracy Estimate (°)
  float heading_accuracy;
  /// Position DOP
  float position_dop;
  /// Age of last correction (see Table 27)
  uint8_t last_correction_age;
  /// [7:2] RESERVED | [1] Invalid LLH | [0] GNSS Fix OK
  uint8_t gnss_status;
  /// Status byte - use OSCP_STATUS_* masks
  uint8_t status;
  /// Checksum (CRC-16)
  uint16_t crc;
} oscp_imu_msgs__msg__OscpGnss;

// Struct for a sequence of oscp_imu_msgs__msg__OscpGnss.
typedef struct oscp_imu_msgs__msg__OscpGnss__Sequence
{
  oscp_imu_msgs__msg__OscpGnss * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} oscp_imu_msgs__msg__OscpGnss__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // OSCP_IMU_MSGS__MSG__DETAIL__OSCP_GNSS__STRUCT_H_
