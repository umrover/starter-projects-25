// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mrover:msg/StateMachineStateUpdate.idl
// generated code does not contain a copyright notice

#ifndef MROVER__MSG__DETAIL__STATE_MACHINE_STATE_UPDATE__STRUCT_H_
#define MROVER__MSG__DETAIL__STATE_MACHINE_STATE_UPDATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'state_machine_name'
// Member 'state'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/StateMachineStateUpdate in the package mrover.
typedef struct mrover__msg__StateMachineStateUpdate
{
  rosidl_runtime_c__String state_machine_name;
  rosidl_runtime_c__String state;
} mrover__msg__StateMachineStateUpdate;

// Struct for a sequence of mrover__msg__StateMachineStateUpdate.
typedef struct mrover__msg__StateMachineStateUpdate__Sequence
{
  mrover__msg__StateMachineStateUpdate * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mrover__msg__StateMachineStateUpdate__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MROVER__MSG__DETAIL__STATE_MACHINE_STATE_UPDATE__STRUCT_H_
