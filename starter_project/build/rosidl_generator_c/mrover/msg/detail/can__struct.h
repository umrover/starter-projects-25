// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mrover:msg/CAN.idl
// generated code does not contain a copyright notice

#ifndef MROVER__MSG__DETAIL__CAN__STRUCT_H_
#define MROVER__MSG__DETAIL__CAN__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'source'
// Member 'destination'
#include "rosidl_runtime_c/string.h"
// Member 'data'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/CAN in the package mrover.
typedef struct mrover__msg__CAN
{
  rosidl_runtime_c__String source;
  rosidl_runtime_c__String destination;
  rosidl_runtime_c__uint8__Sequence data;
  bool reply_required;
} mrover__msg__CAN;

// Struct for a sequence of mrover__msg__CAN.
typedef struct mrover__msg__CAN__Sequence
{
  mrover__msg__CAN * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mrover__msg__CAN__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MROVER__MSG__DETAIL__CAN__STRUCT_H_
