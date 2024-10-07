// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mrover:msg/StateMachineTransition.idl
// generated code does not contain a copyright notice
#include "mrover/msg/detail/state_machine_transition__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `origin`
// Member `destinations`
#include "rosidl_runtime_c/string_functions.h"

bool
mrover__msg__StateMachineTransition__init(mrover__msg__StateMachineTransition * msg)
{
  if (!msg) {
    return false;
  }
  // origin
  if (!rosidl_runtime_c__String__init(&msg->origin)) {
    mrover__msg__StateMachineTransition__fini(msg);
    return false;
  }
  // destinations
  if (!rosidl_runtime_c__String__Sequence__init(&msg->destinations, 0)) {
    mrover__msg__StateMachineTransition__fini(msg);
    return false;
  }
  return true;
}

void
mrover__msg__StateMachineTransition__fini(mrover__msg__StateMachineTransition * msg)
{
  if (!msg) {
    return;
  }
  // origin
  rosidl_runtime_c__String__fini(&msg->origin);
  // destinations
  rosidl_runtime_c__String__Sequence__fini(&msg->destinations);
}

bool
mrover__msg__StateMachineTransition__are_equal(const mrover__msg__StateMachineTransition * lhs, const mrover__msg__StateMachineTransition * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // origin
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->origin), &(rhs->origin)))
  {
    return false;
  }
  // destinations
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->destinations), &(rhs->destinations)))
  {
    return false;
  }
  return true;
}

bool
mrover__msg__StateMachineTransition__copy(
  const mrover__msg__StateMachineTransition * input,
  mrover__msg__StateMachineTransition * output)
{
  if (!input || !output) {
    return false;
  }
  // origin
  if (!rosidl_runtime_c__String__copy(
      &(input->origin), &(output->origin)))
  {
    return false;
  }
  // destinations
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->destinations), &(output->destinations)))
  {
    return false;
  }
  return true;
}

mrover__msg__StateMachineTransition *
mrover__msg__StateMachineTransition__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrover__msg__StateMachineTransition * msg = (mrover__msg__StateMachineTransition *)allocator.allocate(sizeof(mrover__msg__StateMachineTransition), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mrover__msg__StateMachineTransition));
  bool success = mrover__msg__StateMachineTransition__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mrover__msg__StateMachineTransition__destroy(mrover__msg__StateMachineTransition * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mrover__msg__StateMachineTransition__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mrover__msg__StateMachineTransition__Sequence__init(mrover__msg__StateMachineTransition__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrover__msg__StateMachineTransition * data = NULL;

  if (size) {
    data = (mrover__msg__StateMachineTransition *)allocator.zero_allocate(size, sizeof(mrover__msg__StateMachineTransition), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mrover__msg__StateMachineTransition__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mrover__msg__StateMachineTransition__fini(&data[i - 1]);
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
mrover__msg__StateMachineTransition__Sequence__fini(mrover__msg__StateMachineTransition__Sequence * array)
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
      mrover__msg__StateMachineTransition__fini(&array->data[i]);
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

mrover__msg__StateMachineTransition__Sequence *
mrover__msg__StateMachineTransition__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrover__msg__StateMachineTransition__Sequence * array = (mrover__msg__StateMachineTransition__Sequence *)allocator.allocate(sizeof(mrover__msg__StateMachineTransition__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mrover__msg__StateMachineTransition__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mrover__msg__StateMachineTransition__Sequence__destroy(mrover__msg__StateMachineTransition__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mrover__msg__StateMachineTransition__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mrover__msg__StateMachineTransition__Sequence__are_equal(const mrover__msg__StateMachineTransition__Sequence * lhs, const mrover__msg__StateMachineTransition__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mrover__msg__StateMachineTransition__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mrover__msg__StateMachineTransition__Sequence__copy(
  const mrover__msg__StateMachineTransition__Sequence * input,
  mrover__msg__StateMachineTransition__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mrover__msg__StateMachineTransition);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mrover__msg__StateMachineTransition * data =
      (mrover__msg__StateMachineTransition *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mrover__msg__StateMachineTransition__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mrover__msg__StateMachineTransition__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mrover__msg__StateMachineTransition__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
