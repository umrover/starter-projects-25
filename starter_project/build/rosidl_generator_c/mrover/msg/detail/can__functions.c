// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mrover:msg/CAN.idl
// generated code does not contain a copyright notice
#include "mrover/msg/detail/can__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `source`
// Member `destination`
#include "rosidl_runtime_c/string_functions.h"
// Member `data`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
mrover__msg__CAN__init(mrover__msg__CAN * msg)
{
  if (!msg) {
    return false;
  }
  // source
  if (!rosidl_runtime_c__String__init(&msg->source)) {
    mrover__msg__CAN__fini(msg);
    return false;
  }
  // destination
  if (!rosidl_runtime_c__String__init(&msg->destination)) {
    mrover__msg__CAN__fini(msg);
    return false;
  }
  // data
  if (!rosidl_runtime_c__uint8__Sequence__init(&msg->data, 0)) {
    mrover__msg__CAN__fini(msg);
    return false;
  }
  // reply_required
  return true;
}

void
mrover__msg__CAN__fini(mrover__msg__CAN * msg)
{
  if (!msg) {
    return;
  }
  // source
  rosidl_runtime_c__String__fini(&msg->source);
  // destination
  rosidl_runtime_c__String__fini(&msg->destination);
  // data
  rosidl_runtime_c__uint8__Sequence__fini(&msg->data);
  // reply_required
}

bool
mrover__msg__CAN__are_equal(const mrover__msg__CAN * lhs, const mrover__msg__CAN * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // source
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->source), &(rhs->source)))
  {
    return false;
  }
  // destination
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->destination), &(rhs->destination)))
  {
    return false;
  }
  // data
  if (!rosidl_runtime_c__uint8__Sequence__are_equal(
      &(lhs->data), &(rhs->data)))
  {
    return false;
  }
  // reply_required
  if (lhs->reply_required != rhs->reply_required) {
    return false;
  }
  return true;
}

bool
mrover__msg__CAN__copy(
  const mrover__msg__CAN * input,
  mrover__msg__CAN * output)
{
  if (!input || !output) {
    return false;
  }
  // source
  if (!rosidl_runtime_c__String__copy(
      &(input->source), &(output->source)))
  {
    return false;
  }
  // destination
  if (!rosidl_runtime_c__String__copy(
      &(input->destination), &(output->destination)))
  {
    return false;
  }
  // data
  if (!rosidl_runtime_c__uint8__Sequence__copy(
      &(input->data), &(output->data)))
  {
    return false;
  }
  // reply_required
  output->reply_required = input->reply_required;
  return true;
}

mrover__msg__CAN *
mrover__msg__CAN__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrover__msg__CAN * msg = (mrover__msg__CAN *)allocator.allocate(sizeof(mrover__msg__CAN), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mrover__msg__CAN));
  bool success = mrover__msg__CAN__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mrover__msg__CAN__destroy(mrover__msg__CAN * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mrover__msg__CAN__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mrover__msg__CAN__Sequence__init(mrover__msg__CAN__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrover__msg__CAN * data = NULL;

  if (size) {
    data = (mrover__msg__CAN *)allocator.zero_allocate(size, sizeof(mrover__msg__CAN), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mrover__msg__CAN__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mrover__msg__CAN__fini(&data[i - 1]);
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
mrover__msg__CAN__Sequence__fini(mrover__msg__CAN__Sequence * array)
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
      mrover__msg__CAN__fini(&array->data[i]);
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

mrover__msg__CAN__Sequence *
mrover__msg__CAN__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrover__msg__CAN__Sequence * array = (mrover__msg__CAN__Sequence *)allocator.allocate(sizeof(mrover__msg__CAN__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mrover__msg__CAN__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mrover__msg__CAN__Sequence__destroy(mrover__msg__CAN__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mrover__msg__CAN__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mrover__msg__CAN__Sequence__are_equal(const mrover__msg__CAN__Sequence * lhs, const mrover__msg__CAN__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mrover__msg__CAN__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mrover__msg__CAN__Sequence__copy(
  const mrover__msg__CAN__Sequence * input,
  mrover__msg__CAN__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mrover__msg__CAN);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mrover__msg__CAN * data =
      (mrover__msg__CAN *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mrover__msg__CAN__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mrover__msg__CAN__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mrover__msg__CAN__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
