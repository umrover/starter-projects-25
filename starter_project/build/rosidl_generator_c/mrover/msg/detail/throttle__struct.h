// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mrover:msg/Throttle.idl
// generated code does not contain a copyright notice

#ifndef MROVER__MSG__DETAIL__THROTTLE__STRUCT_H_
#define MROVER__MSG__DETAIL__THROTTLE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'names'
#include "rosidl_runtime_c/string.h"
// Member 'throttles'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/Throttle in the package mrover.
typedef struct mrover__msg__Throttle
{
  /// names of joints
  rosidl_runtime_c__String__Sequence names;
  /// throttle should be [-1.0, 1.0] for the joints
  rosidl_runtime_c__float__Sequence throttles;
} mrover__msg__Throttle;

// Struct for a sequence of mrover__msg__Throttle.
typedef struct mrover__msg__Throttle__Sequence
{
  mrover__msg__Throttle * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mrover__msg__Throttle__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MROVER__MSG__DETAIL__THROTTLE__STRUCT_H_
