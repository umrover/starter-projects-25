// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mrover:msg/StateMachineStructure.idl
// generated code does not contain a copyright notice
#include "mrover/msg/detail/state_machine_structure__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `machine_name`
#include "rosidl_runtime_c/string_functions.h"
// Member `transitions`
#include "mrover/msg/detail/state_machine_transition__functions.h"

bool
mrover__msg__StateMachineStructure__init(mrover__msg__StateMachineStructure * msg)
{
  if (!msg) {
    return false;
  }
  // machine_name
  if (!rosidl_runtime_c__String__init(&msg->machine_name)) {
    mrover__msg__StateMachineStructure__fini(msg);
    return false;
  }
  // transitions
  if (!mrover__msg__StateMachineTransition__Sequence__init(&msg->transitions, 0)) {
    mrover__msg__StateMachineStructure__fini(msg);
    return false;
  }
  return true;
}

void
mrover__msg__StateMachineStructure__fini(mrover__msg__StateMachineStructure * msg)
{
  if (!msg) {
    return;
  }
  // machine_name
  rosidl_runtime_c__String__fini(&msg->machine_name);
  // transitions
  mrover__msg__StateMachineTransition__Sequence__fini(&msg->transitions);
}

bool
mrover__msg__StateMachineStructure__are_equal(const mrover__msg__StateMachineStructure * lhs, const mrover__msg__StateMachineStructure * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // machine_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->machine_name), &(rhs->machine_name)))
  {
    return false;
  }
  // transitions
  if (!mrover__msg__StateMachineTransition__Sequence__are_equal(
      &(lhs->transitions), &(rhs->transitions)))
  {
    return false;
  }
  return true;
}

bool
mrover__msg__StateMachineStructure__copy(
  const mrover__msg__StateMachineStructure * input,
  mrover__msg__StateMachineStructure * output)
{
  if (!input || !output) {
    return false;
  }
  // machine_name
  if (!rosidl_runtime_c__String__copy(
      &(input->machine_name), &(output->machine_name)))
  {
    return false;
  }
  // transitions
  if (!mrover__msg__StateMachineTransition__Sequence__copy(
      &(input->transitions), &(output->transitions)))
  {
    return false;
  }
  return true;
}

mrover__msg__StateMachineStructure *
mrover__msg__StateMachineStructure__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrover__msg__StateMachineStructure * msg = (mrover__msg__StateMachineStructure *)allocator.allocate(sizeof(mrover__msg__StateMachineStructure), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mrover__msg__StateMachineStructure));
  bool success = mrover__msg__StateMachineStructure__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mrover__msg__StateMachineStructure__destroy(mrover__msg__StateMachineStructure * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mrover__msg__StateMachineStructure__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mrover__msg__StateMachineStructure__Sequence__init(mrover__msg__StateMachineStructure__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrover__msg__StateMachineStructure * data = NULL;

  if (size) {
    data = (mrover__msg__StateMachineStructure *)allocator.zero_allocate(size, sizeof(mrover__msg__StateMachineStructure), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mrover__msg__StateMachineStructure__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mrover__msg__StateMachineStructure__fini(&data[i - 1]);
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
mrover__msg__StateMachineStructure__Sequence__fini(mrover__msg__StateMachineStructure__Sequence * array)
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
      mrover__msg__StateMachineStructure__fini(&array->data[i]);
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

mrover__msg__StateMachineStructure__Sequence *
mrover__msg__StateMachineStructure__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrover__msg__StateMachineStructure__Sequence * array = (mrover__msg__StateMachineStructure__Sequence *)allocator.allocate(sizeof(mrover__msg__StateMachineStructure__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mrover__msg__StateMachineStructure__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mrover__msg__StateMachineStructure__Sequence__destroy(mrover__msg__StateMachineStructure__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mrover__msg__StateMachineStructure__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mrover__msg__StateMachineStructure__Sequence__are_equal(const mrover__msg__StateMachineStructure__Sequence * lhs, const mrover__msg__StateMachineStructure__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mrover__msg__StateMachineStructure__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mrover__msg__StateMachineStructure__Sequence__copy(
  const mrover__msg__StateMachineStructure__Sequence * input,
  mrover__msg__StateMachineStructure__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mrover__msg__StateMachineStructure);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mrover__msg__StateMachineStructure * data =
      (mrover__msg__StateMachineStructure *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mrover__msg__StateMachineStructure__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mrover__msg__StateMachineStructure__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mrover__msg__StateMachineStructure__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
