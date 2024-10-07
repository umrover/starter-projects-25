// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mrover:msg/CalibrationStatus.idl
// generated code does not contain a copyright notice

#ifndef MROVER__MSG__DETAIL__CALIBRATION_STATUS__STRUCT_H_
#define MROVER__MSG__DETAIL__CALIBRATION_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"

/// Struct defined in msg/CalibrationStatus in the package mrover.
typedef struct mrover__msg__CalibrationStatus
{
  std_msgs__msg__Header header;
  uint8_t magnetometer_calibration;
  uint8_t gyroscope_calibration;
  uint8_t acceleration_calibration;
} mrover__msg__CalibrationStatus;

// Struct for a sequence of mrover__msg__CalibrationStatus.
typedef struct mrover__msg__CalibrationStatus__Sequence
{
  mrover__msg__CalibrationStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mrover__msg__CalibrationStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MROVER__MSG__DETAIL__CALIBRATION_STATUS__STRUCT_H_
