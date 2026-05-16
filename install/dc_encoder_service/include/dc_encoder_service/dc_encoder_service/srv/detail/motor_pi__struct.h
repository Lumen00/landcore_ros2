// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from dc_encoder_service:srv/MotorPI.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dc_encoder_service/srv/motor_pi.h"


#ifndef DC_ENCODER_SERVICE__SRV__DETAIL__MOTOR_PI__STRUCT_H_
#define DC_ENCODER_SERVICE__SRV__DETAIL__MOTOR_PI__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/MotorPI in the package dc_encoder_service.
typedef struct dc_encoder_service__srv__MotorPI_Request
{
  double speed_cmd_front_left;
  double speed_cmd_front_right;
  double speed_cmd_back_left;
  double speed_cmd_back_right;
} dc_encoder_service__srv__MotorPI_Request;

// Struct for a sequence of dc_encoder_service__srv__MotorPI_Request.
typedef struct dc_encoder_service__srv__MotorPI_Request__Sequence
{
  dc_encoder_service__srv__MotorPI_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dc_encoder_service__srv__MotorPI_Request__Sequence;

// Constants defined in the message

/// Struct defined in srv/MotorPI in the package dc_encoder_service.
typedef struct dc_encoder_service__srv__MotorPI_Response
{
  double speed_front_left;
  double speed_front_right;
  double speed_back_left;
  double speed_back_right;
} dc_encoder_service__srv__MotorPI_Response;

// Struct for a sequence of dc_encoder_service__srv__MotorPI_Response.
typedef struct dc_encoder_service__srv__MotorPI_Response__Sequence
{
  dc_encoder_service__srv__MotorPI_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dc_encoder_service__srv__MotorPI_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  dc_encoder_service__srv__MotorPI_Event__request__MAX_SIZE = 1
};
// response
enum
{
  dc_encoder_service__srv__MotorPI_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/MotorPI in the package dc_encoder_service.
typedef struct dc_encoder_service__srv__MotorPI_Event
{
  service_msgs__msg__ServiceEventInfo info;
  dc_encoder_service__srv__MotorPI_Request__Sequence request;
  dc_encoder_service__srv__MotorPI_Response__Sequence response;
} dc_encoder_service__srv__MotorPI_Event;

// Struct for a sequence of dc_encoder_service__srv__MotorPI_Event.
typedef struct dc_encoder_service__srv__MotorPI_Event__Sequence
{
  dc_encoder_service__srv__MotorPI_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dc_encoder_service__srv__MotorPI_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DC_ENCODER_SERVICE__SRV__DETAIL__MOTOR_PI__STRUCT_H_
