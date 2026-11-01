// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from oscp_imu_driver:srv/GetIMUConfig.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "oscp_imu_driver/srv/get_imu_config.h"


#ifndef OSCP_IMU_DRIVER__SRV__DETAIL__GET_IMU_CONFIG__STRUCT_H_
#define OSCP_IMU_DRIVER__SRV__DETAIL__GET_IMU_CONFIG__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/GetIMUConfig in the package oscp_imu_driver.
typedef struct oscp_imu_driver__srv__GetIMUConfig_Request
{
  uint8_t structure_needs_at_least_one_member;
} oscp_imu_driver__srv__GetIMUConfig_Request;

// Struct for a sequence of oscp_imu_driver__srv__GetIMUConfig_Request.
typedef struct oscp_imu_driver__srv__GetIMUConfig_Request__Sequence
{
  oscp_imu_driver__srv__GetIMUConfig_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} oscp_imu_driver__srv__GetIMUConfig_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'config_summary'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/GetIMUConfig in the package oscp_imu_driver.
typedef struct oscp_imu_driver__srv__GetIMUConfig_Response
{
  rosidl_runtime_c__String config_summary;
} oscp_imu_driver__srv__GetIMUConfig_Response;

// Struct for a sequence of oscp_imu_driver__srv__GetIMUConfig_Response.
typedef struct oscp_imu_driver__srv__GetIMUConfig_Response__Sequence
{
  oscp_imu_driver__srv__GetIMUConfig_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} oscp_imu_driver__srv__GetIMUConfig_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  oscp_imu_driver__srv__GetIMUConfig_Event__request__MAX_SIZE = 1
};
// response
enum
{
  oscp_imu_driver__srv__GetIMUConfig_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/GetIMUConfig in the package oscp_imu_driver.
typedef struct oscp_imu_driver__srv__GetIMUConfig_Event
{
  service_msgs__msg__ServiceEventInfo info;
  oscp_imu_driver__srv__GetIMUConfig_Request__Sequence request;
  oscp_imu_driver__srv__GetIMUConfig_Response__Sequence response;
} oscp_imu_driver__srv__GetIMUConfig_Event;

// Struct for a sequence of oscp_imu_driver__srv__GetIMUConfig_Event.
typedef struct oscp_imu_driver__srv__GetIMUConfig_Event__Sequence
{
  oscp_imu_driver__srv__GetIMUConfig_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} oscp_imu_driver__srv__GetIMUConfig_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // OSCP_IMU_DRIVER__SRV__DETAIL__GET_IMU_CONFIG__STRUCT_H_
