// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mrover:msg/Course.idl
// generated code does not contain a copyright notice

#ifndef MROVER__MSG__DETAIL__COURSE__STRUCT_H_
#define MROVER__MSG__DETAIL__COURSE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'waypoints'
#include "mrover/msg/detail/waypoint__struct.h"

/// Struct defined in msg/Course in the package mrover.
typedef struct mrover__msg__Course
{
  mrover__msg__Waypoint__Sequence waypoints;
} mrover__msg__Course;

// Struct for a sequence of mrover__msg__Course.
typedef struct mrover__msg__Course__Sequence
{
  mrover__msg__Course * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mrover__msg__Course__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MROVER__MSG__DETAIL__COURSE__STRUCT_H_
