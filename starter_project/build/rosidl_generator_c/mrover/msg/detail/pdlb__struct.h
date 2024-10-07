// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mrover:msg/PDLB.idl
// generated code does not contain a copyright notice

#ifndef MROVER__MSG__DETAIL__PDLB__STRUCT_H_
#define MROVER__MSG__DETAIL__PDLB__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/PDLB in the package mrover.
typedef struct mrover__msg__PDLB
{
  /// Celsius. 0 is for 24V buck, 1-3 are for the 12V bucks, 4 is for 5V, 5 is for 3.3V.
  float temperatures[6];
  /// Amperes
  float currents[6];
} mrover__msg__PDLB;

// Struct for a sequence of mrover__msg__PDLB.
typedef struct mrover__msg__PDLB__Sequence
{
  mrover__msg__PDLB * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mrover__msg__PDLB__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MROVER__MSG__DETAIL__PDLB__STRUCT_H_
