// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mrover:msg/ScienceThermistors.idl
// generated code does not contain a copyright notice

#ifndef MROVER__MSG__DETAIL__SCIENCE_THERMISTORS__STRUCT_H_
#define MROVER__MSG__DETAIL__SCIENCE_THERMISTORS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'temps'
#include "sensor_msgs/msg/detail/temperature__struct.h"

/// Struct defined in msg/ScienceThermistors in the package mrover.
typedef struct mrover__msg__ScienceThermistors
{
  sensor_msgs__msg__Temperature__Sequence temps;
} mrover__msg__ScienceThermistors;

// Struct for a sequence of mrover__msg__ScienceThermistors.
typedef struct mrover__msg__ScienceThermistors__Sequence
{
  mrover__msg__ScienceThermistors * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mrover__msg__ScienceThermistors__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MROVER__MSG__DETAIL__SCIENCE_THERMISTORS__STRUCT_H_
