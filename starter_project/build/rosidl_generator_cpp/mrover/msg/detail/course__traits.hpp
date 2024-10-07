// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mrover:msg/Course.idl
// generated code does not contain a copyright notice

#ifndef MROVER__MSG__DETAIL__COURSE__TRAITS_HPP_
#define MROVER__MSG__DETAIL__COURSE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mrover/msg/detail/course__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'waypoints'
#include "mrover/msg/detail/waypoint__traits.hpp"

namespace mrover
{

namespace msg
{

inline void to_flow_style_yaml(
  const Course & msg,
  std::ostream & out)
{
  out << "{";
  // member: waypoints
  {
    if (msg.waypoints.size() == 0) {
      out << "waypoints: []";
    } else {
      out << "waypoints: [";
      size_t pending_items = msg.waypoints.size();
      for (auto item : msg.waypoints) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Course & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: waypoints
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.waypoints.size() == 0) {
      out << "waypoints: []\n";
    } else {
      out << "waypoints:\n";
      for (auto item : msg.waypoints) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Course & msg, bool use_flow_style = false)
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
  const mrover::msg::Course & msg,
  std::ostream & out, size_t indentation = 0)
{
  mrover::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mrover::msg::to_yaml() instead")]]
inline std::string to_yaml(const mrover::msg::Course & msg)
{
  return mrover::msg::to_yaml(msg);
}

template<>
inline const char * data_type<mrover::msg::Course>()
{
  return "mrover::msg::Course";
}

template<>
inline const char * name<mrover::msg::Course>()
{
  return "mrover/msg/Course";
}

template<>
struct has_fixed_size<mrover::msg::Course>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<mrover::msg::Course>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<mrover::msg::Course>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MROVER__MSG__DETAIL__COURSE__TRAITS_HPP_
