// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mrover:msg/WaypointType.idl
// generated code does not contain a copyright notice

#ifndef MROVER__MSG__DETAIL__WAYPOINT_TYPE__STRUCT_H_
#define MROVER__MSG__DETAIL__WAYPOINT_TYPE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'NO_SEARCH'.
enum
{
  mrover__msg__WaypointType__NO_SEARCH = 0
};

/// Constant 'POST'.
enum
{
  mrover__msg__WaypointType__POST = 1
};

/// Constant 'MALLET'.
enum
{
  mrover__msg__WaypointType__MALLET = 2
};

/// Constant 'WATER_BOTTLE'.
enum
{
  mrover__msg__WaypointType__WATER_BOTTLE = 3
};

/// Struct defined in msg/WaypointType in the package mrover.
typedef struct mrover__msg__WaypointType
{
  uint8_t val;
} mrover__msg__WaypointType;

// Struct for a sequence of mrover__msg__WaypointType.
typedef struct mrover__msg__WaypointType__Sequence
{
  mrover__msg__WaypointType * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mrover__msg__WaypointType__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MROVER__MSG__DETAIL__WAYPOINT_TYPE__STRUCT_H_
