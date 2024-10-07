// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mrover:srv/EnableAuton.idl
// generated code does not contain a copyright notice

#ifndef MROVER__SRV__DETAIL__ENABLE_AUTON__STRUCT_H_
#define MROVER__SRV__DETAIL__ENABLE_AUTON__STRUCT_H_

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
#include "mrover/msg/detail/gps_waypoint__struct.h"

/// Struct defined in srv/EnableAuton in the package mrover.
typedef struct mrover__srv__EnableAuton_Request
{
  bool enable;
  mrover__msg__GPSWaypoint__Sequence waypoints;
} mrover__srv__EnableAuton_Request;

// Struct for a sequence of mrover__srv__EnableAuton_Request.
typedef struct mrover__srv__EnableAuton_Request__Sequence
{
  mrover__srv__EnableAuton_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mrover__srv__EnableAuton_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/EnableAuton in the package mrover.
typedef struct mrover__srv__EnableAuton_Response
{
  bool success;
} mrover__srv__EnableAuton_Response;

// Struct for a sequence of mrover__srv__EnableAuton_Response.
typedef struct mrover__srv__EnableAuton_Response__Sequence
{
  mrover__srv__EnableAuton_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mrover__srv__EnableAuton_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MROVER__SRV__DETAIL__ENABLE_AUTON__STRUCT_H_
