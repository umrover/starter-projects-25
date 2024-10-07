// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mrover:msg/CalibrationStatus.idl
// generated code does not contain a copyright notice
#include "mrover/msg/detail/calibration_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
mrover__msg__CalibrationStatus__init(mrover__msg__CalibrationStatus * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    mrover__msg__CalibrationStatus__fini(msg);
    return false;
  }
  // magnetometer_calibration
  // gyroscope_calibration
  // acceleration_calibration
  return true;
}

void
mrover__msg__CalibrationStatus__fini(mrover__msg__CalibrationStatus * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // magnetometer_calibration
  // gyroscope_calibration
  // acceleration_calibration
}

bool
mrover__msg__CalibrationStatus__are_equal(const mrover__msg__CalibrationStatus * lhs, const mrover__msg__CalibrationStatus * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // magnetometer_calibration
  if (lhs->magnetometer_calibration != rhs->magnetometer_calibration) {
    return false;
  }
  // gyroscope_calibration
  if (lhs->gyroscope_calibration != rhs->gyroscope_calibration) {
    return false;
  }
  // acceleration_calibration
  if (lhs->acceleration_calibration != rhs->acceleration_calibration) {
    return false;
  }
  return true;
}

bool
mrover__msg__CalibrationStatus__copy(
  const mrover__msg__CalibrationStatus * input,
  mrover__msg__CalibrationStatus * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // magnetometer_calibration
  output->magnetometer_calibration = input->magnetometer_calibration;
  // gyroscope_calibration
  output->gyroscope_calibration = input->gyroscope_calibration;
  // acceleration_calibration
  output->acceleration_calibration = input->acceleration_calibration;
  return true;
}

mrover__msg__CalibrationStatus *
mrover__msg__CalibrationStatus__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrover__msg__CalibrationStatus * msg = (mrover__msg__CalibrationStatus *)allocator.allocate(sizeof(mrover__msg__CalibrationStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mrover__msg__CalibrationStatus));
  bool success = mrover__msg__CalibrationStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mrover__msg__CalibrationStatus__destroy(mrover__msg__CalibrationStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mrover__msg__CalibrationStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mrover__msg__CalibrationStatus__Sequence__init(mrover__msg__CalibrationStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrover__msg__CalibrationStatus * data = NULL;

  if (size) {
    data = (mrover__msg__CalibrationStatus *)allocator.zero_allocate(size, sizeof(mrover__msg__CalibrationStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mrover__msg__CalibrationStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mrover__msg__CalibrationStatus__fini(&data[i - 1]);
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
mrover__msg__CalibrationStatus__Sequence__fini(mrover__msg__CalibrationStatus__Sequence * array)
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
      mrover__msg__CalibrationStatus__fini(&array->data[i]);
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

mrover__msg__CalibrationStatus__Sequence *
mrover__msg__CalibrationStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrover__msg__CalibrationStatus__Sequence * array = (mrover__msg__CalibrationStatus__Sequence *)allocator.allocate(sizeof(mrover__msg__CalibrationStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mrover__msg__CalibrationStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mrover__msg__CalibrationStatus__Sequence__destroy(mrover__msg__CalibrationStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mrover__msg__CalibrationStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mrover__msg__CalibrationStatus__Sequence__are_equal(const mrover__msg__CalibrationStatus__Sequence * lhs, const mrover__msg__CalibrationStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mrover__msg__CalibrationStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mrover__msg__CalibrationStatus__Sequence__copy(
  const mrover__msg__CalibrationStatus__Sequence * input,
  mrover__msg__CalibrationStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mrover__msg__CalibrationStatus);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mrover__msg__CalibrationStatus * data =
      (mrover__msg__CalibrationStatus *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mrover__msg__CalibrationStatus__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mrover__msg__CalibrationStatus__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mrover__msg__CalibrationStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
