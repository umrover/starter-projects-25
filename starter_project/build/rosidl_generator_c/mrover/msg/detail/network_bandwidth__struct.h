// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mrover:msg/NetworkBandwidth.idl
// generated code does not contain a copyright notice

#ifndef MROVER__MSG__DETAIL__NETWORK_BANDWIDTH__STRUCT_H_
#define MROVER__MSG__DETAIL__NETWORK_BANDWIDTH__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/NetworkBandwidth in the package mrover.
typedef struct mrover__msg__NetworkBandwidth
{
  /// MBps
  double tx;
  /// MBps
  double rx;
} mrover__msg__NetworkBandwidth;

// Struct for a sequence of mrover__msg__NetworkBandwidth.
typedef struct mrover__msg__NetworkBandwidth__Sequence
{
  mrover__msg__NetworkBandwidth * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mrover__msg__NetworkBandwidth__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MROVER__MSG__DETAIL__NETWORK_BANDWIDTH__STRUCT_H_
