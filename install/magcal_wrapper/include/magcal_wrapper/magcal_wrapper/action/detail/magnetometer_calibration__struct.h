// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from magcal_wrapper:action/MagnetometerCalibration.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "magcal_wrapper/action/magnetometer_calibration.h"


#ifndef MAGCAL_WRAPPER__ACTION__DETAIL__MAGNETOMETER_CALIBRATION__STRUCT_H_
#define MAGCAL_WRAPPER__ACTION__DETAIL__MAGNETOMETER_CALIBRATION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in action/MagnetometerCalibration in the package magcal_wrapper.
typedef struct magcal_wrapper__action__MagnetometerCalibration_Goal
{
  bool start;
} magcal_wrapper__action__MagnetometerCalibration_Goal;

// Struct for a sequence of magcal_wrapper__action__MagnetometerCalibration_Goal.
typedef struct magcal_wrapper__action__MagnetometerCalibration_Goal__Sequence
{
  magcal_wrapper__action__MagnetometerCalibration_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} magcal_wrapper__action__MagnetometerCalibration_Goal__Sequence;

// Constants defined in the message

/// Struct defined in action/MagnetometerCalibration in the package magcal_wrapper.
typedef struct magcal_wrapper__action__MagnetometerCalibration_Result
{
  bool success;
  double hard_iron_x;
  double hard_iron_y;
  double hard_iron_z;
  double soft_iron[9];
  double fit_error;
} magcal_wrapper__action__MagnetometerCalibration_Result;

// Struct for a sequence of magcal_wrapper__action__MagnetometerCalibration_Result.
typedef struct magcal_wrapper__action__MagnetometerCalibration_Result__Sequence
{
  magcal_wrapper__action__MagnetometerCalibration_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} magcal_wrapper__action__MagnetometerCalibration_Result__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'status'
#include "rosidl_runtime_c/string.h"

/// Struct defined in action/MagnetometerCalibration in the package magcal_wrapper.
typedef struct magcal_wrapper__action__MagnetometerCalibration_Feedback
{
  float progress;
  rosidl_runtime_c__String status;
} magcal_wrapper__action__MagnetometerCalibration_Feedback;

// Struct for a sequence of magcal_wrapper__action__MagnetometerCalibration_Feedback.
typedef struct magcal_wrapper__action__MagnetometerCalibration_Feedback__Sequence
{
  magcal_wrapper__action__MagnetometerCalibration_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} magcal_wrapper__action__MagnetometerCalibration_Feedback__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "magcal_wrapper/action/detail/magnetometer_calibration__struct.h"

/// Struct defined in action/MagnetometerCalibration in the package magcal_wrapper.
typedef struct magcal_wrapper__action__MagnetometerCalibration_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  magcal_wrapper__action__MagnetometerCalibration_Goal goal;
} magcal_wrapper__action__MagnetometerCalibration_SendGoal_Request;

// Struct for a sequence of magcal_wrapper__action__MagnetometerCalibration_SendGoal_Request.
typedef struct magcal_wrapper__action__MagnetometerCalibration_SendGoal_Request__Sequence
{
  magcal_wrapper__action__MagnetometerCalibration_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} magcal_wrapper__action__MagnetometerCalibration_SendGoal_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/MagnetometerCalibration in the package magcal_wrapper.
typedef struct magcal_wrapper__action__MagnetometerCalibration_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} magcal_wrapper__action__MagnetometerCalibration_SendGoal_Response;

// Struct for a sequence of magcal_wrapper__action__MagnetometerCalibration_SendGoal_Response.
typedef struct magcal_wrapper__action__MagnetometerCalibration_SendGoal_Response__Sequence
{
  magcal_wrapper__action__MagnetometerCalibration_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} magcal_wrapper__action__MagnetometerCalibration_SendGoal_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  magcal_wrapper__action__MagnetometerCalibration_SendGoal_Event__request__MAX_SIZE = 1
};
// response
enum
{
  magcal_wrapper__action__MagnetometerCalibration_SendGoal_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/MagnetometerCalibration in the package magcal_wrapper.
typedef struct magcal_wrapper__action__MagnetometerCalibration_SendGoal_Event
{
  service_msgs__msg__ServiceEventInfo info;
  magcal_wrapper__action__MagnetometerCalibration_SendGoal_Request__Sequence request;
  magcal_wrapper__action__MagnetometerCalibration_SendGoal_Response__Sequence response;
} magcal_wrapper__action__MagnetometerCalibration_SendGoal_Event;

// Struct for a sequence of magcal_wrapper__action__MagnetometerCalibration_SendGoal_Event.
typedef struct magcal_wrapper__action__MagnetometerCalibration_SendGoal_Event__Sequence
{
  magcal_wrapper__action__MagnetometerCalibration_SendGoal_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} magcal_wrapper__action__MagnetometerCalibration_SendGoal_Event__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/MagnetometerCalibration in the package magcal_wrapper.
typedef struct magcal_wrapper__action__MagnetometerCalibration_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} magcal_wrapper__action__MagnetometerCalibration_GetResult_Request;

// Struct for a sequence of magcal_wrapper__action__MagnetometerCalibration_GetResult_Request.
typedef struct magcal_wrapper__action__MagnetometerCalibration_GetResult_Request__Sequence
{
  magcal_wrapper__action__MagnetometerCalibration_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} magcal_wrapper__action__MagnetometerCalibration_GetResult_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "magcal_wrapper/action/detail/magnetometer_calibration__struct.h"

/// Struct defined in action/MagnetometerCalibration in the package magcal_wrapper.
typedef struct magcal_wrapper__action__MagnetometerCalibration_GetResult_Response
{
  int8_t status;
  magcal_wrapper__action__MagnetometerCalibration_Result result;
} magcal_wrapper__action__MagnetometerCalibration_GetResult_Response;

// Struct for a sequence of magcal_wrapper__action__MagnetometerCalibration_GetResult_Response.
typedef struct magcal_wrapper__action__MagnetometerCalibration_GetResult_Response__Sequence
{
  magcal_wrapper__action__MagnetometerCalibration_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} magcal_wrapper__action__MagnetometerCalibration_GetResult_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
// already included above
// #include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  magcal_wrapper__action__MagnetometerCalibration_GetResult_Event__request__MAX_SIZE = 1
};
// response
enum
{
  magcal_wrapper__action__MagnetometerCalibration_GetResult_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/MagnetometerCalibration in the package magcal_wrapper.
typedef struct magcal_wrapper__action__MagnetometerCalibration_GetResult_Event
{
  service_msgs__msg__ServiceEventInfo info;
  magcal_wrapper__action__MagnetometerCalibration_GetResult_Request__Sequence request;
  magcal_wrapper__action__MagnetometerCalibration_GetResult_Response__Sequence response;
} magcal_wrapper__action__MagnetometerCalibration_GetResult_Event;

// Struct for a sequence of magcal_wrapper__action__MagnetometerCalibration_GetResult_Event.
typedef struct magcal_wrapper__action__MagnetometerCalibration_GetResult_Event__Sequence
{
  magcal_wrapper__action__MagnetometerCalibration_GetResult_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} magcal_wrapper__action__MagnetometerCalibration_GetResult_Event__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "magcal_wrapper/action/detail/magnetometer_calibration__struct.h"

/// Struct defined in action/MagnetometerCalibration in the package magcal_wrapper.
typedef struct magcal_wrapper__action__MagnetometerCalibration_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  magcal_wrapper__action__MagnetometerCalibration_Feedback feedback;
} magcal_wrapper__action__MagnetometerCalibration_FeedbackMessage;

// Struct for a sequence of magcal_wrapper__action__MagnetometerCalibration_FeedbackMessage.
typedef struct magcal_wrapper__action__MagnetometerCalibration_FeedbackMessage__Sequence
{
  magcal_wrapper__action__MagnetometerCalibration_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} magcal_wrapper__action__MagnetometerCalibration_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MAGCAL_WRAPPER__ACTION__DETAIL__MAGNETOMETER_CALIBRATION__STRUCT_H_
