// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mrover:msg/LED.idl
// generated code does not contain a copyright notice

#ifndef MROVER__MSG__DETAIL__LED__STRUCT_H_
#define MROVER__MSG__DETAIL__LED__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/LED in the package mrover.
typedef struct mrover__msg__LED
{
  bool red;
  bool green;
  bool blue;
  bool is_blinking;
} mrover__msg__LED;

// Struct for a sequence of mrover__msg__LED.
typedef struct mrover__msg__LED__Sequence
{
  mrover__msg__LED * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mrover__msg__LED__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MROVER__MSG__DETAIL__LED__STRUCT_H_
