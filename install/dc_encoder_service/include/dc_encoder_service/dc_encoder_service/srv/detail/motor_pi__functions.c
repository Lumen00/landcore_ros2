// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from dc_encoder_service:srv/MotorPI.idl
// generated code does not contain a copyright notice
#include "dc_encoder_service/srv/detail/motor_pi__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
dc_encoder_service__srv__MotorPI_Request__init(dc_encoder_service__srv__MotorPI_Request * msg)
{
  if (!msg) {
    return false;
  }
  // speed_cmd_front_left
  // speed_cmd_front_right
  // speed_cmd_back_left
  // speed_cmd_back_right
  return true;
}

void
dc_encoder_service__srv__MotorPI_Request__fini(dc_encoder_service__srv__MotorPI_Request * msg)
{
  if (!msg) {
    return;
  }
  // speed_cmd_front_left
  // speed_cmd_front_right
  // speed_cmd_back_left
  // speed_cmd_back_right
}

bool
dc_encoder_service__srv__MotorPI_Request__are_equal(const dc_encoder_service__srv__MotorPI_Request * lhs, const dc_encoder_service__srv__MotorPI_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // speed_cmd_front_left
  if (lhs->speed_cmd_front_left != rhs->speed_cmd_front_left) {
    return false;
  }
  // speed_cmd_front_right
  if (lhs->speed_cmd_front_right != rhs->speed_cmd_front_right) {
    return false;
  }
  // speed_cmd_back_left
  if (lhs->speed_cmd_back_left != rhs->speed_cmd_back_left) {
    return false;
  }
  // speed_cmd_back_right
  if (lhs->speed_cmd_back_right != rhs->speed_cmd_back_right) {
    return false;
  }
  return true;
}

bool
dc_encoder_service__srv__MotorPI_Request__copy(
  const dc_encoder_service__srv__MotorPI_Request * input,
  dc_encoder_service__srv__MotorPI_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // speed_cmd_front_left
  output->speed_cmd_front_left = input->speed_cmd_front_left;
  // speed_cmd_front_right
  output->speed_cmd_front_right = input->speed_cmd_front_right;
  // speed_cmd_back_left
  output->speed_cmd_back_left = input->speed_cmd_back_left;
  // speed_cmd_back_right
  output->speed_cmd_back_right = input->speed_cmd_back_right;
  return true;
}

dc_encoder_service__srv__MotorPI_Request *
dc_encoder_service__srv__MotorPI_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dc_encoder_service__srv__MotorPI_Request * msg = (dc_encoder_service__srv__MotorPI_Request *)allocator.allocate(sizeof(dc_encoder_service__srv__MotorPI_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(dc_encoder_service__srv__MotorPI_Request));
  bool success = dc_encoder_service__srv__MotorPI_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
dc_encoder_service__srv__MotorPI_Request__destroy(dc_encoder_service__srv__MotorPI_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    dc_encoder_service__srv__MotorPI_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
dc_encoder_service__srv__MotorPI_Request__Sequence__init(dc_encoder_service__srv__MotorPI_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dc_encoder_service__srv__MotorPI_Request * data = NULL;

  if (size) {
    data = (dc_encoder_service__srv__MotorPI_Request *)allocator.zero_allocate(size, sizeof(dc_encoder_service__srv__MotorPI_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = dc_encoder_service__srv__MotorPI_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        dc_encoder_service__srv__MotorPI_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
dc_encoder_service__srv__MotorPI_Request__Sequence__fini(dc_encoder_service__srv__MotorPI_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      dc_encoder_service__srv__MotorPI_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

dc_encoder_service__srv__MotorPI_Request__Sequence *
dc_encoder_service__srv__MotorPI_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dc_encoder_service__srv__MotorPI_Request__Sequence * array = (dc_encoder_service__srv__MotorPI_Request__Sequence *)allocator.allocate(sizeof(dc_encoder_service__srv__MotorPI_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = dc_encoder_service__srv__MotorPI_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
dc_encoder_service__srv__MotorPI_Request__Sequence__destroy(dc_encoder_service__srv__MotorPI_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    dc_encoder_service__srv__MotorPI_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
dc_encoder_service__srv__MotorPI_Request__Sequence__are_equal(const dc_encoder_service__srv__MotorPI_Request__Sequence * lhs, const dc_encoder_service__srv__MotorPI_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!dc_encoder_service__srv__MotorPI_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
dc_encoder_service__srv__MotorPI_Request__Sequence__copy(
  const dc_encoder_service__srv__MotorPI_Request__Sequence * input,
  dc_encoder_service__srv__MotorPI_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(dc_encoder_service__srv__MotorPI_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    dc_encoder_service__srv__MotorPI_Request * data =
      (dc_encoder_service__srv__MotorPI_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!dc_encoder_service__srv__MotorPI_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          dc_encoder_service__srv__MotorPI_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!dc_encoder_service__srv__MotorPI_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
dc_encoder_service__srv__MotorPI_Response__init(dc_encoder_service__srv__MotorPI_Response * msg)
{
  if (!msg) {
    return false;
  }
  // speed_front_left
  // speed_front_right
  // speed_back_left
  // speed_back_right
  return true;
}

void
dc_encoder_service__srv__MotorPI_Response__fini(dc_encoder_service__srv__MotorPI_Response * msg)
{
  if (!msg) {
    return;
  }
  // speed_front_left
  // speed_front_right
  // speed_back_left
  // speed_back_right
}

bool
dc_encoder_service__srv__MotorPI_Response__are_equal(const dc_encoder_service__srv__MotorPI_Response * lhs, const dc_encoder_service__srv__MotorPI_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // speed_front_left
  if (lhs->speed_front_left != rhs->speed_front_left) {
    return false;
  }
  // speed_front_right
  if (lhs->speed_front_right != rhs->speed_front_right) {
    return false;
  }
  // speed_back_left
  if (lhs->speed_back_left != rhs->speed_back_left) {
    return false;
  }
  // speed_back_right
  if (lhs->speed_back_right != rhs->speed_back_right) {
    return false;
  }
  return true;
}

bool
dc_encoder_service__srv__MotorPI_Response__copy(
  const dc_encoder_service__srv__MotorPI_Response * input,
  dc_encoder_service__srv__MotorPI_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // speed_front_left
  output->speed_front_left = input->speed_front_left;
  // speed_front_right
  output->speed_front_right = input->speed_front_right;
  // speed_back_left
  output->speed_back_left = input->speed_back_left;
  // speed_back_right
  output->speed_back_right = input->speed_back_right;
  return true;
}

dc_encoder_service__srv__MotorPI_Response *
dc_encoder_service__srv__MotorPI_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dc_encoder_service__srv__MotorPI_Response * msg = (dc_encoder_service__srv__MotorPI_Response *)allocator.allocate(sizeof(dc_encoder_service__srv__MotorPI_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(dc_encoder_service__srv__MotorPI_Response));
  bool success = dc_encoder_service__srv__MotorPI_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
dc_encoder_service__srv__MotorPI_Response__destroy(dc_encoder_service__srv__MotorPI_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    dc_encoder_service__srv__MotorPI_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
dc_encoder_service__srv__MotorPI_Response__Sequence__init(dc_encoder_service__srv__MotorPI_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dc_encoder_service__srv__MotorPI_Response * data = NULL;

  if (size) {
    data = (dc_encoder_service__srv__MotorPI_Response *)allocator.zero_allocate(size, sizeof(dc_encoder_service__srv__MotorPI_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = dc_encoder_service__srv__MotorPI_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        dc_encoder_service__srv__MotorPI_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
dc_encoder_service__srv__MotorPI_Response__Sequence__fini(dc_encoder_service__srv__MotorPI_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      dc_encoder_service__srv__MotorPI_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

dc_encoder_service__srv__MotorPI_Response__Sequence *
dc_encoder_service__srv__MotorPI_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dc_encoder_service__srv__MotorPI_Response__Sequence * array = (dc_encoder_service__srv__MotorPI_Response__Sequence *)allocator.allocate(sizeof(dc_encoder_service__srv__MotorPI_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = dc_encoder_service__srv__MotorPI_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
dc_encoder_service__srv__MotorPI_Response__Sequence__destroy(dc_encoder_service__srv__MotorPI_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    dc_encoder_service__srv__MotorPI_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
dc_encoder_service__srv__MotorPI_Response__Sequence__are_equal(const dc_encoder_service__srv__MotorPI_Response__Sequence * lhs, const dc_encoder_service__srv__MotorPI_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!dc_encoder_service__srv__MotorPI_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
dc_encoder_service__srv__MotorPI_Response__Sequence__copy(
  const dc_encoder_service__srv__MotorPI_Response__Sequence * input,
  dc_encoder_service__srv__MotorPI_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(dc_encoder_service__srv__MotorPI_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    dc_encoder_service__srv__MotorPI_Response * data =
      (dc_encoder_service__srv__MotorPI_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!dc_encoder_service__srv__MotorPI_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          dc_encoder_service__srv__MotorPI_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!dc_encoder_service__srv__MotorPI_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `info`
#include "service_msgs/msg/detail/service_event_info__functions.h"
// Member `request`
// Member `response`
// already included above
// #include "dc_encoder_service/srv/detail/motor_pi__functions.h"

bool
dc_encoder_service__srv__MotorPI_Event__init(dc_encoder_service__srv__MotorPI_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    dc_encoder_service__srv__MotorPI_Event__fini(msg);
    return false;
  }
  // request
  if (!dc_encoder_service__srv__MotorPI_Request__Sequence__init(&msg->request, 0)) {
    dc_encoder_service__srv__MotorPI_Event__fini(msg);
    return false;
  }
  // response
  if (!dc_encoder_service__srv__MotorPI_Response__Sequence__init(&msg->response, 0)) {
    dc_encoder_service__srv__MotorPI_Event__fini(msg);
    return false;
  }
  return true;
}

void
dc_encoder_service__srv__MotorPI_Event__fini(dc_encoder_service__srv__MotorPI_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  dc_encoder_service__srv__MotorPI_Request__Sequence__fini(&msg->request);
  // response
  dc_encoder_service__srv__MotorPI_Response__Sequence__fini(&msg->response);
}

bool
dc_encoder_service__srv__MotorPI_Event__are_equal(const dc_encoder_service__srv__MotorPI_Event * lhs, const dc_encoder_service__srv__MotorPI_Event * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__are_equal(
      &(lhs->info), &(rhs->info)))
  {
    return false;
  }
  // request
  if (!dc_encoder_service__srv__MotorPI_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!dc_encoder_service__srv__MotorPI_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
dc_encoder_service__srv__MotorPI_Event__copy(
  const dc_encoder_service__srv__MotorPI_Event * input,
  dc_encoder_service__srv__MotorPI_Event * output)
{
  if (!input || !output) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__copy(
      &(input->info), &(output->info)))
  {
    return false;
  }
  // request
  if (!dc_encoder_service__srv__MotorPI_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!dc_encoder_service__srv__MotorPI_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

dc_encoder_service__srv__MotorPI_Event *
dc_encoder_service__srv__MotorPI_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dc_encoder_service__srv__MotorPI_Event * msg = (dc_encoder_service__srv__MotorPI_Event *)allocator.allocate(sizeof(dc_encoder_service__srv__MotorPI_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(dc_encoder_service__srv__MotorPI_Event));
  bool success = dc_encoder_service__srv__MotorPI_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
dc_encoder_service__srv__MotorPI_Event__destroy(dc_encoder_service__srv__MotorPI_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    dc_encoder_service__srv__MotorPI_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
dc_encoder_service__srv__MotorPI_Event__Sequence__init(dc_encoder_service__srv__MotorPI_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dc_encoder_service__srv__MotorPI_Event * data = NULL;

  if (size) {
    data = (dc_encoder_service__srv__MotorPI_Event *)allocator.zero_allocate(size, sizeof(dc_encoder_service__srv__MotorPI_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = dc_encoder_service__srv__MotorPI_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        dc_encoder_service__srv__MotorPI_Event__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
dc_encoder_service__srv__MotorPI_Event__Sequence__fini(dc_encoder_service__srv__MotorPI_Event__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      dc_encoder_service__srv__MotorPI_Event__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

dc_encoder_service__srv__MotorPI_Event__Sequence *
dc_encoder_service__srv__MotorPI_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dc_encoder_service__srv__MotorPI_Event__Sequence * array = (dc_encoder_service__srv__MotorPI_Event__Sequence *)allocator.allocate(sizeof(dc_encoder_service__srv__MotorPI_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = dc_encoder_service__srv__MotorPI_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
dc_encoder_service__srv__MotorPI_Event__Sequence__destroy(dc_encoder_service__srv__MotorPI_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    dc_encoder_service__srv__MotorPI_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
dc_encoder_service__srv__MotorPI_Event__Sequence__are_equal(const dc_encoder_service__srv__MotorPI_Event__Sequence * lhs, const dc_encoder_service__srv__MotorPI_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!dc_encoder_service__srv__MotorPI_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
dc_encoder_service__srv__MotorPI_Event__Sequence__copy(
  const dc_encoder_service__srv__MotorPI_Event__Sequence * input,
  dc_encoder_service__srv__MotorPI_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(dc_encoder_service__srv__MotorPI_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    dc_encoder_service__srv__MotorPI_Event * data =
      (dc_encoder_service__srv__MotorPI_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!dc_encoder_service__srv__MotorPI_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          dc_encoder_service__srv__MotorPI_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!dc_encoder_service__srv__MotorPI_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
