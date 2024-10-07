// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mrover:msg/GPSWaypoint.idl
// generated code does not contain a copyright notice

#ifndef MROVER__MSG__DETAIL__GPS_WAYPOINT__STRUCT_H_
#define MROVER__MSG__DETAIL__GPS_WAYPOINT__STRUCT_H_

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

/// Struct defined in msg/GPSWaypoint in the package mrover.
typedef struct mrover__msg__GPSWaypoint
{
  int8_t tag_id;
  double latitude_degrees;
  double longitude_degrees;
  mrover__msg__WaypointType type;
} mrover__msg__GPSWaypoint;

// Struct for a sequence of mrover__msg__GPSWaypoint.
typedef struct mrover__msg__GPSWaypoint__Sequence
{
  mrover__msg__GPSWaypoint * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mrover__msg__GPSWaypoint__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MROVER__MSG__DETAIL__GPS_WAYPOINT__STRUCT_H_
