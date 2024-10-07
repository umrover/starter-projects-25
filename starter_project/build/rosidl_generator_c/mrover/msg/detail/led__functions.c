// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mrover:msg/LED.idl
// generated code does not contain a copyright notice
#include "mrover/msg/detail/led__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
mrover__msg__LED__init(mrover__msg__LED * msg)
{
  if (!msg) {
    return false;
  }
  // red
  // green
  // blue
  // is_blinking
  return true;
}

void
mrover__msg__LED__fini(mrover__msg__LED * msg)
{
  if (!msg) {
    return;
  }
  // red
  // green
  // blue
  // is_blinking
}

bool
mrover__msg__LED__are_equal(const mrover__msg__LED * lhs, const mrover__msg__LED * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // red
  if (lhs->red != rhs->red) {
    return false;
  }
  // green
  if (lhs->green != rhs->green) {
    return false;
  }
  // blue
  if (lhs->blue != rhs->blue) {
    return false;
  }
  // is_blinking
  if (lhs->is_blinking != rhs->is_blinking) {
    return false;
  }
  return true;
}

bool
mrover__msg__LED__copy(
  const mrover__msg__LED * input,
  mrover__msg__LED * output)
{
  if (!input || !output) {
    return false;
  }
  // red
  output->red = input->red;
  // green
  output->green = input->green;
  // blue
  output->blue = input->blue;
  // is_blinking
  output->is_blinking = input->is_blinking;
  return true;
}

mrover__msg__LED *
mrover__msg__LED__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrover__msg__LED * msg = (mrover__msg__LED *)allocator.allocate(sizeof(mrover__msg__LED), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mrover__msg__LED));
  bool success = mrover__msg__LED__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mrover__msg__LED__destroy(mrover__msg__LED * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mrover__msg__LED__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mrover__msg__LED__Sequence__init(mrover__msg__LED__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrover__msg__LED * data = NULL;

  if (size) {
    data = (mrover__msg__LED *)allocator.zero_allocate(size, sizeof(mrover__msg__LED), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mrover__msg__LED__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mrover__msg__LED__fini(&data[i - 1]);
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
mrover__msg__LED__Sequence__fini(mrover__msg__LED__Sequence * array)
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
      mrover__msg__LED__fini(&array->data[i]);
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

mrover__msg__LED__Sequence *
mrover__msg__LED__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrover__msg__LED__Sequence * array = (mrover__msg__LED__Sequence *)allocator.allocate(sizeof(mrover__msg__LED__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mrover__msg__LED__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mrover__msg__LED__Sequence__destroy(mrover__msg__LED__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mrover__msg__LED__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mrover__msg__LED__Sequence__are_equal(const mrover__msg__LED__Sequence * lhs, const mrover__msg__LED__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mrover__msg__LED__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mrover__msg__LED__Sequence__copy(
  const mrover__msg__LED__Sequence * input,
  mrover__msg__LED__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mrover__msg__LED);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mrover__msg__LED * data =
      (mrover__msg__LED *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mrover__msg__LED__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mrover__msg__LED__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mrover__msg__LED__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
