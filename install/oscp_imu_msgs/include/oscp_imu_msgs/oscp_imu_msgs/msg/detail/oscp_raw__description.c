// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from oscp_imu_msgs:msg/OscpRaw.idl
// generated code does not contain a copyright notice

#include "oscp_imu_msgs/msg/detail/oscp_raw__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_oscp_imu_msgs
const rosidl_type_hash_t *
oscp_imu_msgs__msg__OscpRaw__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x0f, 0x7d, 0xbb, 0x25, 0xde, 0x52, 0x05, 0xf4,
      0xae, 0xf8, 0x88, 0x4e, 0xd9, 0xc5, 0xe6, 0x60,
      0xa4, 0x15, 0xcf, 0x6c, 0x72, 0xe1, 0x01, 0xb3,
      0xed, 0x76, 0xed, 0xd9, 0xac, 0xf5, 0xcd, 0x7c,
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

static char oscp_imu_msgs__msg__OscpRaw__TYPE_NAME[] = "oscp_imu_msgs/msg/OscpRaw";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char std_msgs__msg__Header__TYPE_NAME[] = "std_msgs/msg/Header";

// Define type names, field names, and default values
static char oscp_imu_msgs__msg__OscpRaw__FIELD_NAME__header[] = "header";
static char oscp_imu_msgs__msg__OscpRaw__FIELD_NAME__header_byte[] = "header_byte";
static char oscp_imu_msgs__msg__OscpRaw__FIELD_NAME__counter[] = "counter";
static char oscp_imu_msgs__msg__OscpRaw__FIELD_NAME__timestamp_ms[] = "timestamp_ms";
static char oscp_imu_msgs__msg__OscpRaw__FIELD_NAME__gyro_x[] = "gyro_x";
static char oscp_imu_msgs__msg__OscpRaw__FIELD_NAME__gyro_y[] = "gyro_y";
static char oscp_imu_msgs__msg__OscpRaw__FIELD_NAME__gyro_z[] = "gyro_z";
static char oscp_imu_msgs__msg__OscpRaw__FIELD_NAME__accel_x[] = "accel_x";
static char oscp_imu_msgs__msg__OscpRaw__FIELD_NAME__accel_y[] = "accel_y";
static char oscp_imu_msgs__msg__OscpRaw__FIELD_NAME__accel_z[] = "accel_z";
static char oscp_imu_msgs__msg__OscpRaw__FIELD_NAME__incl_x[] = "incl_x";
static char oscp_imu_msgs__msg__OscpRaw__FIELD_NAME__incl_y[] = "incl_y";
static char oscp_imu_msgs__msg__OscpRaw__FIELD_NAME__mag_x[] = "mag_x";
static char oscp_imu_msgs__msg__OscpRaw__FIELD_NAME__mag_y[] = "mag_y";
static char oscp_imu_msgs__msg__OscpRaw__FIELD_NAME__mag_z[] = "mag_z";
static char oscp_imu_msgs__msg__OscpRaw__FIELD_NAME__temp[] = "temp";
static char oscp_imu_msgs__msg__OscpRaw__FIELD_NAME__status[] = "status";
static char oscp_imu_msgs__msg__OscpRaw__FIELD_NAME__crc[] = "crc";

static rosidl_runtime_c__type_description__Field oscp_imu_msgs__msg__OscpRaw__FIELDS[] = {
  {
    {oscp_imu_msgs__msg__OscpRaw__FIELD_NAME__header, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    },
    {NULL, 0, 0},
  },
  {
    {oscp_imu_msgs__msg__OscpRaw__FIELD_NAME__header_byte, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {oscp_imu_msgs__msg__OscpRaw__FIELD_NAME__counter, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {oscp_imu_msgs__msg__OscpRaw__FIELD_NAME__timestamp_ms, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {oscp_imu_msgs__msg__OscpRaw__FIELD_NAME__gyro_x, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {oscp_imu_msgs__msg__OscpRaw__FIELD_NAME__gyro_y, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {oscp_imu_msgs__msg__OscpRaw__FIELD_NAME__gyro_z, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {oscp_imu_msgs__msg__OscpRaw__FIELD_NAME__accel_x, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {oscp_imu_msgs__msg__OscpRaw__FIELD_NAME__accel_y, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {oscp_imu_msgs__msg__OscpRaw__FIELD_NAME__accel_z, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {oscp_imu_msgs__msg__OscpRaw__FIELD_NAME__incl_x, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {oscp_imu_msgs__msg__OscpRaw__FIELD_NAME__incl_y, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {oscp_imu_msgs__msg__OscpRaw__FIELD_NAME__mag_x, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {oscp_imu_msgs__msg__OscpRaw__FIELD_NAME__mag_y, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {oscp_imu_msgs__msg__OscpRaw__FIELD_NAME__mag_z, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {oscp_imu_msgs__msg__OscpRaw__FIELD_NAME__temp, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {oscp_imu_msgs__msg__OscpRaw__FIELD_NAME__status, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {oscp_imu_msgs__msg__OscpRaw__FIELD_NAME__crc, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription oscp_imu_msgs__msg__OscpRaw__REFERENCED_TYPE_DESCRIPTIONS[] = {
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
oscp_imu_msgs__msg__OscpRaw__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {oscp_imu_msgs__msg__OscpRaw__TYPE_NAME, 25, 25},
      {oscp_imu_msgs__msg__OscpRaw__FIELDS, 18, 18},
    },
    {oscp_imu_msgs__msg__OscpRaw__REFERENCED_TYPE_DESCRIPTIONS, 2, 2},
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
  "# OSCP Raw IMU Frame\n"
  "# Corresponds to oscp_raw_t structure\n"
  "\n"
  "std_msgs/Header header\n"
  "\n"
  "uint8 header_byte       # Misalignment Correction (2b) | Operating Mode (3b) | Frame Type (3b)\n"
  "uint8 counter           # Wrapping frame counter [0,255]\n"
  "uint64 timestamp_ms     # Timestamp in ms since last power up or reset\n"
  "\n"
  "float32 gyro_x          # \\xc2\\xb0/sec\n"
  "float32 gyro_y          # \\xc2\\xb0/sec\n"
  "float32 gyro_z          # \\xc2\\xb0/sec\n"
  "\n"
  "float32 accel_x         # g\n"
  "float32 accel_y         # g\n"
  "float32 accel_z         # g\n"
  "\n"
  "float32 incl_x          # mg\n"
  "float32 incl_y          # mg\n"
  "\n"
  "float32 mag_x           # \\xce\\xbcT\n"
  "float32 mag_y           # \\xce\\xbcT\n"
  "float32 mag_z           # \\xce\\xbcT\n"
  "\n"
  "float32 temp            # \\xc2\\xb0C\n"
  "\n"
  "uint8 status            # Status byte - use OSCP_STATUS_* masks\n"
  "uint16 crc              # Checksum (CRC-16)";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
oscp_imu_msgs__msg__OscpRaw__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {oscp_imu_msgs__msg__OscpRaw__TYPE_NAME, 25, 25},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 775, 775},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
oscp_imu_msgs__msg__OscpRaw__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[3];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 3, 3};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *oscp_imu_msgs__msg__OscpRaw__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
