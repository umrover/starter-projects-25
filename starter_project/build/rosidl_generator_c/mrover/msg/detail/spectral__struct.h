// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mrover:msg/Spectral.idl
// generated code does not contain a copyright notice

#ifndef MROVER__MSG__DETAIL__SPECTRAL__STRUCT_H_
#define MROVER__MSG__DETAIL__SPECTRAL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Spectral in the package mrover.
typedef struct mrover__msg__Spectral
{
  uint8_t site;
  float data[6];
  bool error;
} mrover__msg__Spectral;

// Struct for a sequence of mrover__msg__Spectral.
typedef struct mrover__msg__Spectral__Sequence
{
  mrover__msg__Spectral * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mrover__msg__Spectral__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MROVER__MSG__DETAIL__SPECTRAL__STRUCT_H_
