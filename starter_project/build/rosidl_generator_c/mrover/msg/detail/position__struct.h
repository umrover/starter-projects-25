// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mrover:msg/Position.idl
// generated code does not contain a copyright notice

#ifndef MROVER__MSG__DETAIL__POSITION__STRUCT_H_
#define MROVER__MSG__DETAIL__POSITION__STRUCT_H_

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
// Member 'positions'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/Position in the package mrover.
typedef struct mrover__msg__Position
{
  /// names of joints
  rosidl_runtime_c__String__Sequence names;
  /// position should be in radians for the joints
  rosidl_runtime_c__float__Sequence positions;
} mrover__msg__Position;

// Struct for a sequence of mrover__msg__Position.
typedef struct mrover__msg__Position__Sequence
{
  mrover__msg__Position * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mrover__msg__Position__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MROVER__MSG__DETAIL__POSITION__STRUCT_H_
