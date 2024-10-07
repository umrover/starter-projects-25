// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mrover:msg/Velocity.idl
// generated code does not contain a copyright notice

#ifndef MROVER__MSG__DETAIL__VELOCITY__STRUCT_H_
#define MROVER__MSG__DETAIL__VELOCITY__STRUCT_H_

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
// Member 'velocities'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/Velocity in the package mrover.
typedef struct mrover__msg__Velocity
{
  /// names of joints
  rosidl_runtime_c__String__Sequence names;
  /// velocity should be in rad/s for joints
  rosidl_runtime_c__float__Sequence velocities;
} mrover__msg__Velocity;

// Struct for a sequence of mrover__msg__Velocity.
typedef struct mrover__msg__Velocity__Sequence
{
  mrover__msg__Velocity * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mrover__msg__Velocity__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MROVER__MSG__DETAIL__VELOCITY__STRUCT_H_
