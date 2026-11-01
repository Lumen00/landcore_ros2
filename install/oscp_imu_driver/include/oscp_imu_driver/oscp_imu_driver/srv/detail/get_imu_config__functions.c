// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from oscp_imu_driver:srv/GetIMUConfig.idl
// generated code does not contain a copyright notice
#include "oscp_imu_driver/srv/detail/get_imu_config__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
oscp_imu_driver__srv__GetIMUConfig_Request__init(oscp_imu_driver__srv__GetIMUConfig_Request * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
oscp_imu_driver__srv__GetIMUConfig_Request__fini(oscp_imu_driver__srv__GetIMUConfig_Request * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

bool
oscp_imu_driver__srv__GetIMUConfig_Request__are_equal(const oscp_imu_driver__srv__GetIMUConfig_Request * lhs, const oscp_imu_driver__srv__GetIMUConfig_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // structure_needs_at_least_one_member
  if (lhs->structure_needs_at_least_one_member != rhs->structure_needs_at_least_one_member) {
    return false;
  }
  return true;
}

bool
oscp_imu_driver__srv__GetIMUConfig_Request__copy(
  const oscp_imu_driver__srv__GetIMUConfig_Request * input,
  oscp_imu_driver__srv__GetIMUConfig_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // structure_needs_at_least_one_member
  output->structure_needs_at_least_one_member = input->structure_needs_at_least_one_member;
  return true;
}

oscp_imu_driver__srv__GetIMUConfig_Request *
oscp_imu_driver__srv__GetIMUConfig_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  oscp_imu_driver__srv__GetIMUConfig_Request * msg = (oscp_imu_driver__srv__GetIMUConfig_Request *)allocator.allocate(sizeof(oscp_imu_driver__srv__GetIMUConfig_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(oscp_imu_driver__srv__GetIMUConfig_Request));
  bool success = oscp_imu_driver__srv__GetIMUConfig_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
oscp_imu_driver__srv__GetIMUConfig_Request__destroy(oscp_imu_driver__srv__GetIMUConfig_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    oscp_imu_driver__srv__GetIMUConfig_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
oscp_imu_driver__srv__GetIMUConfig_Request__Sequence__init(oscp_imu_driver__srv__GetIMUConfig_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  oscp_imu_driver__srv__GetIMUConfig_Request * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(oscp_imu_driver__srv__GetIMUConfig_Request)) {
      return false;
    }
    data = (oscp_imu_driver__srv__GetIMUConfig_Request *)allocator.zero_allocate(size, sizeof(oscp_imu_driver__srv__GetIMUConfig_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = oscp_imu_driver__srv__GetIMUConfig_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        oscp_imu_driver__srv__GetIMUConfig_Request__fini(&data[i - 1]);
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
oscp_imu_driver__srv__GetIMUConfig_Request__Sequence__fini(oscp_imu_driver__srv__GetIMUConfig_Request__Sequence * array)
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
      oscp_imu_driver__srv__GetIMUConfig_Request__fini(&array->data[i]);
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

oscp_imu_driver__srv__GetIMUConfig_Request__Sequence *
oscp_imu_driver__srv__GetIMUConfig_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  oscp_imu_driver__srv__GetIMUConfig_Request__Sequence * array = (oscp_imu_driver__srv__GetIMUConfig_Request__Sequence *)allocator.allocate(sizeof(oscp_imu_driver__srv__GetIMUConfig_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = oscp_imu_driver__srv__GetIMUConfig_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
oscp_imu_driver__srv__GetIMUConfig_Request__Sequence__destroy(oscp_imu_driver__srv__GetIMUConfig_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    oscp_imu_driver__srv__GetIMUConfig_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
oscp_imu_driver__srv__GetIMUConfig_Request__Sequence__are_equal(const oscp_imu_driver__srv__GetIMUConfig_Request__Sequence * lhs, const oscp_imu_driver__srv__GetIMUConfig_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!oscp_imu_driver__srv__GetIMUConfig_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
oscp_imu_driver__srv__GetIMUConfig_Request__Sequence__copy(
  const oscp_imu_driver__srv__GetIMUConfig_Request__Sequence * input,
  oscp_imu_driver__srv__GetIMUConfig_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(oscp_imu_driver__srv__GetIMUConfig_Request)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(oscp_imu_driver__srv__GetIMUConfig_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    oscp_imu_driver__srv__GetIMUConfig_Request * data =
      (oscp_imu_driver__srv__GetIMUConfig_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!oscp_imu_driver__srv__GetIMUConfig_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          oscp_imu_driver__srv__GetIMUConfig_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!oscp_imu_driver__srv__GetIMUConfig_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `config_summary`
#include "rosidl_runtime_c/string_functions.h"

bool
oscp_imu_driver__srv__GetIMUConfig_Response__init(oscp_imu_driver__srv__GetIMUConfig_Response * msg)
{
  if (!msg) {
    return false;
  }
  // config_summary
  if (!rosidl_runtime_c__String__init(&msg->config_summary)) {
    oscp_imu_driver__srv__GetIMUConfig_Response__fini(msg);
    return false;
  }
  return true;
}

void
oscp_imu_driver__srv__GetIMUConfig_Response__fini(oscp_imu_driver__srv__GetIMUConfig_Response * msg)
{
  if (!msg) {
    return;
  }
  // config_summary
  rosidl_runtime_c__String__fini(&msg->config_summary);
}

bool
oscp_imu_driver__srv__GetIMUConfig_Response__are_equal(const oscp_imu_driver__srv__GetIMUConfig_Response * lhs, const oscp_imu_driver__srv__GetIMUConfig_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // config_summary
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->config_summary), &(rhs->config_summary)))
  {
    return false;
  }
  return true;
}

bool
oscp_imu_driver__srv__GetIMUConfig_Response__copy(
  const oscp_imu_driver__srv__GetIMUConfig_Response * input,
  oscp_imu_driver__srv__GetIMUConfig_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // config_summary
  if (!rosidl_runtime_c__String__copy(
      &(input->config_summary), &(output->config_summary)))
  {
    return false;
  }
  return true;
}

oscp_imu_driver__srv__GetIMUConfig_Response *
oscp_imu_driver__srv__GetIMUConfig_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  oscp_imu_driver__srv__GetIMUConfig_Response * msg = (oscp_imu_driver__srv__GetIMUConfig_Response *)allocator.allocate(sizeof(oscp_imu_driver__srv__GetIMUConfig_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(oscp_imu_driver__srv__GetIMUConfig_Response));
  bool success = oscp_imu_driver__srv__GetIMUConfig_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
oscp_imu_driver__srv__GetIMUConfig_Response__destroy(oscp_imu_driver__srv__GetIMUConfig_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    oscp_imu_driver__srv__GetIMUConfig_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
oscp_imu_driver__srv__GetIMUConfig_Response__Sequence__init(oscp_imu_driver__srv__GetIMUConfig_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  oscp_imu_driver__srv__GetIMUConfig_Response * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(oscp_imu_driver__srv__GetIMUConfig_Response)) {
      return false;
    }
    data = (oscp_imu_driver__srv__GetIMUConfig_Response *)allocator.zero_allocate(size, sizeof(oscp_imu_driver__srv__GetIMUConfig_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = oscp_imu_driver__srv__GetIMUConfig_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        oscp_imu_driver__srv__GetIMUConfig_Response__fini(&data[i - 1]);
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
oscp_imu_driver__srv__GetIMUConfig_Response__Sequence__fini(oscp_imu_driver__srv__GetIMUConfig_Response__Sequence * array)
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
      oscp_imu_driver__srv__GetIMUConfig_Response__fini(&array->data[i]);
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

oscp_imu_driver__srv__GetIMUConfig_Response__Sequence *
oscp_imu_driver__srv__GetIMUConfig_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  oscp_imu_driver__srv__GetIMUConfig_Response__Sequence * array = (oscp_imu_driver__srv__GetIMUConfig_Response__Sequence *)allocator.allocate(sizeof(oscp_imu_driver__srv__GetIMUConfig_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = oscp_imu_driver__srv__GetIMUConfig_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
oscp_imu_driver__srv__GetIMUConfig_Response__Sequence__destroy(oscp_imu_driver__srv__GetIMUConfig_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    oscp_imu_driver__srv__GetIMUConfig_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
oscp_imu_driver__srv__GetIMUConfig_Response__Sequence__are_equal(const oscp_imu_driver__srv__GetIMUConfig_Response__Sequence * lhs, const oscp_imu_driver__srv__GetIMUConfig_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!oscp_imu_driver__srv__GetIMUConfig_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
oscp_imu_driver__srv__GetIMUConfig_Response__Sequence__copy(
  const oscp_imu_driver__srv__GetIMUConfig_Response__Sequence * input,
  oscp_imu_driver__srv__GetIMUConfig_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(oscp_imu_driver__srv__GetIMUConfig_Response)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(oscp_imu_driver__srv__GetIMUConfig_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    oscp_imu_driver__srv__GetIMUConfig_Response * data =
      (oscp_imu_driver__srv__GetIMUConfig_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!oscp_imu_driver__srv__GetIMUConfig_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          oscp_imu_driver__srv__GetIMUConfig_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!oscp_imu_driver__srv__GetIMUConfig_Response__copy(
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
// #include "oscp_imu_driver/srv/detail/get_imu_config__functions.h"

bool
oscp_imu_driver__srv__GetIMUConfig_Event__init(oscp_imu_driver__srv__GetIMUConfig_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    oscp_imu_driver__srv__GetIMUConfig_Event__fini(msg);
    return false;
  }
  // request
  if (!oscp_imu_driver__srv__GetIMUConfig_Request__Sequence__init(&msg->request, 0)) {
    oscp_imu_driver__srv__GetIMUConfig_Event__fini(msg);
    return false;
  }
  // response
  if (!oscp_imu_driver__srv__GetIMUConfig_Response__Sequence__init(&msg->response, 0)) {
    oscp_imu_driver__srv__GetIMUConfig_Event__fini(msg);
    return false;
  }
  return true;
}

void
oscp_imu_driver__srv__GetIMUConfig_Event__fini(oscp_imu_driver__srv__GetIMUConfig_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  oscp_imu_driver__srv__GetIMUConfig_Request__Sequence__fini(&msg->request);
  // response
  oscp_imu_driver__srv__GetIMUConfig_Response__Sequence__fini(&msg->response);
}

bool
oscp_imu_driver__srv__GetIMUConfig_Event__are_equal(const oscp_imu_driver__srv__GetIMUConfig_Event * lhs, const oscp_imu_driver__srv__GetIMUConfig_Event * rhs)
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
  if (!oscp_imu_driver__srv__GetIMUConfig_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!oscp_imu_driver__srv__GetIMUConfig_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
oscp_imu_driver__srv__GetIMUConfig_Event__copy(
  const oscp_imu_driver__srv__GetIMUConfig_Event * input,
  oscp_imu_driver__srv__GetIMUConfig_Event * output)
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
  if (!oscp_imu_driver__srv__GetIMUConfig_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!oscp_imu_driver__srv__GetIMUConfig_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

oscp_imu_driver__srv__GetIMUConfig_Event *
oscp_imu_driver__srv__GetIMUConfig_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  oscp_imu_driver__srv__GetIMUConfig_Event * msg = (oscp_imu_driver__srv__GetIMUConfig_Event *)allocator.allocate(sizeof(oscp_imu_driver__srv__GetIMUConfig_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(oscp_imu_driver__srv__GetIMUConfig_Event));
  bool success = oscp_imu_driver__srv__GetIMUConfig_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
oscp_imu_driver__srv__GetIMUConfig_Event__destroy(oscp_imu_driver__srv__GetIMUConfig_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    oscp_imu_driver__srv__GetIMUConfig_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
oscp_imu_driver__srv__GetIMUConfig_Event__Sequence__init(oscp_imu_driver__srv__GetIMUConfig_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  oscp_imu_driver__srv__GetIMUConfig_Event * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(oscp_imu_driver__srv__GetIMUConfig_Event)) {
      return false;
    }
    data = (oscp_imu_driver__srv__GetIMUConfig_Event *)allocator.zero_allocate(size, sizeof(oscp_imu_driver__srv__GetIMUConfig_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = oscp_imu_driver__srv__GetIMUConfig_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        oscp_imu_driver__srv__GetIMUConfig_Event__fini(&data[i - 1]);
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
oscp_imu_driver__srv__GetIMUConfig_Event__Sequence__fini(oscp_imu_driver__srv__GetIMUConfig_Event__Sequence * array)
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
      oscp_imu_driver__srv__GetIMUConfig_Event__fini(&array->data[i]);
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

oscp_imu_driver__srv__GetIMUConfig_Event__Sequence *
oscp_imu_driver__srv__GetIMUConfig_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  oscp_imu_driver__srv__GetIMUConfig_Event__Sequence * array = (oscp_imu_driver__srv__GetIMUConfig_Event__Sequence *)allocator.allocate(sizeof(oscp_imu_driver__srv__GetIMUConfig_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = oscp_imu_driver__srv__GetIMUConfig_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
oscp_imu_driver__srv__GetIMUConfig_Event__Sequence__destroy(oscp_imu_driver__srv__GetIMUConfig_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    oscp_imu_driver__srv__GetIMUConfig_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
oscp_imu_driver__srv__GetIMUConfig_Event__Sequence__are_equal(const oscp_imu_driver__srv__GetIMUConfig_Event__Sequence * lhs, const oscp_imu_driver__srv__GetIMUConfig_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!oscp_imu_driver__srv__GetIMUConfig_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
oscp_imu_driver__srv__GetIMUConfig_Event__Sequence__copy(
  const oscp_imu_driver__srv__GetIMUConfig_Event__Sequence * input,
  oscp_imu_driver__srv__GetIMUConfig_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(oscp_imu_driver__srv__GetIMUConfig_Event)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(oscp_imu_driver__srv__GetIMUConfig_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    oscp_imu_driver__srv__GetIMUConfig_Event * data =
      (oscp_imu_driver__srv__GetIMUConfig_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!oscp_imu_driver__srv__GetIMUConfig_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          oscp_imu_driver__srv__GetIMUConfig_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!oscp_imu_driver__srv__GetIMUConfig_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
