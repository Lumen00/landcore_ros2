// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from magcal_wrapper:action/MagnetometerCalibration.idl
// generated code does not contain a copyright notice
#include "magcal_wrapper/action/detail/magnetometer_calibration__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
magcal_wrapper__action__MagnetometerCalibration_Goal__init(magcal_wrapper__action__MagnetometerCalibration_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // start
  return true;
}

void
magcal_wrapper__action__MagnetometerCalibration_Goal__fini(magcal_wrapper__action__MagnetometerCalibration_Goal * msg)
{
  if (!msg) {
    return;
  }
  // start
}

bool
magcal_wrapper__action__MagnetometerCalibration_Goal__are_equal(const magcal_wrapper__action__MagnetometerCalibration_Goal * lhs, const magcal_wrapper__action__MagnetometerCalibration_Goal * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // start
  if (lhs->start != rhs->start) {
    return false;
  }
  return true;
}

bool
magcal_wrapper__action__MagnetometerCalibration_Goal__copy(
  const magcal_wrapper__action__MagnetometerCalibration_Goal * input,
  magcal_wrapper__action__MagnetometerCalibration_Goal * output)
{
  if (!input || !output) {
    return false;
  }
  // start
  output->start = input->start;
  return true;
}

magcal_wrapper__action__MagnetometerCalibration_Goal *
magcal_wrapper__action__MagnetometerCalibration_Goal__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  magcal_wrapper__action__MagnetometerCalibration_Goal * msg = (magcal_wrapper__action__MagnetometerCalibration_Goal *)allocator.allocate(sizeof(magcal_wrapper__action__MagnetometerCalibration_Goal), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(magcal_wrapper__action__MagnetometerCalibration_Goal));
  bool success = magcal_wrapper__action__MagnetometerCalibration_Goal__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
magcal_wrapper__action__MagnetometerCalibration_Goal__destroy(magcal_wrapper__action__MagnetometerCalibration_Goal * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    magcal_wrapper__action__MagnetometerCalibration_Goal__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
magcal_wrapper__action__MagnetometerCalibration_Goal__Sequence__init(magcal_wrapper__action__MagnetometerCalibration_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  magcal_wrapper__action__MagnetometerCalibration_Goal * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(magcal_wrapper__action__MagnetometerCalibration_Goal)) {
      return false;
    }
    data = (magcal_wrapper__action__MagnetometerCalibration_Goal *)allocator.zero_allocate(size, sizeof(magcal_wrapper__action__MagnetometerCalibration_Goal), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = magcal_wrapper__action__MagnetometerCalibration_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        magcal_wrapper__action__MagnetometerCalibration_Goal__fini(&data[i - 1]);
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
magcal_wrapper__action__MagnetometerCalibration_Goal__Sequence__fini(magcal_wrapper__action__MagnetometerCalibration_Goal__Sequence * array)
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
      magcal_wrapper__action__MagnetometerCalibration_Goal__fini(&array->data[i]);
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

magcal_wrapper__action__MagnetometerCalibration_Goal__Sequence *
magcal_wrapper__action__MagnetometerCalibration_Goal__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  magcal_wrapper__action__MagnetometerCalibration_Goal__Sequence * array = (magcal_wrapper__action__MagnetometerCalibration_Goal__Sequence *)allocator.allocate(sizeof(magcal_wrapper__action__MagnetometerCalibration_Goal__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = magcal_wrapper__action__MagnetometerCalibration_Goal__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
magcal_wrapper__action__MagnetometerCalibration_Goal__Sequence__destroy(magcal_wrapper__action__MagnetometerCalibration_Goal__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    magcal_wrapper__action__MagnetometerCalibration_Goal__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
magcal_wrapper__action__MagnetometerCalibration_Goal__Sequence__are_equal(const magcal_wrapper__action__MagnetometerCalibration_Goal__Sequence * lhs, const magcal_wrapper__action__MagnetometerCalibration_Goal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!magcal_wrapper__action__MagnetometerCalibration_Goal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
magcal_wrapper__action__MagnetometerCalibration_Goal__Sequence__copy(
  const magcal_wrapper__action__MagnetometerCalibration_Goal__Sequence * input,
  magcal_wrapper__action__MagnetometerCalibration_Goal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(magcal_wrapper__action__MagnetometerCalibration_Goal)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(magcal_wrapper__action__MagnetometerCalibration_Goal);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    magcal_wrapper__action__MagnetometerCalibration_Goal * data =
      (magcal_wrapper__action__MagnetometerCalibration_Goal *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!magcal_wrapper__action__MagnetometerCalibration_Goal__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          magcal_wrapper__action__MagnetometerCalibration_Goal__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!magcal_wrapper__action__MagnetometerCalibration_Goal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
magcal_wrapper__action__MagnetometerCalibration_Result__init(magcal_wrapper__action__MagnetometerCalibration_Result * msg)
{
  if (!msg) {
    return false;
  }
  // success
  // hard_iron_x
  // hard_iron_y
  // hard_iron_z
  // soft_iron
  // fit_error
  return true;
}

void
magcal_wrapper__action__MagnetometerCalibration_Result__fini(magcal_wrapper__action__MagnetometerCalibration_Result * msg)
{
  if (!msg) {
    return;
  }
  // success
  // hard_iron_x
  // hard_iron_y
  // hard_iron_z
  // soft_iron
  // fit_error
}

bool
magcal_wrapper__action__MagnetometerCalibration_Result__are_equal(const magcal_wrapper__action__MagnetometerCalibration_Result * lhs, const magcal_wrapper__action__MagnetometerCalibration_Result * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  // hard_iron_x
  if (lhs->hard_iron_x != rhs->hard_iron_x) {
    return false;
  }
  // hard_iron_y
  if (lhs->hard_iron_y != rhs->hard_iron_y) {
    return false;
  }
  // hard_iron_z
  if (lhs->hard_iron_z != rhs->hard_iron_z) {
    return false;
  }
  // soft_iron
  for (size_t i = 0; i < 9; ++i) {
    if (lhs->soft_iron[i] != rhs->soft_iron[i]) {
      return false;
    }
  }
  // fit_error
  if (lhs->fit_error != rhs->fit_error) {
    return false;
  }
  return true;
}

bool
magcal_wrapper__action__MagnetometerCalibration_Result__copy(
  const magcal_wrapper__action__MagnetometerCalibration_Result * input,
  magcal_wrapper__action__MagnetometerCalibration_Result * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  // hard_iron_x
  output->hard_iron_x = input->hard_iron_x;
  // hard_iron_y
  output->hard_iron_y = input->hard_iron_y;
  // hard_iron_z
  output->hard_iron_z = input->hard_iron_z;
  // soft_iron
  for (size_t i = 0; i < 9; ++i) {
    output->soft_iron[i] = input->soft_iron[i];
  }
  // fit_error
  output->fit_error = input->fit_error;
  return true;
}

magcal_wrapper__action__MagnetometerCalibration_Result *
magcal_wrapper__action__MagnetometerCalibration_Result__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  magcal_wrapper__action__MagnetometerCalibration_Result * msg = (magcal_wrapper__action__MagnetometerCalibration_Result *)allocator.allocate(sizeof(magcal_wrapper__action__MagnetometerCalibration_Result), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(magcal_wrapper__action__MagnetometerCalibration_Result));
  bool success = magcal_wrapper__action__MagnetometerCalibration_Result__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
magcal_wrapper__action__MagnetometerCalibration_Result__destroy(magcal_wrapper__action__MagnetometerCalibration_Result * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    magcal_wrapper__action__MagnetometerCalibration_Result__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
magcal_wrapper__action__MagnetometerCalibration_Result__Sequence__init(magcal_wrapper__action__MagnetometerCalibration_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  magcal_wrapper__action__MagnetometerCalibration_Result * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(magcal_wrapper__action__MagnetometerCalibration_Result)) {
      return false;
    }
    data = (magcal_wrapper__action__MagnetometerCalibration_Result *)allocator.zero_allocate(size, sizeof(magcal_wrapper__action__MagnetometerCalibration_Result), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = magcal_wrapper__action__MagnetometerCalibration_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        magcal_wrapper__action__MagnetometerCalibration_Result__fini(&data[i - 1]);
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
magcal_wrapper__action__MagnetometerCalibration_Result__Sequence__fini(magcal_wrapper__action__MagnetometerCalibration_Result__Sequence * array)
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
      magcal_wrapper__action__MagnetometerCalibration_Result__fini(&array->data[i]);
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

magcal_wrapper__action__MagnetometerCalibration_Result__Sequence *
magcal_wrapper__action__MagnetometerCalibration_Result__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  magcal_wrapper__action__MagnetometerCalibration_Result__Sequence * array = (magcal_wrapper__action__MagnetometerCalibration_Result__Sequence *)allocator.allocate(sizeof(magcal_wrapper__action__MagnetometerCalibration_Result__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = magcal_wrapper__action__MagnetometerCalibration_Result__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
magcal_wrapper__action__MagnetometerCalibration_Result__Sequence__destroy(magcal_wrapper__action__MagnetometerCalibration_Result__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    magcal_wrapper__action__MagnetometerCalibration_Result__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
magcal_wrapper__action__MagnetometerCalibration_Result__Sequence__are_equal(const magcal_wrapper__action__MagnetometerCalibration_Result__Sequence * lhs, const magcal_wrapper__action__MagnetometerCalibration_Result__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!magcal_wrapper__action__MagnetometerCalibration_Result__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
magcal_wrapper__action__MagnetometerCalibration_Result__Sequence__copy(
  const magcal_wrapper__action__MagnetometerCalibration_Result__Sequence * input,
  magcal_wrapper__action__MagnetometerCalibration_Result__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(magcal_wrapper__action__MagnetometerCalibration_Result)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(magcal_wrapper__action__MagnetometerCalibration_Result);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    magcal_wrapper__action__MagnetometerCalibration_Result * data =
      (magcal_wrapper__action__MagnetometerCalibration_Result *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!magcal_wrapper__action__MagnetometerCalibration_Result__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          magcal_wrapper__action__MagnetometerCalibration_Result__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!magcal_wrapper__action__MagnetometerCalibration_Result__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `status`
#include "rosidl_runtime_c/string_functions.h"

bool
magcal_wrapper__action__MagnetometerCalibration_Feedback__init(magcal_wrapper__action__MagnetometerCalibration_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // progress
  // status
  if (!rosidl_runtime_c__String__init(&msg->status)) {
    magcal_wrapper__action__MagnetometerCalibration_Feedback__fini(msg);
    return false;
  }
  return true;
}

void
magcal_wrapper__action__MagnetometerCalibration_Feedback__fini(magcal_wrapper__action__MagnetometerCalibration_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // progress
  // status
  rosidl_runtime_c__String__fini(&msg->status);
}

bool
magcal_wrapper__action__MagnetometerCalibration_Feedback__are_equal(const magcal_wrapper__action__MagnetometerCalibration_Feedback * lhs, const magcal_wrapper__action__MagnetometerCalibration_Feedback * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // progress
  if (lhs->progress != rhs->progress) {
    return false;
  }
  // status
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->status), &(rhs->status)))
  {
    return false;
  }
  return true;
}

bool
magcal_wrapper__action__MagnetometerCalibration_Feedback__copy(
  const magcal_wrapper__action__MagnetometerCalibration_Feedback * input,
  magcal_wrapper__action__MagnetometerCalibration_Feedback * output)
{
  if (!input || !output) {
    return false;
  }
  // progress
  output->progress = input->progress;
  // status
  if (!rosidl_runtime_c__String__copy(
      &(input->status), &(output->status)))
  {
    return false;
  }
  return true;
}

magcal_wrapper__action__MagnetometerCalibration_Feedback *
magcal_wrapper__action__MagnetometerCalibration_Feedback__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  magcal_wrapper__action__MagnetometerCalibration_Feedback * msg = (magcal_wrapper__action__MagnetometerCalibration_Feedback *)allocator.allocate(sizeof(magcal_wrapper__action__MagnetometerCalibration_Feedback), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(magcal_wrapper__action__MagnetometerCalibration_Feedback));
  bool success = magcal_wrapper__action__MagnetometerCalibration_Feedback__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
magcal_wrapper__action__MagnetometerCalibration_Feedback__destroy(magcal_wrapper__action__MagnetometerCalibration_Feedback * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    magcal_wrapper__action__MagnetometerCalibration_Feedback__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
magcal_wrapper__action__MagnetometerCalibration_Feedback__Sequence__init(magcal_wrapper__action__MagnetometerCalibration_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  magcal_wrapper__action__MagnetometerCalibration_Feedback * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(magcal_wrapper__action__MagnetometerCalibration_Feedback)) {
      return false;
    }
    data = (magcal_wrapper__action__MagnetometerCalibration_Feedback *)allocator.zero_allocate(size, sizeof(magcal_wrapper__action__MagnetometerCalibration_Feedback), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = magcal_wrapper__action__MagnetometerCalibration_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        magcal_wrapper__action__MagnetometerCalibration_Feedback__fini(&data[i - 1]);
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
magcal_wrapper__action__MagnetometerCalibration_Feedback__Sequence__fini(magcal_wrapper__action__MagnetometerCalibration_Feedback__Sequence * array)
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
      magcal_wrapper__action__MagnetometerCalibration_Feedback__fini(&array->data[i]);
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

magcal_wrapper__action__MagnetometerCalibration_Feedback__Sequence *
magcal_wrapper__action__MagnetometerCalibration_Feedback__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  magcal_wrapper__action__MagnetometerCalibration_Feedback__Sequence * array = (magcal_wrapper__action__MagnetometerCalibration_Feedback__Sequence *)allocator.allocate(sizeof(magcal_wrapper__action__MagnetometerCalibration_Feedback__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = magcal_wrapper__action__MagnetometerCalibration_Feedback__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
magcal_wrapper__action__MagnetometerCalibration_Feedback__Sequence__destroy(magcal_wrapper__action__MagnetometerCalibration_Feedback__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    magcal_wrapper__action__MagnetometerCalibration_Feedback__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
magcal_wrapper__action__MagnetometerCalibration_Feedback__Sequence__are_equal(const magcal_wrapper__action__MagnetometerCalibration_Feedback__Sequence * lhs, const magcal_wrapper__action__MagnetometerCalibration_Feedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!magcal_wrapper__action__MagnetometerCalibration_Feedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
magcal_wrapper__action__MagnetometerCalibration_Feedback__Sequence__copy(
  const magcal_wrapper__action__MagnetometerCalibration_Feedback__Sequence * input,
  magcal_wrapper__action__MagnetometerCalibration_Feedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(magcal_wrapper__action__MagnetometerCalibration_Feedback)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(magcal_wrapper__action__MagnetometerCalibration_Feedback);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    magcal_wrapper__action__MagnetometerCalibration_Feedback * data =
      (magcal_wrapper__action__MagnetometerCalibration_Feedback *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!magcal_wrapper__action__MagnetometerCalibration_Feedback__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          magcal_wrapper__action__MagnetometerCalibration_Feedback__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!magcal_wrapper__action__MagnetometerCalibration_Feedback__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `goal`
// already included above
// #include "magcal_wrapper/action/detail/magnetometer_calibration__functions.h"

bool
magcal_wrapper__action__MagnetometerCalibration_SendGoal_Request__init(magcal_wrapper__action__MagnetometerCalibration_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    magcal_wrapper__action__MagnetometerCalibration_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!magcal_wrapper__action__MagnetometerCalibration_Goal__init(&msg->goal)) {
    magcal_wrapper__action__MagnetometerCalibration_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
magcal_wrapper__action__MagnetometerCalibration_SendGoal_Request__fini(magcal_wrapper__action__MagnetometerCalibration_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  magcal_wrapper__action__MagnetometerCalibration_Goal__fini(&msg->goal);
}

bool
magcal_wrapper__action__MagnetometerCalibration_SendGoal_Request__are_equal(const magcal_wrapper__action__MagnetometerCalibration_SendGoal_Request * lhs, const magcal_wrapper__action__MagnetometerCalibration_SendGoal_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // goal
  if (!magcal_wrapper__action__MagnetometerCalibration_Goal__are_equal(
      &(lhs->goal), &(rhs->goal)))
  {
    return false;
  }
  return true;
}

bool
magcal_wrapper__action__MagnetometerCalibration_SendGoal_Request__copy(
  const magcal_wrapper__action__MagnetometerCalibration_SendGoal_Request * input,
  magcal_wrapper__action__MagnetometerCalibration_SendGoal_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // goal
  if (!magcal_wrapper__action__MagnetometerCalibration_Goal__copy(
      &(input->goal), &(output->goal)))
  {
    return false;
  }
  return true;
}

magcal_wrapper__action__MagnetometerCalibration_SendGoal_Request *
magcal_wrapper__action__MagnetometerCalibration_SendGoal_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  magcal_wrapper__action__MagnetometerCalibration_SendGoal_Request * msg = (magcal_wrapper__action__MagnetometerCalibration_SendGoal_Request *)allocator.allocate(sizeof(magcal_wrapper__action__MagnetometerCalibration_SendGoal_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(magcal_wrapper__action__MagnetometerCalibration_SendGoal_Request));
  bool success = magcal_wrapper__action__MagnetometerCalibration_SendGoal_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
magcal_wrapper__action__MagnetometerCalibration_SendGoal_Request__destroy(magcal_wrapper__action__MagnetometerCalibration_SendGoal_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    magcal_wrapper__action__MagnetometerCalibration_SendGoal_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
magcal_wrapper__action__MagnetometerCalibration_SendGoal_Request__Sequence__init(magcal_wrapper__action__MagnetometerCalibration_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  magcal_wrapper__action__MagnetometerCalibration_SendGoal_Request * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(magcal_wrapper__action__MagnetometerCalibration_SendGoal_Request)) {
      return false;
    }
    data = (magcal_wrapper__action__MagnetometerCalibration_SendGoal_Request *)allocator.zero_allocate(size, sizeof(magcal_wrapper__action__MagnetometerCalibration_SendGoal_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = magcal_wrapper__action__MagnetometerCalibration_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        magcal_wrapper__action__MagnetometerCalibration_SendGoal_Request__fini(&data[i - 1]);
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
magcal_wrapper__action__MagnetometerCalibration_SendGoal_Request__Sequence__fini(magcal_wrapper__action__MagnetometerCalibration_SendGoal_Request__Sequence * array)
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
      magcal_wrapper__action__MagnetometerCalibration_SendGoal_Request__fini(&array->data[i]);
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

magcal_wrapper__action__MagnetometerCalibration_SendGoal_Request__Sequence *
magcal_wrapper__action__MagnetometerCalibration_SendGoal_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  magcal_wrapper__action__MagnetometerCalibration_SendGoal_Request__Sequence * array = (magcal_wrapper__action__MagnetometerCalibration_SendGoal_Request__Sequence *)allocator.allocate(sizeof(magcal_wrapper__action__MagnetometerCalibration_SendGoal_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = magcal_wrapper__action__MagnetometerCalibration_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
magcal_wrapper__action__MagnetometerCalibration_SendGoal_Request__Sequence__destroy(magcal_wrapper__action__MagnetometerCalibration_SendGoal_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    magcal_wrapper__action__MagnetometerCalibration_SendGoal_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
magcal_wrapper__action__MagnetometerCalibration_SendGoal_Request__Sequence__are_equal(const magcal_wrapper__action__MagnetometerCalibration_SendGoal_Request__Sequence * lhs, const magcal_wrapper__action__MagnetometerCalibration_SendGoal_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!magcal_wrapper__action__MagnetometerCalibration_SendGoal_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
magcal_wrapper__action__MagnetometerCalibration_SendGoal_Request__Sequence__copy(
  const magcal_wrapper__action__MagnetometerCalibration_SendGoal_Request__Sequence * input,
  magcal_wrapper__action__MagnetometerCalibration_SendGoal_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(magcal_wrapper__action__MagnetometerCalibration_SendGoal_Request)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(magcal_wrapper__action__MagnetometerCalibration_SendGoal_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    magcal_wrapper__action__MagnetometerCalibration_SendGoal_Request * data =
      (magcal_wrapper__action__MagnetometerCalibration_SendGoal_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!magcal_wrapper__action__MagnetometerCalibration_SendGoal_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          magcal_wrapper__action__MagnetometerCalibration_SendGoal_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!magcal_wrapper__action__MagnetometerCalibration_SendGoal_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
magcal_wrapper__action__MagnetometerCalibration_SendGoal_Response__init(magcal_wrapper__action__MagnetometerCalibration_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    magcal_wrapper__action__MagnetometerCalibration_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
magcal_wrapper__action__MagnetometerCalibration_SendGoal_Response__fini(magcal_wrapper__action__MagnetometerCalibration_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

bool
magcal_wrapper__action__MagnetometerCalibration_SendGoal_Response__are_equal(const magcal_wrapper__action__MagnetometerCalibration_SendGoal_Response * lhs, const magcal_wrapper__action__MagnetometerCalibration_SendGoal_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // accepted
  if (lhs->accepted != rhs->accepted) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  return true;
}

bool
magcal_wrapper__action__MagnetometerCalibration_SendGoal_Response__copy(
  const magcal_wrapper__action__MagnetometerCalibration_SendGoal_Response * input,
  magcal_wrapper__action__MagnetometerCalibration_SendGoal_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // accepted
  output->accepted = input->accepted;
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  return true;
}

magcal_wrapper__action__MagnetometerCalibration_SendGoal_Response *
magcal_wrapper__action__MagnetometerCalibration_SendGoal_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  magcal_wrapper__action__MagnetometerCalibration_SendGoal_Response * msg = (magcal_wrapper__action__MagnetometerCalibration_SendGoal_Response *)allocator.allocate(sizeof(magcal_wrapper__action__MagnetometerCalibration_SendGoal_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(magcal_wrapper__action__MagnetometerCalibration_SendGoal_Response));
  bool success = magcal_wrapper__action__MagnetometerCalibration_SendGoal_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
magcal_wrapper__action__MagnetometerCalibration_SendGoal_Response__destroy(magcal_wrapper__action__MagnetometerCalibration_SendGoal_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    magcal_wrapper__action__MagnetometerCalibration_SendGoal_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
magcal_wrapper__action__MagnetometerCalibration_SendGoal_Response__Sequence__init(magcal_wrapper__action__MagnetometerCalibration_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  magcal_wrapper__action__MagnetometerCalibration_SendGoal_Response * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(magcal_wrapper__action__MagnetometerCalibration_SendGoal_Response)) {
      return false;
    }
    data = (magcal_wrapper__action__MagnetometerCalibration_SendGoal_Response *)allocator.zero_allocate(size, sizeof(magcal_wrapper__action__MagnetometerCalibration_SendGoal_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = magcal_wrapper__action__MagnetometerCalibration_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        magcal_wrapper__action__MagnetometerCalibration_SendGoal_Response__fini(&data[i - 1]);
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
magcal_wrapper__action__MagnetometerCalibration_SendGoal_Response__Sequence__fini(magcal_wrapper__action__MagnetometerCalibration_SendGoal_Response__Sequence * array)
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
      magcal_wrapper__action__MagnetometerCalibration_SendGoal_Response__fini(&array->data[i]);
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

magcal_wrapper__action__MagnetometerCalibration_SendGoal_Response__Sequence *
magcal_wrapper__action__MagnetometerCalibration_SendGoal_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  magcal_wrapper__action__MagnetometerCalibration_SendGoal_Response__Sequence * array = (magcal_wrapper__action__MagnetometerCalibration_SendGoal_Response__Sequence *)allocator.allocate(sizeof(magcal_wrapper__action__MagnetometerCalibration_SendGoal_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = magcal_wrapper__action__MagnetometerCalibration_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
magcal_wrapper__action__MagnetometerCalibration_SendGoal_Response__Sequence__destroy(magcal_wrapper__action__MagnetometerCalibration_SendGoal_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    magcal_wrapper__action__MagnetometerCalibration_SendGoal_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
magcal_wrapper__action__MagnetometerCalibration_SendGoal_Response__Sequence__are_equal(const magcal_wrapper__action__MagnetometerCalibration_SendGoal_Response__Sequence * lhs, const magcal_wrapper__action__MagnetometerCalibration_SendGoal_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!magcal_wrapper__action__MagnetometerCalibration_SendGoal_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
magcal_wrapper__action__MagnetometerCalibration_SendGoal_Response__Sequence__copy(
  const magcal_wrapper__action__MagnetometerCalibration_SendGoal_Response__Sequence * input,
  magcal_wrapper__action__MagnetometerCalibration_SendGoal_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(magcal_wrapper__action__MagnetometerCalibration_SendGoal_Response)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(magcal_wrapper__action__MagnetometerCalibration_SendGoal_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    magcal_wrapper__action__MagnetometerCalibration_SendGoal_Response * data =
      (magcal_wrapper__action__MagnetometerCalibration_SendGoal_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!magcal_wrapper__action__MagnetometerCalibration_SendGoal_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          magcal_wrapper__action__MagnetometerCalibration_SendGoal_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!magcal_wrapper__action__MagnetometerCalibration_SendGoal_Response__copy(
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
// #include "magcal_wrapper/action/detail/magnetometer_calibration__functions.h"

bool
magcal_wrapper__action__MagnetometerCalibration_SendGoal_Event__init(magcal_wrapper__action__MagnetometerCalibration_SendGoal_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    magcal_wrapper__action__MagnetometerCalibration_SendGoal_Event__fini(msg);
    return false;
  }
  // request
  if (!magcal_wrapper__action__MagnetometerCalibration_SendGoal_Request__Sequence__init(&msg->request, 0)) {
    magcal_wrapper__action__MagnetometerCalibration_SendGoal_Event__fini(msg);
    return false;
  }
  // response
  if (!magcal_wrapper__action__MagnetometerCalibration_SendGoal_Response__Sequence__init(&msg->response, 0)) {
    magcal_wrapper__action__MagnetometerCalibration_SendGoal_Event__fini(msg);
    return false;
  }
  return true;
}

void
magcal_wrapper__action__MagnetometerCalibration_SendGoal_Event__fini(magcal_wrapper__action__MagnetometerCalibration_SendGoal_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  magcal_wrapper__action__MagnetometerCalibration_SendGoal_Request__Sequence__fini(&msg->request);
  // response
  magcal_wrapper__action__MagnetometerCalibration_SendGoal_Response__Sequence__fini(&msg->response);
}

bool
magcal_wrapper__action__MagnetometerCalibration_SendGoal_Event__are_equal(const magcal_wrapper__action__MagnetometerCalibration_SendGoal_Event * lhs, const magcal_wrapper__action__MagnetometerCalibration_SendGoal_Event * rhs)
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
  if (!magcal_wrapper__action__MagnetometerCalibration_SendGoal_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!magcal_wrapper__action__MagnetometerCalibration_SendGoal_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
magcal_wrapper__action__MagnetometerCalibration_SendGoal_Event__copy(
  const magcal_wrapper__action__MagnetometerCalibration_SendGoal_Event * input,
  magcal_wrapper__action__MagnetometerCalibration_SendGoal_Event * output)
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
  if (!magcal_wrapper__action__MagnetometerCalibration_SendGoal_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!magcal_wrapper__action__MagnetometerCalibration_SendGoal_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

magcal_wrapper__action__MagnetometerCalibration_SendGoal_Event *
magcal_wrapper__action__MagnetometerCalibration_SendGoal_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  magcal_wrapper__action__MagnetometerCalibration_SendGoal_Event * msg = (magcal_wrapper__action__MagnetometerCalibration_SendGoal_Event *)allocator.allocate(sizeof(magcal_wrapper__action__MagnetometerCalibration_SendGoal_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(magcal_wrapper__action__MagnetometerCalibration_SendGoal_Event));
  bool success = magcal_wrapper__action__MagnetometerCalibration_SendGoal_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
magcal_wrapper__action__MagnetometerCalibration_SendGoal_Event__destroy(magcal_wrapper__action__MagnetometerCalibration_SendGoal_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    magcal_wrapper__action__MagnetometerCalibration_SendGoal_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
magcal_wrapper__action__MagnetometerCalibration_SendGoal_Event__Sequence__init(magcal_wrapper__action__MagnetometerCalibration_SendGoal_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  magcal_wrapper__action__MagnetometerCalibration_SendGoal_Event * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(magcal_wrapper__action__MagnetometerCalibration_SendGoal_Event)) {
      return false;
    }
    data = (magcal_wrapper__action__MagnetometerCalibration_SendGoal_Event *)allocator.zero_allocate(size, sizeof(magcal_wrapper__action__MagnetometerCalibration_SendGoal_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = magcal_wrapper__action__MagnetometerCalibration_SendGoal_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        magcal_wrapper__action__MagnetometerCalibration_SendGoal_Event__fini(&data[i - 1]);
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
magcal_wrapper__action__MagnetometerCalibration_SendGoal_Event__Sequence__fini(magcal_wrapper__action__MagnetometerCalibration_SendGoal_Event__Sequence * array)
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
      magcal_wrapper__action__MagnetometerCalibration_SendGoal_Event__fini(&array->data[i]);
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

magcal_wrapper__action__MagnetometerCalibration_SendGoal_Event__Sequence *
magcal_wrapper__action__MagnetometerCalibration_SendGoal_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  magcal_wrapper__action__MagnetometerCalibration_SendGoal_Event__Sequence * array = (magcal_wrapper__action__MagnetometerCalibration_SendGoal_Event__Sequence *)allocator.allocate(sizeof(magcal_wrapper__action__MagnetometerCalibration_SendGoal_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = magcal_wrapper__action__MagnetometerCalibration_SendGoal_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
magcal_wrapper__action__MagnetometerCalibration_SendGoal_Event__Sequence__destroy(magcal_wrapper__action__MagnetometerCalibration_SendGoal_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    magcal_wrapper__action__MagnetometerCalibration_SendGoal_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
magcal_wrapper__action__MagnetometerCalibration_SendGoal_Event__Sequence__are_equal(const magcal_wrapper__action__MagnetometerCalibration_SendGoal_Event__Sequence * lhs, const magcal_wrapper__action__MagnetometerCalibration_SendGoal_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!magcal_wrapper__action__MagnetometerCalibration_SendGoal_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
magcal_wrapper__action__MagnetometerCalibration_SendGoal_Event__Sequence__copy(
  const magcal_wrapper__action__MagnetometerCalibration_SendGoal_Event__Sequence * input,
  magcal_wrapper__action__MagnetometerCalibration_SendGoal_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(magcal_wrapper__action__MagnetometerCalibration_SendGoal_Event)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(magcal_wrapper__action__MagnetometerCalibration_SendGoal_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    magcal_wrapper__action__MagnetometerCalibration_SendGoal_Event * data =
      (magcal_wrapper__action__MagnetometerCalibration_SendGoal_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!magcal_wrapper__action__MagnetometerCalibration_SendGoal_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          magcal_wrapper__action__MagnetometerCalibration_SendGoal_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!magcal_wrapper__action__MagnetometerCalibration_SendGoal_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"

bool
magcal_wrapper__action__MagnetometerCalibration_GetResult_Request__init(magcal_wrapper__action__MagnetometerCalibration_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    magcal_wrapper__action__MagnetometerCalibration_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
magcal_wrapper__action__MagnetometerCalibration_GetResult_Request__fini(magcal_wrapper__action__MagnetometerCalibration_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

bool
magcal_wrapper__action__MagnetometerCalibration_GetResult_Request__are_equal(const magcal_wrapper__action__MagnetometerCalibration_GetResult_Request * lhs, const magcal_wrapper__action__MagnetometerCalibration_GetResult_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  return true;
}

bool
magcal_wrapper__action__MagnetometerCalibration_GetResult_Request__copy(
  const magcal_wrapper__action__MagnetometerCalibration_GetResult_Request * input,
  magcal_wrapper__action__MagnetometerCalibration_GetResult_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  return true;
}

magcal_wrapper__action__MagnetometerCalibration_GetResult_Request *
magcal_wrapper__action__MagnetometerCalibration_GetResult_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  magcal_wrapper__action__MagnetometerCalibration_GetResult_Request * msg = (magcal_wrapper__action__MagnetometerCalibration_GetResult_Request *)allocator.allocate(sizeof(magcal_wrapper__action__MagnetometerCalibration_GetResult_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(magcal_wrapper__action__MagnetometerCalibration_GetResult_Request));
  bool success = magcal_wrapper__action__MagnetometerCalibration_GetResult_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
magcal_wrapper__action__MagnetometerCalibration_GetResult_Request__destroy(magcal_wrapper__action__MagnetometerCalibration_GetResult_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    magcal_wrapper__action__MagnetometerCalibration_GetResult_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
magcal_wrapper__action__MagnetometerCalibration_GetResult_Request__Sequence__init(magcal_wrapper__action__MagnetometerCalibration_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  magcal_wrapper__action__MagnetometerCalibration_GetResult_Request * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(magcal_wrapper__action__MagnetometerCalibration_GetResult_Request)) {
      return false;
    }
    data = (magcal_wrapper__action__MagnetometerCalibration_GetResult_Request *)allocator.zero_allocate(size, sizeof(magcal_wrapper__action__MagnetometerCalibration_GetResult_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = magcal_wrapper__action__MagnetometerCalibration_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        magcal_wrapper__action__MagnetometerCalibration_GetResult_Request__fini(&data[i - 1]);
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
magcal_wrapper__action__MagnetometerCalibration_GetResult_Request__Sequence__fini(magcal_wrapper__action__MagnetometerCalibration_GetResult_Request__Sequence * array)
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
      magcal_wrapper__action__MagnetometerCalibration_GetResult_Request__fini(&array->data[i]);
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

magcal_wrapper__action__MagnetometerCalibration_GetResult_Request__Sequence *
magcal_wrapper__action__MagnetometerCalibration_GetResult_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  magcal_wrapper__action__MagnetometerCalibration_GetResult_Request__Sequence * array = (magcal_wrapper__action__MagnetometerCalibration_GetResult_Request__Sequence *)allocator.allocate(sizeof(magcal_wrapper__action__MagnetometerCalibration_GetResult_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = magcal_wrapper__action__MagnetometerCalibration_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
magcal_wrapper__action__MagnetometerCalibration_GetResult_Request__Sequence__destroy(magcal_wrapper__action__MagnetometerCalibration_GetResult_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    magcal_wrapper__action__MagnetometerCalibration_GetResult_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
magcal_wrapper__action__MagnetometerCalibration_GetResult_Request__Sequence__are_equal(const magcal_wrapper__action__MagnetometerCalibration_GetResult_Request__Sequence * lhs, const magcal_wrapper__action__MagnetometerCalibration_GetResult_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!magcal_wrapper__action__MagnetometerCalibration_GetResult_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
magcal_wrapper__action__MagnetometerCalibration_GetResult_Request__Sequence__copy(
  const magcal_wrapper__action__MagnetometerCalibration_GetResult_Request__Sequence * input,
  magcal_wrapper__action__MagnetometerCalibration_GetResult_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(magcal_wrapper__action__MagnetometerCalibration_GetResult_Request)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(magcal_wrapper__action__MagnetometerCalibration_GetResult_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    magcal_wrapper__action__MagnetometerCalibration_GetResult_Request * data =
      (magcal_wrapper__action__MagnetometerCalibration_GetResult_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!magcal_wrapper__action__MagnetometerCalibration_GetResult_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          magcal_wrapper__action__MagnetometerCalibration_GetResult_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!magcal_wrapper__action__MagnetometerCalibration_GetResult_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `result`
// already included above
// #include "magcal_wrapper/action/detail/magnetometer_calibration__functions.h"

bool
magcal_wrapper__action__MagnetometerCalibration_GetResult_Response__init(magcal_wrapper__action__MagnetometerCalibration_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!magcal_wrapper__action__MagnetometerCalibration_Result__init(&msg->result)) {
    magcal_wrapper__action__MagnetometerCalibration_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
magcal_wrapper__action__MagnetometerCalibration_GetResult_Response__fini(magcal_wrapper__action__MagnetometerCalibration_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  magcal_wrapper__action__MagnetometerCalibration_Result__fini(&msg->result);
}

bool
magcal_wrapper__action__MagnetometerCalibration_GetResult_Response__are_equal(const magcal_wrapper__action__MagnetometerCalibration_GetResult_Response * lhs, const magcal_wrapper__action__MagnetometerCalibration_GetResult_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // result
  if (!magcal_wrapper__action__MagnetometerCalibration_Result__are_equal(
      &(lhs->result), &(rhs->result)))
  {
    return false;
  }
  return true;
}

bool
magcal_wrapper__action__MagnetometerCalibration_GetResult_Response__copy(
  const magcal_wrapper__action__MagnetometerCalibration_GetResult_Response * input,
  magcal_wrapper__action__MagnetometerCalibration_GetResult_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  // result
  if (!magcal_wrapper__action__MagnetometerCalibration_Result__copy(
      &(input->result), &(output->result)))
  {
    return false;
  }
  return true;
}

magcal_wrapper__action__MagnetometerCalibration_GetResult_Response *
magcal_wrapper__action__MagnetometerCalibration_GetResult_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  magcal_wrapper__action__MagnetometerCalibration_GetResult_Response * msg = (magcal_wrapper__action__MagnetometerCalibration_GetResult_Response *)allocator.allocate(sizeof(magcal_wrapper__action__MagnetometerCalibration_GetResult_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(magcal_wrapper__action__MagnetometerCalibration_GetResult_Response));
  bool success = magcal_wrapper__action__MagnetometerCalibration_GetResult_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
magcal_wrapper__action__MagnetometerCalibration_GetResult_Response__destroy(magcal_wrapper__action__MagnetometerCalibration_GetResult_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    magcal_wrapper__action__MagnetometerCalibration_GetResult_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
magcal_wrapper__action__MagnetometerCalibration_GetResult_Response__Sequence__init(magcal_wrapper__action__MagnetometerCalibration_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  magcal_wrapper__action__MagnetometerCalibration_GetResult_Response * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(magcal_wrapper__action__MagnetometerCalibration_GetResult_Response)) {
      return false;
    }
    data = (magcal_wrapper__action__MagnetometerCalibration_GetResult_Response *)allocator.zero_allocate(size, sizeof(magcal_wrapper__action__MagnetometerCalibration_GetResult_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = magcal_wrapper__action__MagnetometerCalibration_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        magcal_wrapper__action__MagnetometerCalibration_GetResult_Response__fini(&data[i - 1]);
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
magcal_wrapper__action__MagnetometerCalibration_GetResult_Response__Sequence__fini(magcal_wrapper__action__MagnetometerCalibration_GetResult_Response__Sequence * array)
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
      magcal_wrapper__action__MagnetometerCalibration_GetResult_Response__fini(&array->data[i]);
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

magcal_wrapper__action__MagnetometerCalibration_GetResult_Response__Sequence *
magcal_wrapper__action__MagnetometerCalibration_GetResult_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  magcal_wrapper__action__MagnetometerCalibration_GetResult_Response__Sequence * array = (magcal_wrapper__action__MagnetometerCalibration_GetResult_Response__Sequence *)allocator.allocate(sizeof(magcal_wrapper__action__MagnetometerCalibration_GetResult_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = magcal_wrapper__action__MagnetometerCalibration_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
magcal_wrapper__action__MagnetometerCalibration_GetResult_Response__Sequence__destroy(magcal_wrapper__action__MagnetometerCalibration_GetResult_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    magcal_wrapper__action__MagnetometerCalibration_GetResult_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
magcal_wrapper__action__MagnetometerCalibration_GetResult_Response__Sequence__are_equal(const magcal_wrapper__action__MagnetometerCalibration_GetResult_Response__Sequence * lhs, const magcal_wrapper__action__MagnetometerCalibration_GetResult_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!magcal_wrapper__action__MagnetometerCalibration_GetResult_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
magcal_wrapper__action__MagnetometerCalibration_GetResult_Response__Sequence__copy(
  const magcal_wrapper__action__MagnetometerCalibration_GetResult_Response__Sequence * input,
  magcal_wrapper__action__MagnetometerCalibration_GetResult_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(magcal_wrapper__action__MagnetometerCalibration_GetResult_Response)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(magcal_wrapper__action__MagnetometerCalibration_GetResult_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    magcal_wrapper__action__MagnetometerCalibration_GetResult_Response * data =
      (magcal_wrapper__action__MagnetometerCalibration_GetResult_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!magcal_wrapper__action__MagnetometerCalibration_GetResult_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          magcal_wrapper__action__MagnetometerCalibration_GetResult_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!magcal_wrapper__action__MagnetometerCalibration_GetResult_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `info`
// already included above
// #include "service_msgs/msg/detail/service_event_info__functions.h"
// Member `request`
// Member `response`
// already included above
// #include "magcal_wrapper/action/detail/magnetometer_calibration__functions.h"

bool
magcal_wrapper__action__MagnetometerCalibration_GetResult_Event__init(magcal_wrapper__action__MagnetometerCalibration_GetResult_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    magcal_wrapper__action__MagnetometerCalibration_GetResult_Event__fini(msg);
    return false;
  }
  // request
  if (!magcal_wrapper__action__MagnetometerCalibration_GetResult_Request__Sequence__init(&msg->request, 0)) {
    magcal_wrapper__action__MagnetometerCalibration_GetResult_Event__fini(msg);
    return false;
  }
  // response
  if (!magcal_wrapper__action__MagnetometerCalibration_GetResult_Response__Sequence__init(&msg->response, 0)) {
    magcal_wrapper__action__MagnetometerCalibration_GetResult_Event__fini(msg);
    return false;
  }
  return true;
}

void
magcal_wrapper__action__MagnetometerCalibration_GetResult_Event__fini(magcal_wrapper__action__MagnetometerCalibration_GetResult_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  magcal_wrapper__action__MagnetometerCalibration_GetResult_Request__Sequence__fini(&msg->request);
  // response
  magcal_wrapper__action__MagnetometerCalibration_GetResult_Response__Sequence__fini(&msg->response);
}

bool
magcal_wrapper__action__MagnetometerCalibration_GetResult_Event__are_equal(const magcal_wrapper__action__MagnetometerCalibration_GetResult_Event * lhs, const magcal_wrapper__action__MagnetometerCalibration_GetResult_Event * rhs)
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
  if (!magcal_wrapper__action__MagnetometerCalibration_GetResult_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!magcal_wrapper__action__MagnetometerCalibration_GetResult_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
magcal_wrapper__action__MagnetometerCalibration_GetResult_Event__copy(
  const magcal_wrapper__action__MagnetometerCalibration_GetResult_Event * input,
  magcal_wrapper__action__MagnetometerCalibration_GetResult_Event * output)
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
  if (!magcal_wrapper__action__MagnetometerCalibration_GetResult_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!magcal_wrapper__action__MagnetometerCalibration_GetResult_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

magcal_wrapper__action__MagnetometerCalibration_GetResult_Event *
magcal_wrapper__action__MagnetometerCalibration_GetResult_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  magcal_wrapper__action__MagnetometerCalibration_GetResult_Event * msg = (magcal_wrapper__action__MagnetometerCalibration_GetResult_Event *)allocator.allocate(sizeof(magcal_wrapper__action__MagnetometerCalibration_GetResult_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(magcal_wrapper__action__MagnetometerCalibration_GetResult_Event));
  bool success = magcal_wrapper__action__MagnetometerCalibration_GetResult_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
magcal_wrapper__action__MagnetometerCalibration_GetResult_Event__destroy(magcal_wrapper__action__MagnetometerCalibration_GetResult_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    magcal_wrapper__action__MagnetometerCalibration_GetResult_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
magcal_wrapper__action__MagnetometerCalibration_GetResult_Event__Sequence__init(magcal_wrapper__action__MagnetometerCalibration_GetResult_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  magcal_wrapper__action__MagnetometerCalibration_GetResult_Event * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(magcal_wrapper__action__MagnetometerCalibration_GetResult_Event)) {
      return false;
    }
    data = (magcal_wrapper__action__MagnetometerCalibration_GetResult_Event *)allocator.zero_allocate(size, sizeof(magcal_wrapper__action__MagnetometerCalibration_GetResult_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = magcal_wrapper__action__MagnetometerCalibration_GetResult_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        magcal_wrapper__action__MagnetometerCalibration_GetResult_Event__fini(&data[i - 1]);
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
magcal_wrapper__action__MagnetometerCalibration_GetResult_Event__Sequence__fini(magcal_wrapper__action__MagnetometerCalibration_GetResult_Event__Sequence * array)
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
      magcal_wrapper__action__MagnetometerCalibration_GetResult_Event__fini(&array->data[i]);
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

magcal_wrapper__action__MagnetometerCalibration_GetResult_Event__Sequence *
magcal_wrapper__action__MagnetometerCalibration_GetResult_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  magcal_wrapper__action__MagnetometerCalibration_GetResult_Event__Sequence * array = (magcal_wrapper__action__MagnetometerCalibration_GetResult_Event__Sequence *)allocator.allocate(sizeof(magcal_wrapper__action__MagnetometerCalibration_GetResult_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = magcal_wrapper__action__MagnetometerCalibration_GetResult_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
magcal_wrapper__action__MagnetometerCalibration_GetResult_Event__Sequence__destroy(magcal_wrapper__action__MagnetometerCalibration_GetResult_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    magcal_wrapper__action__MagnetometerCalibration_GetResult_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
magcal_wrapper__action__MagnetometerCalibration_GetResult_Event__Sequence__are_equal(const magcal_wrapper__action__MagnetometerCalibration_GetResult_Event__Sequence * lhs, const magcal_wrapper__action__MagnetometerCalibration_GetResult_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!magcal_wrapper__action__MagnetometerCalibration_GetResult_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
magcal_wrapper__action__MagnetometerCalibration_GetResult_Event__Sequence__copy(
  const magcal_wrapper__action__MagnetometerCalibration_GetResult_Event__Sequence * input,
  magcal_wrapper__action__MagnetometerCalibration_GetResult_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(magcal_wrapper__action__MagnetometerCalibration_GetResult_Event)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(magcal_wrapper__action__MagnetometerCalibration_GetResult_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    magcal_wrapper__action__MagnetometerCalibration_GetResult_Event * data =
      (magcal_wrapper__action__MagnetometerCalibration_GetResult_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!magcal_wrapper__action__MagnetometerCalibration_GetResult_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          magcal_wrapper__action__MagnetometerCalibration_GetResult_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!magcal_wrapper__action__MagnetometerCalibration_GetResult_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `feedback`
// already included above
// #include "magcal_wrapper/action/detail/magnetometer_calibration__functions.h"

bool
magcal_wrapper__action__MagnetometerCalibration_FeedbackMessage__init(magcal_wrapper__action__MagnetometerCalibration_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    magcal_wrapper__action__MagnetometerCalibration_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!magcal_wrapper__action__MagnetometerCalibration_Feedback__init(&msg->feedback)) {
    magcal_wrapper__action__MagnetometerCalibration_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
magcal_wrapper__action__MagnetometerCalibration_FeedbackMessage__fini(magcal_wrapper__action__MagnetometerCalibration_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  magcal_wrapper__action__MagnetometerCalibration_Feedback__fini(&msg->feedback);
}

bool
magcal_wrapper__action__MagnetometerCalibration_FeedbackMessage__are_equal(const magcal_wrapper__action__MagnetometerCalibration_FeedbackMessage * lhs, const magcal_wrapper__action__MagnetometerCalibration_FeedbackMessage * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // feedback
  if (!magcal_wrapper__action__MagnetometerCalibration_Feedback__are_equal(
      &(lhs->feedback), &(rhs->feedback)))
  {
    return false;
  }
  return true;
}

bool
magcal_wrapper__action__MagnetometerCalibration_FeedbackMessage__copy(
  const magcal_wrapper__action__MagnetometerCalibration_FeedbackMessage * input,
  magcal_wrapper__action__MagnetometerCalibration_FeedbackMessage * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // feedback
  if (!magcal_wrapper__action__MagnetometerCalibration_Feedback__copy(
      &(input->feedback), &(output->feedback)))
  {
    return false;
  }
  return true;
}

magcal_wrapper__action__MagnetometerCalibration_FeedbackMessage *
magcal_wrapper__action__MagnetometerCalibration_FeedbackMessage__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  magcal_wrapper__action__MagnetometerCalibration_FeedbackMessage * msg = (magcal_wrapper__action__MagnetometerCalibration_FeedbackMessage *)allocator.allocate(sizeof(magcal_wrapper__action__MagnetometerCalibration_FeedbackMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(magcal_wrapper__action__MagnetometerCalibration_FeedbackMessage));
  bool success = magcal_wrapper__action__MagnetometerCalibration_FeedbackMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
magcal_wrapper__action__MagnetometerCalibration_FeedbackMessage__destroy(magcal_wrapper__action__MagnetometerCalibration_FeedbackMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    magcal_wrapper__action__MagnetometerCalibration_FeedbackMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
magcal_wrapper__action__MagnetometerCalibration_FeedbackMessage__Sequence__init(magcal_wrapper__action__MagnetometerCalibration_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  magcal_wrapper__action__MagnetometerCalibration_FeedbackMessage * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(magcal_wrapper__action__MagnetometerCalibration_FeedbackMessage)) {
      return false;
    }
    data = (magcal_wrapper__action__MagnetometerCalibration_FeedbackMessage *)allocator.zero_allocate(size, sizeof(magcal_wrapper__action__MagnetometerCalibration_FeedbackMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = magcal_wrapper__action__MagnetometerCalibration_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        magcal_wrapper__action__MagnetometerCalibration_FeedbackMessage__fini(&data[i - 1]);
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
magcal_wrapper__action__MagnetometerCalibration_FeedbackMessage__Sequence__fini(magcal_wrapper__action__MagnetometerCalibration_FeedbackMessage__Sequence * array)
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
      magcal_wrapper__action__MagnetometerCalibration_FeedbackMessage__fini(&array->data[i]);
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

magcal_wrapper__action__MagnetometerCalibration_FeedbackMessage__Sequence *
magcal_wrapper__action__MagnetometerCalibration_FeedbackMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  magcal_wrapper__action__MagnetometerCalibration_FeedbackMessage__Sequence * array = (magcal_wrapper__action__MagnetometerCalibration_FeedbackMessage__Sequence *)allocator.allocate(sizeof(magcal_wrapper__action__MagnetometerCalibration_FeedbackMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = magcal_wrapper__action__MagnetometerCalibration_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
magcal_wrapper__action__MagnetometerCalibration_FeedbackMessage__Sequence__destroy(magcal_wrapper__action__MagnetometerCalibration_FeedbackMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    magcal_wrapper__action__MagnetometerCalibration_FeedbackMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
magcal_wrapper__action__MagnetometerCalibration_FeedbackMessage__Sequence__are_equal(const magcal_wrapper__action__MagnetometerCalibration_FeedbackMessage__Sequence * lhs, const magcal_wrapper__action__MagnetometerCalibration_FeedbackMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!magcal_wrapper__action__MagnetometerCalibration_FeedbackMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
magcal_wrapper__action__MagnetometerCalibration_FeedbackMessage__Sequence__copy(
  const magcal_wrapper__action__MagnetometerCalibration_FeedbackMessage__Sequence * input,
  magcal_wrapper__action__MagnetometerCalibration_FeedbackMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(magcal_wrapper__action__MagnetometerCalibration_FeedbackMessage)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(magcal_wrapper__action__MagnetometerCalibration_FeedbackMessage);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    magcal_wrapper__action__MagnetometerCalibration_FeedbackMessage * data =
      (magcal_wrapper__action__MagnetometerCalibration_FeedbackMessage *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!magcal_wrapper__action__MagnetometerCalibration_FeedbackMessage__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          magcal_wrapper__action__MagnetometerCalibration_FeedbackMessage__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!magcal_wrapper__action__MagnetometerCalibration_FeedbackMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
