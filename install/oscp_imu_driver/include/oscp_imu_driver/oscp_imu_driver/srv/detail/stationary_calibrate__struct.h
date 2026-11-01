// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from oscp_imu_driver:srv/StationaryCalibrate.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "oscp_imu_driver/srv/stationary_calibrate.h"


#ifndef OSCP_IMU_DRIVER__SRV__DETAIL__STATIONARY_CALIBRATE__STRUCT_H_
#define OSCP_IMU_DRIVER__SRV__DETAIL__STATIONARY_CALIBRATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/StationaryCalibrate in the package oscp_imu_driver.
typedef struct oscp_imu_driver__srv__StationaryCalibrate_Request
{
  float duration;
} oscp_imu_driver__srv__StationaryCalibrate_Request;

// Struct for a sequence of oscp_imu_driver__srv__StationaryCalibrate_Request.
typedef struct oscp_imu_driver__srv__StationaryCalibrate_Request__Sequence
{
  oscp_imu_driver__srv__StationaryCalibrate_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} oscp_imu_driver__srv__StationaryCalibrate_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/StationaryCalibrate in the package oscp_imu_driver.
typedef struct oscp_imu_driver__srv__StationaryCalibrate_Response
{
  bool success;
  rosidl_runtime_c__String message;
} oscp_imu_driver__srv__StationaryCalibrate_Response;

// Struct for a sequence of oscp_imu_driver__srv__StationaryCalibrate_Response.
typedef struct oscp_imu_driver__srv__StationaryCalibrate_Response__Sequence
{
  oscp_imu_driver__srv__StationaryCalibrate_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} oscp_imu_driver__srv__StationaryCalibrate_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  oscp_imu_driver__srv__StationaryCalibrate_Event__request__MAX_SIZE = 1
};
// response
enum
{
  oscp_imu_driver__srv__StationaryCalibrate_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/StationaryCalibrate in the package oscp_imu_driver.
typedef struct oscp_imu_driver__srv__StationaryCalibrate_Event
{
  service_msgs__msg__ServiceEventInfo info;
  oscp_imu_driver__srv__StationaryCalibrate_Request__Sequence request;
  oscp_imu_driver__srv__StationaryCalibrate_Response__Sequence response;
} oscp_imu_driver__srv__StationaryCalibrate_Event;

// Struct for a sequence of oscp_imu_driver__srv__StationaryCalibrate_Event.
typedef struct oscp_imu_driver__srv__StationaryCalibrate_Event__Sequence
{
  oscp_imu_driver__srv__StationaryCalibrate_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} oscp_imu_driver__srv__StationaryCalibrate_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // OSCP_IMU_DRIVER__SRV__DETAIL__STATIONARY_CALIBRATE__STRUCT_H_
