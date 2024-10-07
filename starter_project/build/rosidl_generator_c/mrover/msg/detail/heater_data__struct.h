// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mrover:msg/HeaterData.idl
// generated code does not contain a copyright notice

#ifndef MROVER__MSG__DETAIL__HEATER_DATA__STRUCT_H_
#define MROVER__MSG__DETAIL__HEATER_DATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'state'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/HeaterData in the package mrover.
typedef struct mrover__msg__HeaterData
{
  rosidl_runtime_c__boolean__Sequence state;
} mrover__msg__HeaterData;

// Struct for a sequence of mrover__msg__HeaterData.
typedef struct mrover__msg__HeaterData__Sequence
{
  mrover__msg__HeaterData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mrover__msg__HeaterData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MROVER__MSG__DETAIL__HEATER_DATA__STRUCT_H_
