// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from oscp_imu_msgs:msg/OscpGnss.idl
// generated code does not contain a copyright notice

#include "oscp_imu_msgs/msg/detail/oscp_gnss__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_oscp_imu_msgs
const rosidl_type_hash_t *
oscp_imu_msgs__msg__OscpGnss__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xe0, 0x6b, 0x33, 0x9d, 0x1a, 0xe4, 0x00, 0x19,
      0xd1, 0x8c, 0x1a, 0x81, 0x8e, 0xee, 0x59, 0x63,
      0x80, 0x08, 0x42, 0x35, 0x95, 0x4f, 0x1b, 0x28,
      0x7f, 0x11, 0x3c, 0xbf, 0x00, 0x93, 0xed, 0xa0,
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

static char oscp_imu_msgs__msg__OscpGnss__TYPE_NAME[] = "oscp_imu_msgs/msg/OscpGnss";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char std_msgs__msg__Header__TYPE_NAME[] = "std_msgs/msg/Header";

// Define type names, field names, and default values
static char oscp_imu_msgs__msg__OscpGnss__FIELD_NAME__header[] = "header";
static char oscp_imu_msgs__msg__OscpGnss__FIELD_NAME__header_byte[] = "header_byte";
static char oscp_imu_msgs__msg__OscpGnss__FIELD_NAME__counter[] = "counter";
static char oscp_imu_msgs__msg__OscpGnss__FIELD_NAME__timestamp_ms[] = "timestamp_ms";
static char oscp_imu_msgs__msg__OscpGnss__FIELD_NAME__fix_type[] = "fix_type";
static char oscp_imu_msgs__msg__OscpGnss__FIELD_NAME__num_satellites[] = "num_satellites";
static char oscp_imu_msgs__msg__OscpGnss__FIELD_NAME__longitude[] = "longitude";
static char oscp_imu_msgs__msg__OscpGnss__FIELD_NAME__latitude[] = "latitude";
static char oscp_imu_msgs__msg__OscpGnss__FIELD_NAME__height_mm[] = "height_mm";
static char oscp_imu_msgs__msg__OscpGnss__FIELD_NAME__h_accuracy_mm[] = "h_accuracy_mm";
static char oscp_imu_msgs__msg__OscpGnss__FIELD_NAME__v_accuracy_mm[] = "v_accuracy_mm";
static char oscp_imu_msgs__msg__OscpGnss__FIELD_NAME__vel_north_mms[] = "vel_north_mms";
static char oscp_imu_msgs__msg__OscpGnss__FIELD_NAME__vel_east_mms[] = "vel_east_mms";
static char oscp_imu_msgs__msg__OscpGnss__FIELD_NAME__vel_down_mms[] = "vel_down_mms";
static char oscp_imu_msgs__msg__OscpGnss__FIELD_NAME__speed_accuracy_mms[] = "speed_accuracy_mms";
static char oscp_imu_msgs__msg__OscpGnss__FIELD_NAME__heading_motion[] = "heading_motion";
static char oscp_imu_msgs__msg__OscpGnss__FIELD_NAME__heading_accuracy[] = "heading_accuracy";
static char oscp_imu_msgs__msg__OscpGnss__FIELD_NAME__position_dop[] = "position_dop";
static char oscp_imu_msgs__msg__OscpGnss__FIELD_NAME__last_correction_age[] = "last_correction_age";
static char oscp_imu_msgs__msg__OscpGnss__FIELD_NAME__gnss_status[] = "gnss_status";
static char oscp_imu_msgs__msg__OscpGnss__FIELD_NAME__status[] = "status";
static char oscp_imu_msgs__msg__OscpGnss__FIELD_NAME__crc[] = "crc";

static rosidl_runtime_c__type_description__Field oscp_imu_msgs__msg__OscpGnss__FIELDS[] = {
  {
    {oscp_imu_msgs__msg__OscpGnss__FIELD_NAME__header, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    },
    {NULL, 0, 0},
  },
  {
    {oscp_imu_msgs__msg__OscpGnss__FIELD_NAME__header_byte, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {oscp_imu_msgs__msg__OscpGnss__FIELD_NAME__counter, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {oscp_imu_msgs__msg__OscpGnss__FIELD_NAME__timestamp_ms, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {oscp_imu_msgs__msg__OscpGnss__FIELD_NAME__fix_type, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {oscp_imu_msgs__msg__OscpGnss__FIELD_NAME__num_satellites, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {oscp_imu_msgs__msg__OscpGnss__FIELD_NAME__longitude, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {oscp_imu_msgs__msg__OscpGnss__FIELD_NAME__latitude, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {oscp_imu_msgs__msg__OscpGnss__FIELD_NAME__height_mm, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {oscp_imu_msgs__msg__OscpGnss__FIELD_NAME__h_accuracy_mm, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {oscp_imu_msgs__msg__OscpGnss__FIELD_NAME__v_accuracy_mm, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {oscp_imu_msgs__msg__OscpGnss__FIELD_NAME__vel_north_mms, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {oscp_imu_msgs__msg__OscpGnss__FIELD_NAME__vel_east_mms, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {oscp_imu_msgs__msg__OscpGnss__FIELD_NAME__vel_down_mms, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {oscp_imu_msgs__msg__OscpGnss__FIELD_NAME__speed_accuracy_mms, 18, 18},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {oscp_imu_msgs__msg__OscpGnss__FIELD_NAME__heading_motion, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {oscp_imu_msgs__msg__OscpGnss__FIELD_NAME__heading_accuracy, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {oscp_imu_msgs__msg__OscpGnss__FIELD_NAME__position_dop, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {oscp_imu_msgs__msg__OscpGnss__FIELD_NAME__last_correction_age, 19, 19},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {oscp_imu_msgs__msg__OscpGnss__FIELD_NAME__gnss_status, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {oscp_imu_msgs__msg__OscpGnss__FIELD_NAME__status, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {oscp_imu_msgs__msg__OscpGnss__FIELD_NAME__crc, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription oscp_imu_msgs__msg__OscpGnss__REFERENCED_TYPE_DESCRIPTIONS[] = {
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
oscp_imu_msgs__msg__OscpGnss__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {oscp_imu_msgs__msg__OscpGnss__TYPE_NAME, 26, 26},
      {oscp_imu_msgs__msg__OscpGnss__FIELDS, 22, 22},
    },
    {oscp_imu_msgs__msg__OscpGnss__REFERENCED_TYPE_DESCRIPTIONS, 2, 2},
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
  "# OSCP GNSS Operating Frame\n"
  "# Corresponds to oscp_gnss_t structure from manual Table 11\n"
  "\n"
  "std_msgs/Header header\n"
  "\n"
  "uint8 header_byte           # Misalignment Correction (2b) | Operating Mode (3b) | Frame Type (3b)\n"
  "uint8 counter               # Wrapping frame counter [0,255]\n"
  "uint64 timestamp_ms         # Timestamp in ms since last power up or reset\n"
  "\n"
  "uint8 fix_type              # GNSS Fix Type (see Table 26)\n"
  "uint8 num_satellites        # Number of satellites used\n"
  "\n"
  "float32 longitude           # degrees\n"
  "float32 latitude            # degrees\n"
  "int32 height_mm             # mm above ellipsoid (signed)\n"
  "\n"
  "uint32 h_accuracy_mm        # Horizontal accuracy estimate (mm)\n"
  "uint32 v_accuracy_mm        # Vertical accuracy estimate (mm)\n"
  "\n"
  "int32 vel_north_mms         # Velocity North in mm/sec [NED Frame] (signed)\n"
  "int32 vel_east_mms          # Velocity East in mm/sec [NED Frame] (signed)\n"
  "int32 vel_down_mms          # Velocity Down in mm/sec [NED Frame] (signed)\n"
  "\n"
  "uint32 speed_accuracy_mms   # Speed Accuracy Estimate (mm/sec)\n"
  "\n"
  "float32 heading_motion      # Heading of Motion (\\xc2\\xb0) [2D]\n"
  "float32 heading_accuracy    # Heading Accuracy Estimate (\\xc2\\xb0)\n"
  "\n"
  "float32 position_dop        # Position DOP\n"
  "\n"
  "uint8 last_correction_age   # Age of last correction (see Table 27)\n"
  "uint8 gnss_status           # [7:2] RESERVED | [1] Invalid LLH | [0] GNSS Fix OK\n"
  "\n"
  "uint8 status                # Status byte - use OSCP_STATUS_* masks\n"
  "uint16 crc                  # Checksum (CRC-16)";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
oscp_imu_msgs__msg__OscpGnss__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {oscp_imu_msgs__msg__OscpGnss__TYPE_NAME, 26, 26},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 1446, 1446},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
oscp_imu_msgs__msg__OscpGnss__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[3];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 3, 3};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *oscp_imu_msgs__msg__OscpGnss__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
