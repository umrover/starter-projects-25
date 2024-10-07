// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mrover:msg/ImageTarget.idl
// generated code does not contain a copyright notice

#ifndef MROVER__MSG__DETAIL__IMAGE_TARGET__STRUCT_H_
#define MROVER__MSG__DETAIL__IMAGE_TARGET__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/ImageTarget in the package mrover.
typedef struct mrover__msg__ImageTarget
{
  rosidl_runtime_c__String name;
  /// Relative rotation around the z-axis in radians
  float bearing;
} mrover__msg__ImageTarget;

// Struct for a sequence of mrover__msg__ImageTarget.
typedef struct mrover__msg__ImageTarget__Sequence
{
  mrover__msg__ImageTarget * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mrover__msg__ImageTarget__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MROVER__MSG__DETAIL__IMAGE_TARGET__STRUCT_H_
