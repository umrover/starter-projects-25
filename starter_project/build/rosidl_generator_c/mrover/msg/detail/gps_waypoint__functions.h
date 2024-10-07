// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from mrover:msg/GPSWaypoint.idl
// generated code does not contain a copyright notice

#ifndef MROVER__MSG__DETAIL__GPS_WAYPOINT__FUNCTIONS_H_
#define MROVER__MSG__DETAIL__GPS_WAYPOINT__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "mrover/msg/rosidl_generator_c__visibility_control.h"

#include "mrover/msg/detail/gps_waypoint__struct.h"

/// Initialize msg/GPSWaypoint message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * mrover__msg__GPSWaypoint
 * )) before or use
 * mrover__msg__GPSWaypoint__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_mrover
bool
mrover__msg__GPSWaypoint__init(mrover__msg__GPSWaypoint * msg);

/// Finalize msg/GPSWaypoint message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mrover
void
mrover__msg__GPSWaypoint__fini(mrover__msg__GPSWaypoint * msg);

/// Create msg/GPSWaypoint message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * mrover__msg__GPSWaypoint__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_mrover
mrover__msg__GPSWaypoint *
mrover__msg__GPSWaypoint__create();

/// Destroy msg/GPSWaypoint message.
/**
 * It calls
 * mrover__msg__GPSWaypoint__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mrover
void
mrover__msg__GPSWaypoint__destroy(mrover__msg__GPSWaypoint * msg);

/// Check for msg/GPSWaypoint message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_mrover
bool
mrover__msg__GPSWaypoint__are_equal(const mrover__msg__GPSWaypoint * lhs, const mrover__msg__GPSWaypoint * rhs);

/// Copy a msg/GPSWaypoint message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_mrover
bool
mrover__msg__GPSWaypoint__copy(
  const mrover__msg__GPSWaypoint * input,
  mrover__msg__GPSWaypoint * output);

/// Initialize array of msg/GPSWaypoint messages.
/**
 * It allocates the memory for the number of elements and calls
 * mrover__msg__GPSWaypoint__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_mrover
bool
mrover__msg__GPSWaypoint__Sequence__init(mrover__msg__GPSWaypoint__Sequence * array, size_t size);

/// Finalize array of msg/GPSWaypoint messages.
/**
 * It calls
 * mrover__msg__GPSWaypoint__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mrover
void
mrover__msg__GPSWaypoint__Sequence__fini(mrover__msg__GPSWaypoint__Sequence * array);

/// Create array of msg/GPSWaypoint messages.
/**
 * It allocates the memory for the array and calls
 * mrover__msg__GPSWaypoint__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_mrover
mrover__msg__GPSWaypoint__Sequence *
mrover__msg__GPSWaypoint__Sequence__create(size_t size);

/// Destroy array of msg/GPSWaypoint messages.
/**
 * It calls
 * mrover__msg__GPSWaypoint__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mrover
void
mrover__msg__GPSWaypoint__Sequence__destroy(mrover__msg__GPSWaypoint__Sequence * array);

/// Check for msg/GPSWaypoint message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_mrover
bool
mrover__msg__GPSWaypoint__Sequence__are_equal(const mrover__msg__GPSWaypoint__Sequence * lhs, const mrover__msg__GPSWaypoint__Sequence * rhs);

/// Copy an array of msg/GPSWaypoint messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_mrover
bool
mrover__msg__GPSWaypoint__Sequence__copy(
  const mrover__msg__GPSWaypoint__Sequence * input,
  mrover__msg__GPSWaypoint__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // MROVER__MSG__DETAIL__GPS_WAYPOINT__FUNCTIONS_H_
