// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mrover:msg/ControllerState.idl
// generated code does not contain a copyright notice

#ifndef MROVER__MSG__DETAIL__CONTROLLER_STATE__STRUCT_H_
#define MROVER__MSG__DETAIL__CONTROLLER_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'name'
// Member 'state'
// Member 'error'
#include "rosidl_runtime_c/string.h"
// Member 'limit_hit'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/ControllerState in the package mrover.
typedef struct mrover__msg__ControllerState
{
  rosidl_runtime_c__String__Sequence name;
  /// Armed, Disconnected, or Error
  rosidl_runtime_c__String__Sequence state;
  rosidl_runtime_c__String__Sequence error;
  /// 0,1,2,3 bits represent states
  rosidl_runtime_c__uint8__Sequence limit_hit;
} mrover__msg__ControllerState;

// Struct for a sequence of mrover__msg__ControllerState.
typedef struct mrover__msg__ControllerState__Sequence
{
  mrover__msg__ControllerState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mrover__msg__ControllerState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MROVER__MSG__DETAIL__CONTROLLER_STATE__STRUCT_H_
