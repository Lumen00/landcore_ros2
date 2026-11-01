// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from oscp_imu_msgs:msg/OscpGnss.idl
// generated code does not contain a copyright notice
#include "oscp_imu_msgs/msg/detail/oscp_gnss__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "oscp_imu_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "oscp_imu_msgs/msg/detail/oscp_gnss__struct.h"
#include "oscp_imu_msgs/msg/detail/oscp_gnss__functions.h"
#include "fastcdr/Cdr.h"

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

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "std_msgs/msg/detail/header__functions.h"  // header

// forward declare type support functions

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_oscp_imu_msgs
bool cdr_serialize_std_msgs__msg__Header(
  const std_msgs__msg__Header * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_oscp_imu_msgs
bool cdr_deserialize_std_msgs__msg__Header(
  eprosima::fastcdr::Cdr & cdr,
  std_msgs__msg__Header * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_oscp_imu_msgs
size_t get_serialized_size_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_oscp_imu_msgs
size_t max_serialized_size_std_msgs__msg__Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_oscp_imu_msgs
bool cdr_serialize_key_std_msgs__msg__Header(
  const std_msgs__msg__Header * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_oscp_imu_msgs
size_t get_serialized_size_key_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_oscp_imu_msgs
size_t max_serialized_size_key_std_msgs__msg__Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_oscp_imu_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, Header)();


using _OscpGnss__ros_msg_type = oscp_imu_msgs__msg__OscpGnss;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_oscp_imu_msgs
bool cdr_serialize_oscp_imu_msgs__msg__OscpGnss(
  const oscp_imu_msgs__msg__OscpGnss * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: header
  {
    cdr_serialize_std_msgs__msg__Header(
      &ros_message->header, cdr);
  }

  // Field name: header_byte
  {
    cdr << ros_message->header_byte;
  }

  // Field name: counter
  {
    cdr << ros_message->counter;
  }

  // Field name: timestamp_ms
  {
    cdr << ros_message->timestamp_ms;
  }

  // Field name: fix_type
  {
    cdr << ros_message->fix_type;
  }

  // Field name: num_satellites
  {
    cdr << ros_message->num_satellites;
  }

  // Field name: longitude
  {
    cdr << ros_message->longitude;
  }

  // Field name: latitude
  {
    cdr << ros_message->latitude;
  }

  // Field name: height_mm
  {
    cdr << ros_message->height_mm;
  }

  // Field name: h_accuracy_mm
  {
    cdr << ros_message->h_accuracy_mm;
  }

  // Field name: v_accuracy_mm
  {
    cdr << ros_message->v_accuracy_mm;
  }

  // Field name: vel_north_mms
  {
    cdr << ros_message->vel_north_mms;
  }

  // Field name: vel_east_mms
  {
    cdr << ros_message->vel_east_mms;
  }

  // Field name: vel_down_mms
  {
    cdr << ros_message->vel_down_mms;
  }

  // Field name: speed_accuracy_mms
  {
    cdr << ros_message->speed_accuracy_mms;
  }

  // Field name: heading_motion
  {
    cdr << ros_message->heading_motion;
  }

  // Field name: heading_accuracy
  {
    cdr << ros_message->heading_accuracy;
  }

  // Field name: position_dop
  {
    cdr << ros_message->position_dop;
  }

  // Field name: last_correction_age
  {
    cdr << ros_message->last_correction_age;
  }

  // Field name: gnss_status
  {
    cdr << ros_message->gnss_status;
  }

  // Field name: status
  {
    cdr << ros_message->status;
  }

  // Field name: crc
  {
    cdr << ros_message->crc;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_oscp_imu_msgs
bool cdr_deserialize_oscp_imu_msgs__msg__OscpGnss(
  eprosima::fastcdr::Cdr & cdr,
  oscp_imu_msgs__msg__OscpGnss * ros_message)
{
  // Field name: header
  {
    cdr_deserialize_std_msgs__msg__Header(cdr, &ros_message->header);
  }

  // Field name: header_byte
  {
    cdr >> ros_message->header_byte;
  }

  // Field name: counter
  {
    cdr >> ros_message->counter;
  }

  // Field name: timestamp_ms
  {
    cdr >> ros_message->timestamp_ms;
  }

  // Field name: fix_type
  {
    cdr >> ros_message->fix_type;
  }

  // Field name: num_satellites
  {
    cdr >> ros_message->num_satellites;
  }

  // Field name: longitude
  {
    cdr >> ros_message->longitude;
  }

  // Field name: latitude
  {
    cdr >> ros_message->latitude;
  }

  // Field name: height_mm
  {
    cdr >> ros_message->height_mm;
  }

  // Field name: h_accuracy_mm
  {
    cdr >> ros_message->h_accuracy_mm;
  }

  // Field name: v_accuracy_mm
  {
    cdr >> ros_message->v_accuracy_mm;
  }

  // Field name: vel_north_mms
  {
    cdr >> ros_message->vel_north_mms;
  }

  // Field name: vel_east_mms
  {
    cdr >> ros_message->vel_east_mms;
  }

  // Field name: vel_down_mms
  {
    cdr >> ros_message->vel_down_mms;
  }

  // Field name: speed_accuracy_mms
  {
    cdr >> ros_message->speed_accuracy_mms;
  }

  // Field name: heading_motion
  {
    cdr >> ros_message->heading_motion;
  }

  // Field name: heading_accuracy
  {
    cdr >> ros_message->heading_accuracy;
  }

  // Field name: position_dop
  {
    cdr >> ros_message->position_dop;
  }

  // Field name: last_correction_age
  {
    cdr >> ros_message->last_correction_age;
  }

  // Field name: gnss_status
  {
    cdr >> ros_message->gnss_status;
  }

  // Field name: status
  {
    cdr >> ros_message->status;
  }

  // Field name: crc
  {
    cdr >> ros_message->crc;
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_oscp_imu_msgs
size_t get_serialized_size_oscp_imu_msgs__msg__OscpGnss(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _OscpGnss__ros_msg_type * ros_message = static_cast<const _OscpGnss__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: header
  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);

  // Field name: header_byte
  {
    size_t item_size = sizeof(ros_message->header_byte);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: counter
  {
    size_t item_size = sizeof(ros_message->counter);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: timestamp_ms
  {
    size_t item_size = sizeof(ros_message->timestamp_ms);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: fix_type
  {
    size_t item_size = sizeof(ros_message->fix_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: num_satellites
  {
    size_t item_size = sizeof(ros_message->num_satellites);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: longitude
  {
    size_t item_size = sizeof(ros_message->longitude);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: latitude
  {
    size_t item_size = sizeof(ros_message->latitude);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: height_mm
  {
    size_t item_size = sizeof(ros_message->height_mm);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: h_accuracy_mm
  {
    size_t item_size = sizeof(ros_message->h_accuracy_mm);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: v_accuracy_mm
  {
    size_t item_size = sizeof(ros_message->v_accuracy_mm);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: vel_north_mms
  {
    size_t item_size = sizeof(ros_message->vel_north_mms);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: vel_east_mms
  {
    size_t item_size = sizeof(ros_message->vel_east_mms);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: vel_down_mms
  {
    size_t item_size = sizeof(ros_message->vel_down_mms);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: speed_accuracy_mms
  {
    size_t item_size = sizeof(ros_message->speed_accuracy_mms);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: heading_motion
  {
    size_t item_size = sizeof(ros_message->heading_motion);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: heading_accuracy
  {
    size_t item_size = sizeof(ros_message->heading_accuracy);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: position_dop
  {
    size_t item_size = sizeof(ros_message->position_dop);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: last_correction_age
  {
    size_t item_size = sizeof(ros_message->last_correction_age);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: gnss_status
  {
    size_t item_size = sizeof(ros_message->gnss_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: status
  {
    size_t item_size = sizeof(ros_message->status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: crc
  {
    size_t item_size = sizeof(ros_message->crc);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_oscp_imu_msgs
size_t max_serialized_size_oscp_imu_msgs__msg__OscpGnss(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Field name: header
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_std_msgs__msg__Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: header_byte
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: counter
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: timestamp_ms
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: fix_type
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: num_satellites
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: longitude
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: latitude
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: height_mm
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: h_accuracy_mm
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: v_accuracy_mm
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: vel_north_mms
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: vel_east_mms
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: vel_down_mms
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: speed_accuracy_mms
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: heading_motion
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: heading_accuracy
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: position_dop
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: last_correction_age
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: gnss_status
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: status
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: crc
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = oscp_imu_msgs__msg__OscpGnss;
    is_plain =
      (
      offsetof(DataType, crc) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_oscp_imu_msgs
bool cdr_serialize_key_oscp_imu_msgs__msg__OscpGnss(
  const oscp_imu_msgs__msg__OscpGnss * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: header
  {
    cdr_serialize_key_std_msgs__msg__Header(
      &ros_message->header, cdr);
  }

  // Field name: header_byte
  {
    cdr << ros_message->header_byte;
  }

  // Field name: counter
  {
    cdr << ros_message->counter;
  }

  // Field name: timestamp_ms
  {
    cdr << ros_message->timestamp_ms;
  }

  // Field name: fix_type
  {
    cdr << ros_message->fix_type;
  }

  // Field name: num_satellites
  {
    cdr << ros_message->num_satellites;
  }

  // Field name: longitude
  {
    cdr << ros_message->longitude;
  }

  // Field name: latitude
  {
    cdr << ros_message->latitude;
  }

  // Field name: height_mm
  {
    cdr << ros_message->height_mm;
  }

  // Field name: h_accuracy_mm
  {
    cdr << ros_message->h_accuracy_mm;
  }

  // Field name: v_accuracy_mm
  {
    cdr << ros_message->v_accuracy_mm;
  }

  // Field name: vel_north_mms
  {
    cdr << ros_message->vel_north_mms;
  }

  // Field name: vel_east_mms
  {
    cdr << ros_message->vel_east_mms;
  }

  // Field name: vel_down_mms
  {
    cdr << ros_message->vel_down_mms;
  }

  // Field name: speed_accuracy_mms
  {
    cdr << ros_message->speed_accuracy_mms;
  }

  // Field name: heading_motion
  {
    cdr << ros_message->heading_motion;
  }

  // Field name: heading_accuracy
  {
    cdr << ros_message->heading_accuracy;
  }

  // Field name: position_dop
  {
    cdr << ros_message->position_dop;
  }

  // Field name: last_correction_age
  {
    cdr << ros_message->last_correction_age;
  }

  // Field name: gnss_status
  {
    cdr << ros_message->gnss_status;
  }

  // Field name: status
  {
    cdr << ros_message->status;
  }

  // Field name: crc
  {
    cdr << ros_message->crc;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_oscp_imu_msgs
size_t get_serialized_size_key_oscp_imu_msgs__msg__OscpGnss(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _OscpGnss__ros_msg_type * ros_message = static_cast<const _OscpGnss__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: header
  current_alignment += get_serialized_size_key_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);

  // Field name: header_byte
  {
    size_t item_size = sizeof(ros_message->header_byte);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: counter
  {
    size_t item_size = sizeof(ros_message->counter);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: timestamp_ms
  {
    size_t item_size = sizeof(ros_message->timestamp_ms);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: fix_type
  {
    size_t item_size = sizeof(ros_message->fix_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: num_satellites
  {
    size_t item_size = sizeof(ros_message->num_satellites);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: longitude
  {
    size_t item_size = sizeof(ros_message->longitude);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: latitude
  {
    size_t item_size = sizeof(ros_message->latitude);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: height_mm
  {
    size_t item_size = sizeof(ros_message->height_mm);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: h_accuracy_mm
  {
    size_t item_size = sizeof(ros_message->h_accuracy_mm);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: v_accuracy_mm
  {
    size_t item_size = sizeof(ros_message->v_accuracy_mm);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: vel_north_mms
  {
    size_t item_size = sizeof(ros_message->vel_north_mms);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: vel_east_mms
  {
    size_t item_size = sizeof(ros_message->vel_east_mms);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: vel_down_mms
  {
    size_t item_size = sizeof(ros_message->vel_down_mms);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: speed_accuracy_mms
  {
    size_t item_size = sizeof(ros_message->speed_accuracy_mms);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: heading_motion
  {
    size_t item_size = sizeof(ros_message->heading_motion);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: heading_accuracy
  {
    size_t item_size = sizeof(ros_message->heading_accuracy);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: position_dop
  {
    size_t item_size = sizeof(ros_message->position_dop);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: last_correction_age
  {
    size_t item_size = sizeof(ros_message->last_correction_age);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: gnss_status
  {
    size_t item_size = sizeof(ros_message->gnss_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: status
  {
    size_t item_size = sizeof(ros_message->status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: crc
  {
    size_t item_size = sizeof(ros_message->crc);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_oscp_imu_msgs
size_t max_serialized_size_key_oscp_imu_msgs__msg__OscpGnss(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;
  // Field name: header
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_std_msgs__msg__Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: header_byte
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: counter
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: timestamp_ms
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: fix_type
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: num_satellites
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: longitude
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: latitude
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: height_mm
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: h_accuracy_mm
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: v_accuracy_mm
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: vel_north_mms
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: vel_east_mms
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: vel_down_mms
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: speed_accuracy_mms
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: heading_motion
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: heading_accuracy
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: position_dop
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: last_correction_age
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: gnss_status
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: status
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: crc
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = oscp_imu_msgs__msg__OscpGnss;
    is_plain =
      (
      offsetof(DataType, crc) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _OscpGnss__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const oscp_imu_msgs__msg__OscpGnss * ros_message = static_cast<const oscp_imu_msgs__msg__OscpGnss *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_oscp_imu_msgs__msg__OscpGnss(ros_message, cdr);
}

static bool _OscpGnss__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  oscp_imu_msgs__msg__OscpGnss * ros_message = static_cast<oscp_imu_msgs__msg__OscpGnss *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_oscp_imu_msgs__msg__OscpGnss(cdr, ros_message);
}

static uint32_t _OscpGnss__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_oscp_imu_msgs__msg__OscpGnss(
      untyped_ros_message, 0));
}

static size_t _OscpGnss__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_oscp_imu_msgs__msg__OscpGnss(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_OscpGnss = {
  "oscp_imu_msgs::msg",
  "OscpGnss",
  _OscpGnss__cdr_serialize,
  _OscpGnss__cdr_deserialize,
  _OscpGnss__get_serialized_size,
  _OscpGnss__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _OscpGnss__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_OscpGnss,
  get_message_typesupport_handle_function,
  &oscp_imu_msgs__msg__OscpGnss__get_type_hash,
  &oscp_imu_msgs__msg__OscpGnss__get_type_description,
  &oscp_imu_msgs__msg__OscpGnss__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, oscp_imu_msgs, msg, OscpGnss)() {
  return &_OscpGnss__type_support;
}

#if defined(__cplusplus)
}
#endif
