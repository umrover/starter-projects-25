// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mrover:msg/CalibrationStatus.idl
// generated code does not contain a copyright notice

#ifndef MROVER__MSG__DETAIL__CALIBRATION_STATUS__TRAITS_HPP_
#define MROVER__MSG__DETAIL__CALIBRATION_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mrover/msg/detail/calibration_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace mrover
{

namespace msg
{

inline void to_flow_style_yaml(
  const CalibrationStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: magnetometer_calibration
  {
    out << "magnetometer_calibration: ";
    rosidl_generator_traits::value_to_yaml(msg.magnetometer_calibration, out);
    out << ", ";
  }

  // member: gyroscope_calibration
  {
    out << "gyroscope_calibration: ";
    rosidl_generator_traits::value_to_yaml(msg.gyroscope_calibration, out);
    out << ", ";
  }

  // member: acceleration_calibration
  {
    out << "acceleration_calibration: ";
    rosidl_generator_traits::value_to_yaml(msg.acceleration_calibration, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CalibrationStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: magnetometer_calibration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "magnetometer_calibration: ";
    rosidl_generator_traits::value_to_yaml(msg.magnetometer_calibration, out);
    out << "\n";
  }

  // member: gyroscope_calibration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gyroscope_calibration: ";
    rosidl_generator_traits::value_to_yaml(msg.gyroscope_calibration, out);
    out << "\n";
  }

  // member: acceleration_calibration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "acceleration_calibration: ";
    rosidl_generator_traits::value_to_yaml(msg.acceleration_calibration, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CalibrationStatus & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace mrover

namespace rosidl_generator_traits
{

[[deprecated("use mrover::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const mrover::msg::CalibrationStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  mrover::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mrover::msg::to_yaml() instead")]]
inline std::string to_yaml(const mrover::msg::CalibrationStatus & msg)
{
  return mrover::msg::to_yaml(msg);
}

template<>
inline const char * data_type<mrover::msg::CalibrationStatus>()
{
  return "mrover::msg::CalibrationStatus";
}

template<>
inline const char * name<mrover::msg::CalibrationStatus>()
{
  return "mrover/msg/CalibrationStatus";
}

template<>
struct has_fixed_size<mrover::msg::CalibrationStatus>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<mrover::msg::CalibrationStatus>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<mrover::msg::CalibrationStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MROVER__MSG__DETAIL__CALIBRATION_STATUS__TRAITS_HPP_
