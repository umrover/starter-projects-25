// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mrover:msg/RTKStatus.idl
// generated code does not contain a copyright notice

#ifndef MROVER__MSG__DETAIL__RTK_STATUS__STRUCT_H_
#define MROVER__MSG__DETAIL__RTK_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'NO_RTK'.
enum
{
  mrover__msg__RTKStatus__NO_RTK = 0
};

/// Constant 'FLOATING_RTK'.
enum
{
  mrover__msg__RTKStatus__FLOATING_RTK = 1
};

/// Constant 'RTK_FIX'.
enum
{
  mrover__msg__RTKStatus__RTK_FIX = 2
};

/// Struct defined in msg/RTKStatus in the package mrover.
typedef struct mrover__msg__RTKStatus
{
  uint8_t fix_type;
} mrover__msg__RTKStatus;

// Struct for a sequence of mrover__msg__RTKStatus.
typedef struct mrover__msg__RTKStatus__Sequence
{
  mrover__msg__RTKStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mrover__msg__RTKStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MROVER__MSG__DETAIL__RTK_STATUS__STRUCT_H_
