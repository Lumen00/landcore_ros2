// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from oscp_imu_msgs:msg/OscpRot.idl
// generated code does not contain a copyright notice

#include "oscp_imu_msgs/msg/detail/oscp_rot__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_oscp_imu_msgs
const rosidl_type_hash_t *
oscp_imu_msgs__msg__OscpRot__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x82, 0xf2, 0xbc, 0xc3, 0x9e, 0x9a, 0x0c, 0x98,
      0x68, 0x64, 0x53, 0xba, 0x1c, 0x3f, 0x26, 0x19,
      0xa2, 0x1b, 0xe9, 0xe7, 0x9e, 0xf1, 0x20, 0x1f,
      0x29, 0xd5, 0x55, 0x16, 0xe1, 0xcc, 0x7f, 0x79,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "std_msgs/msg/detail/header__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t std_msgs__msg__Header__EXPECTED_HASH = {1, {
    0xf4, 0x9f, 0xb3, 0xae, 0x2c, 0xf0, 0x70, 0xf7,
    0x93, 0x64, 0x5f, 0xf7, 0x49, 0x68, 0x3a, 0xc6,
    0xb0, 0x62, 0x03, 0xe4, 0x1c, 0x89, 0x1e, 0x17,
    0x70, 0x1b, 0x1c, 0xb5, 0x97, 0xce, 0x6a, 0x01,
  }};
#endif

static char oscp_imu_msgs__msg__OscpRot__TYPE_NAME[] = "oscp_imu_msgs/msg/OscpRot";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char std_msgs__msg__Header__TYPE_NAME[] = "std_msgs/msg/Header";

// Define type names, field names, and default values
static char oscp_imu_msgs__msg__OscpRot__FIELD_NAME__header[] = "header";
static char oscp_imu_msgs__msg__OscpRot__FIELD_NAME__header_byte[] = "header_byte";
static char oscp_imu_msgs__msg__OscpRot__FIELD_NAME__counter[] = "counter";
static char oscp_imu_msgs__msg__OscpRot__FIELD_NAME__timestamp_ms[] = "timestamp_ms";
static char oscp_imu_msgs__msg__OscpRot__FIELD_NAME__rotation_matrix[] = "rotation_matrix";
static char oscp_imu_msgs__msg__OscpRot__FIELD_NAME__status[] = "status";
static char oscp_imu_msgs__msg__OscpRot__FIELD_NAME__crc[] = "crc";

static rosidl_runtime_c__type_description__Field oscp_imu_msgs__msg__OscpRot__FIELDS[] = {
  {
    {oscp_imu_msgs__msg__OscpRot__FIELD_NAME__header, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    },
    {NULL, 0, 0},
  },
  {
    {oscp_imu_msgs__msg__OscpRot__FIELD_NAME__header_byte, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {oscp_imu_msgs__msg__OscpRot__FIELD_NAME__counter, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {oscp_imu_msgs__msg__OscpRot__FIELD_NAME__timestamp_ms, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {oscp_imu_msgs__msg__OscpRot__FIELD_NAME__rotation_matrix, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_ARRAY,
      9,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {oscp_imu_msgs__msg__OscpRot__FIELD_NAME__status, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {oscp_imu_msgs__msg__OscpRot__FIELD_NAME__crc, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription oscp_imu_msgs__msg__OscpRot__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
oscp_imu_msgs__msg__OscpRot__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {oscp_imu_msgs__msg__OscpRot__TYPE_NAME, 25, 25},
      {oscp_imu_msgs__msg__OscpRot__FIELDS, 7, 7},
    },
    {oscp_imu_msgs__msg__OscpRot__REFERENCED_TYPE_DESCRIPTIONS, 2, 2},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Header__EXPECTED_HASH, std_msgs__msg__Header__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = std_msgs__msg__Header__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# OSCP Rotation Matrix Frame\n"
  "# Corresponds to oscp_rot_mat_t structure\n"
  "\n"
  "std_msgs/Header header\n"
  "\n"
  "uint8 header_byte           # Misalignment Correction (2b) | Operating Mode (3b) | Frame Type (3b)\n"
  "uint8 counter               # Wrapping frame counter [0,255]\n"
  "uint64 timestamp_ms         # Timestamp in ms since last power up or reset\n"
  "\n"
  "# 3x3 Rotation Matrix (row-major order)\n"
  "float32[9] rotation_matrix  # [m00, m01, m02, m10, m11, m12, m20, m21, m22]\n"
  "\n"
  "uint8 status                # Status byte - use OSCP_STATUS_* masks\n"
  "uint16 crc                  # Checksum (CRC-16)";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
oscp_imu_msgs__msg__OscpRot__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {oscp_imu_msgs__msg__OscpRot__TYPE_NAME, 25, 25},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 565, 565},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
oscp_imu_msgs__msg__OscpRot__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[3];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 3, 3};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *oscp_imu_msgs__msg__OscpRot__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
