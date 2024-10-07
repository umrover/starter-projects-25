// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mrover:msg/WaypointType.idl
// generated code does not contain a copyright notice

#ifndef MROVER__MSG__DETAIL__WAYPOINT_TYPE__TRAITS_HPP_
#define MROVER__MSG__DETAIL__WAYPOINT_TYPE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mrover/msg/detail/waypoint_type__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace mrover
{

namespace msg
{

inline void to_flow_style_yaml(
  const WaypointType & msg,
  std::ostream & out)
{
  out << "{";
  // member: val
  {
    out << "val: ";
    rosidl_generator_traits::value_to_yaml(msg.val, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const WaypointType & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: val
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "val: ";
    rosidl_generator_traits::value_to_yaml(msg.val, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const WaypointType & msg, bool use_flow_style = false)
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
  const mrover::msg::WaypointType & msg,
  std::ostream & out, size_t indentation = 0)
{
  mrover::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mrover::msg::to_yaml() instead")]]
inline std::string to_yaml(const mrover::msg::WaypointType & msg)
{
  return mrover::msg::to_yaml(msg);
}

template<>
inline const char * data_type<mrover::msg::WaypointType>()
{
  return "mrover::msg::WaypointType";
}

template<>
inline const char * name<mrover::msg::WaypointType>()
{
  return "mrover/msg/WaypointType";
}

template<>
struct has_fixed_size<mrover::msg::WaypointType>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<mrover::msg::WaypointType>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<mrover::msg::WaypointType>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MROVER__MSG__DETAIL__WAYPOINT_TYPE__TRAITS_HPP_
