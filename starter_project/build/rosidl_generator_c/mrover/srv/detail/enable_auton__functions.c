// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mrover:srv/EnableAuton.idl
// generated code does not contain a copyright notice
#include "mrover/srv/detail/enable_auton__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `waypoints`
#include "mrover/msg/detail/gps_waypoint__functions.h"

bool
mrover__srv__EnableAuton_Request__init(mrover__srv__EnableAuton_Request * msg)
{
  if (!msg) {
    return false;
  }
  // enable
  // waypoints
  if (!mrover__msg__GPSWaypoint__Sequence__init(&msg->waypoints, 0)) {
    mrover__srv__EnableAuton_Request__fini(msg);
    return false;
  }
  return true;
}

void
mrover__srv__EnableAuton_Request__fini(mrover__srv__EnableAuton_Request * msg)
{
  if (!msg) {
    return;
  }
  // enable
  // waypoints
  mrover__msg__GPSWaypoint__Sequence__fini(&msg->waypoints);
}

bool
mrover__srv__EnableAuton_Request__are_equal(const mrover__srv__EnableAuton_Request * lhs, const mrover__srv__EnableAuton_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // enable
  if (lhs->enable != rhs->enable) {
    return false;
  }
  // waypoints
  if (!mrover__msg__GPSWaypoint__Sequence__are_equal(
      &(lhs->waypoints), &(rhs->waypoints)))
  {
    return false;
  }
  return true;
}

bool
mrover__srv__EnableAuton_Request__copy(
  const mrover__srv__EnableAuton_Request * input,
  mrover__srv__EnableAuton_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // enable
  output->enable = input->enable;
  // waypoints
  if (!mrover__msg__GPSWaypoint__Sequence__copy(
      &(input->waypoints), &(output->waypoints)))
  {
    return false;
  }
  return true;
}

mrover__srv__EnableAuton_Request *
mrover__srv__EnableAuton_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrover__srv__EnableAuton_Request * msg = (mrover__srv__EnableAuton_Request *)allocator.allocate(sizeof(mrover__srv__EnableAuton_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mrover__srv__EnableAuton_Request));
  bool success = mrover__srv__EnableAuton_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mrover__srv__EnableAuton_Request__destroy(mrover__srv__EnableAuton_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mrover__srv__EnableAuton_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mrover__srv__EnableAuton_Request__Sequence__init(mrover__srv__EnableAuton_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrover__srv__EnableAuton_Request * data = NULL;

  if (size) {
    data = (mrover__srv__EnableAuton_Request *)allocator.zero_allocate(size, sizeof(mrover__srv__EnableAuton_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mrover__srv__EnableAuton_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mrover__srv__EnableAuton_Request__fini(&data[i - 1]);
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
mrover__srv__EnableAuton_Request__Sequence__fini(mrover__srv__EnableAuton_Request__Sequence * array)
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
      mrover__srv__EnableAuton_Request__fini(&array->data[i]);
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

mrover__srv__EnableAuton_Request__Sequence *
mrover__srv__EnableAuton_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrover__srv__EnableAuton_Request__Sequence * array = (mrover__srv__EnableAuton_Request__Sequence *)allocator.allocate(sizeof(mrover__srv__EnableAuton_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mrover__srv__EnableAuton_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mrover__srv__EnableAuton_Request__Sequence__destroy(mrover__srv__EnableAuton_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mrover__srv__EnableAuton_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mrover__srv__EnableAuton_Request__Sequence__are_equal(const mrover__srv__EnableAuton_Request__Sequence * lhs, const mrover__srv__EnableAuton_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mrover__srv__EnableAuton_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mrover__srv__EnableAuton_Request__Sequence__copy(
  const mrover__srv__EnableAuton_Request__Sequence * input,
  mrover__srv__EnableAuton_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mrover__srv__EnableAuton_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mrover__srv__EnableAuton_Request * data =
      (mrover__srv__EnableAuton_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mrover__srv__EnableAuton_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mrover__srv__EnableAuton_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mrover__srv__EnableAuton_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
mrover__srv__EnableAuton_Response__init(mrover__srv__EnableAuton_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  return true;
}

void
mrover__srv__EnableAuton_Response__fini(mrover__srv__EnableAuton_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
}

bool
mrover__srv__EnableAuton_Response__are_equal(const mrover__srv__EnableAuton_Response * lhs, const mrover__srv__EnableAuton_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  return true;
}

bool
mrover__srv__EnableAuton_Response__copy(
  const mrover__srv__EnableAuton_Response * input,
  mrover__srv__EnableAuton_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  return true;
}

mrover__srv__EnableAuton_Response *
mrover__srv__EnableAuton_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrover__srv__EnableAuton_Response * msg = (mrover__srv__EnableAuton_Response *)allocator.allocate(sizeof(mrover__srv__EnableAuton_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mrover__srv__EnableAuton_Response));
  bool success = mrover__srv__EnableAuton_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mrover__srv__EnableAuton_Response__destroy(mrover__srv__EnableAuton_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mrover__srv__EnableAuton_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mrover__srv__EnableAuton_Response__Sequence__init(mrover__srv__EnableAuton_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrover__srv__EnableAuton_Response * data = NULL;

  if (size) {
    data = (mrover__srv__EnableAuton_Response *)allocator.zero_allocate(size, sizeof(mrover__srv__EnableAuton_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mrover__srv__EnableAuton_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mrover__srv__EnableAuton_Response__fini(&data[i - 1]);
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
mrover__srv__EnableAuton_Response__Sequence__fini(mrover__srv__EnableAuton_Response__Sequence * array)
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
      mrover__srv__EnableAuton_Response__fini(&array->data[i]);
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

mrover__srv__EnableAuton_Response__Sequence *
mrover__srv__EnableAuton_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrover__srv__EnableAuton_Response__Sequence * array = (mrover__srv__EnableAuton_Response__Sequence *)allocator.allocate(sizeof(mrover__srv__EnableAuton_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mrover__srv__EnableAuton_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mrover__srv__EnableAuton_Response__Sequence__destroy(mrover__srv__EnableAuton_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mrover__srv__EnableAuton_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mrover__srv__EnableAuton_Response__Sequence__are_equal(const mrover__srv__EnableAuton_Response__Sequence * lhs, const mrover__srv__EnableAuton_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mrover__srv__EnableAuton_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mrover__srv__EnableAuton_Response__Sequence__copy(
  const mrover__srv__EnableAuton_Response__Sequence * input,
  mrover__srv__EnableAuton_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mrover__srv__EnableAuton_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mrover__srv__EnableAuton_Response * data =
      (mrover__srv__EnableAuton_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mrover__srv__EnableAuton_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mrover__srv__EnableAuton_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mrover__srv__EnableAuton_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
