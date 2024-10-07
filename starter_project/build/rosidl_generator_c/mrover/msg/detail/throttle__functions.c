// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mrover:msg/Throttle.idl
// generated code does not contain a copyright notice
#include "mrover/msg/detail/throttle__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `names`
#include "rosidl_runtime_c/string_functions.h"
// Member `throttles`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
mrover__msg__Throttle__init(mrover__msg__Throttle * msg)
{
  if (!msg) {
    return false;
  }
  // names
  if (!rosidl_runtime_c__String__Sequence__init(&msg->names, 0)) {
    mrover__msg__Throttle__fini(msg);
    return false;
  }
  // throttles
  if (!rosidl_runtime_c__float__Sequence__init(&msg->throttles, 0)) {
    mrover__msg__Throttle__fini(msg);
    return false;
  }
  return true;
}

void
mrover__msg__Throttle__fini(mrover__msg__Throttle * msg)
{
  if (!msg) {
    return;
  }
  // names
  rosidl_runtime_c__String__Sequence__fini(&msg->names);
  // throttles
  rosidl_runtime_c__float__Sequence__fini(&msg->throttles);
}

bool
mrover__msg__Throttle__are_equal(const mrover__msg__Throttle * lhs, const mrover__msg__Throttle * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // names
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->names), &(rhs->names)))
  {
    return false;
  }
  // throttles
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->throttles), &(rhs->throttles)))
  {
    return false;
  }
  return true;
}

bool
mrover__msg__Throttle__copy(
  const mrover__msg__Throttle * input,
  mrover__msg__Throttle * output)
{
  if (!input || !output) {
    return false;
  }
  // names
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->names), &(output->names)))
  {
    return false;
  }
  // throttles
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->throttles), &(output->throttles)))
  {
    return false;
  }
  return true;
}

mrover__msg__Throttle *
mrover__msg__Throttle__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrover__msg__Throttle * msg = (mrover__msg__Throttle *)allocator.allocate(sizeof(mrover__msg__Throttle), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mrover__msg__Throttle));
  bool success = mrover__msg__Throttle__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mrover__msg__Throttle__destroy(mrover__msg__Throttle * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mrover__msg__Throttle__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mrover__msg__Throttle__Sequence__init(mrover__msg__Throttle__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrover__msg__Throttle * data = NULL;

  if (size) {
    data = (mrover__msg__Throttle *)allocator.zero_allocate(size, sizeof(mrover__msg__Throttle), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mrover__msg__Throttle__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mrover__msg__Throttle__fini(&data[i - 1]);
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
mrover__msg__Throttle__Sequence__fini(mrover__msg__Throttle__Sequence * array)
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
      mrover__msg__Throttle__fini(&array->data[i]);
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

mrover__msg__Throttle__Sequence *
mrover__msg__Throttle__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrover__msg__Throttle__Sequence * array = (mrover__msg__Throttle__Sequence *)allocator.allocate(sizeof(mrover__msg__Throttle__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mrover__msg__Throttle__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mrover__msg__Throttle__Sequence__destroy(mrover__msg__Throttle__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mrover__msg__Throttle__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mrover__msg__Throttle__Sequence__are_equal(const mrover__msg__Throttle__Sequence * lhs, const mrover__msg__Throttle__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mrover__msg__Throttle__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mrover__msg__Throttle__Sequence__copy(
  const mrover__msg__Throttle__Sequence * input,
  mrover__msg__Throttle__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mrover__msg__Throttle);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mrover__msg__Throttle * data =
      (mrover__msg__Throttle *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mrover__msg__Throttle__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mrover__msg__Throttle__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mrover__msg__Throttle__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
