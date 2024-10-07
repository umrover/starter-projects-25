// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mrover:msg/StateMachineStructure.idl
// generated code does not contain a copyright notice

#ifndef MROVER__MSG__DETAIL__STATE_MACHINE_STRUCTURE__STRUCT_H_
#define MROVER__MSG__DETAIL__STATE_MACHINE_STRUCTURE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'machine_name'
#include "rosidl_runtime_c/string.h"
// Member 'transitions'
#include "mrover/msg/detail/state_machine_transition__struct.h"

/// Struct defined in msg/StateMachineStructure in the package mrover.
typedef struct mrover__msg__StateMachineStructure
{
  rosidl_runtime_c__String machine_name;
  mrover__msg__StateMachineTransition__Sequence transitions;
} mrover__msg__StateMachineStructure;

// Struct for a sequence of mrover__msg__StateMachineStructure.
typedef struct mrover__msg__StateMachineStructure__Sequence
{
  mrover__msg__StateMachineStructure * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mrover__msg__StateMachineStructure__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MROVER__MSG__DETAIL__STATE_MACHINE_STRUCTURE__STRUCT_H_
