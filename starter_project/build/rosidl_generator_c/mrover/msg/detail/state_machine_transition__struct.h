// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mrover:msg/StateMachineTransition.idl
// generated code does not contain a copyright notice

#ifndef MROVER__MSG__DETAIL__STATE_MACHINE_TRANSITION__STRUCT_H_
#define MROVER__MSG__DETAIL__STATE_MACHINE_TRANSITION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'origin'
// Member 'destinations'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/StateMachineTransition in the package mrover.
typedef struct mrover__msg__StateMachineTransition
{
  rosidl_runtime_c__String origin;
  rosidl_runtime_c__String__Sequence destinations;
} mrover__msg__StateMachineTransition;

// Struct for a sequence of mrover__msg__StateMachineTransition.
typedef struct mrover__msg__StateMachineTransition__Sequence
{
  mrover__msg__StateMachineTransition * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mrover__msg__StateMachineTransition__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MROVER__MSG__DETAIL__STATE_MACHINE_TRANSITION__STRUCT_H_
