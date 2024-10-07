// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mrover:msg/IK.idl
// generated code does not contain a copyright notice

#ifndef MROVER__MSG__DETAIL__IK__STRUCT_H_
#define MROVER__MSG__DETAIL__IK__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'target'
#include "geometry_msgs/msg/detail/pose_stamped__struct.h"

/// Struct defined in msg/IK in the package mrover.
typedef struct mrover__msg__IK
{
  geometry_msgs__msg__PoseStamped target;
} mrover__msg__IK;

// Struct for a sequence of mrover__msg__IK.
typedef struct mrover__msg__IK__Sequence
{
  mrover__msg__IK * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mrover__msg__IK__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MROVER__MSG__DETAIL__IK__STRUCT_H_
