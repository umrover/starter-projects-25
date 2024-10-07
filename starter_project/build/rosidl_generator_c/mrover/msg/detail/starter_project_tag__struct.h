// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mrover:msg/StarterProjectTag.idl
// generated code does not contain a copyright notice

#ifndef MROVER__MSG__DETAIL__STARTER_PROJECT_TAG__STRUCT_H_
#define MROVER__MSG__DETAIL__STARTER_PROJECT_TAG__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/StarterProjectTag in the package mrover.
typedef struct mrover__msg__StarterProjectTag
{
  int32_t tag_id;
  float x_tag_center_pixel;
  float y_tag_center_pixel;
  float closeness_metric;
} mrover__msg__StarterProjectTag;

// Struct for a sequence of mrover__msg__StarterProjectTag.
typedef struct mrover__msg__StarterProjectTag__Sequence
{
  mrover__msg__StarterProjectTag * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mrover__msg__StarterProjectTag__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MROVER__MSG__DETAIL__STARTER_PROJECT_TAG__STRUCT_H_
