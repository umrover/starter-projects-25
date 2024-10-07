// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mrover:msg/Waypoint.idl
// generated code does not contain a copyright notice

#ifndef MROVER__MSG__DETAIL__WAYPOINT__STRUCT_H_
#define MROVER__MSG__DETAIL__WAYPOINT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'type'
#include "mrover/msg/detail/waypoint_type__struct.h"

/// Struct defined in msg/Waypoint in the package mrover.
typedef struct mrover__msg__Waypoint
{
  uint8_t tag_id;
  mrover__msg__WaypointType type;
} mrover__msg__Waypoint;

// Struct for a sequence of mrover__msg__Waypoint.
typedef struct mrover__msg__Waypoint__Sequence
{
  mrover__msg__Waypoint * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mrover__msg__Waypoint__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MROVER__MSG__DETAIL__WAYPOINT__STRUCT_H_
