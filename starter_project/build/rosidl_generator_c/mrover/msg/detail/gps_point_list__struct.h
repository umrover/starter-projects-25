// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mrover:msg/GPSPointList.idl
// generated code does not contain a copyright notice

#ifndef MROVER__MSG__DETAIL__GPS_POINT_LIST__STRUCT_H_
#define MROVER__MSG__DETAIL__GPS_POINT_LIST__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'points'
#include "mrover/msg/detail/gps_waypoint__struct.h"

/// Struct defined in msg/GPSPointList in the package mrover.
typedef struct mrover__msg__GPSPointList
{
  mrover__msg__GPSWaypoint__Sequence points;
} mrover__msg__GPSPointList;

// Struct for a sequence of mrover__msg__GPSPointList.
typedef struct mrover__msg__GPSPointList__Sequence
{
  mrover__msg__GPSPointList * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mrover__msg__GPSPointList__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MROVER__MSG__DETAIL__GPS_POINT_LIST__STRUCT_H_
