// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mrover:msg/Spectral.idl
// generated code does not contain a copyright notice
#include "mrover/msg/detail/spectral__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
mrover__msg__Spectral__init(mrover__msg__Spectral * msg)
{
  if (!msg) {
    return false;
  }
  // site
  // data
  // error
  return true;
}

void
mrover__msg__Spectral__fini(mrover__msg__Spectral * msg)
{
  if (!msg) {
    return;
  }
  // site
  // data
  // error
}

bool
mrover__msg__Spectral__are_equal(const mrover__msg__Spectral * lhs, const mrover__msg__Spectral * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // site
  if (lhs->site != rhs->site) {
    return false;
  }
  // data
  for (size_t i = 0; i < 6; ++i) {
    if (lhs->data[i] != rhs->data[i]) {
      return false;
    }
  }
  // error
  if (lhs->error != rhs->error) {
    return false;
  }
  return true;
}

bool
mrover__msg__Spectral__copy(
  const mrover__msg__Spectral * input,
  mrover__msg__Spectral * output)
{
  if (!input || !output) {
    return false;
  }
  // site
  output->site = input->site;
  // data
  for (size_t i = 0; i < 6; ++i) {
    output->data[i] = input->data[i];
  }
  // error
  output->error = input->error;
  return true;
}

mrover__msg__Spectral *
mrover__msg__Spectral__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrover__msg__Spectral * msg = (mrover__msg__Spectral *)allocator.allocate(sizeof(mrover__msg__Spectral), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mrover__msg__Spectral));
  bool success = mrover__msg__Spectral__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mrover__msg__Spectral__destroy(mrover__msg__Spectral * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mrover__msg__Spectral__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mrover__msg__Spectral__Sequence__init(mrover__msg__Spectral__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrover__msg__Spectral * data = NULL;

  if (size) {
    data = (mrover__msg__Spectral *)allocator.zero_allocate(size, sizeof(mrover__msg__Spectral), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mrover__msg__Spectral__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mrover__msg__Spectral__fini(&data[i - 1]);
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
mrover__msg__Spectral__Sequence__fini(mrover__msg__Spectral__Sequence * array)
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
      mrover__msg__Spectral__fini(&array->data[i]);
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

mrover__msg__Spectral__Sequence *
mrover__msg__Spectral__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrover__msg__Spectral__Sequence * array = (mrover__msg__Spectral__Sequence *)allocator.allocate(sizeof(mrover__msg__Spectral__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mrover__msg__Spectral__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mrover__msg__Spectral__Sequence__destroy(mrover__msg__Spectral__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mrover__msg__Spectral__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mrover__msg__Spectral__Sequence__are_equal(const mrover__msg__Spectral__Sequence * lhs, const mrover__msg__Spectral__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mrover__msg__Spectral__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mrover__msg__Spectral__Sequence__copy(
  const mrover__msg__Spectral__Sequence * input,
  mrover__msg__Spectral__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mrover__msg__Spectral);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mrover__msg__Spectral * data =
      (mrover__msg__Spectral *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mrover__msg__Spectral__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mrover__msg__Spectral__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mrover__msg__Spectral__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
