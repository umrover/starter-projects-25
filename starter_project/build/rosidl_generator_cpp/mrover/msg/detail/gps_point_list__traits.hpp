// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mrover:msg/GPSPointList.idl
// generated code does not contain a copyright notice

#ifndef MROVER__MSG__DETAIL__GPS_POINT_LIST__TRAITS_HPP_
#define MROVER__MSG__DETAIL__GPS_POINT_LIST__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mrover/msg/detail/gps_point_list__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'points'
#include "mrover/msg/detail/gps_waypoint__traits.hpp"

namespace mrover
{

namespace msg
{

inline void to_flow_style_yaml(
  const GPSPointList & msg,
  std::ostream & out)
{
  out << "{";
  // member: points
  {
    if (msg.points.size() == 0) {
      out << "points: []";
    } else {
      out << "points: [";
      size_t pending_items = msg.points.size();
      for (auto item : msg.points) {
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
  const GPSPointList & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: points
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.points.size() == 0) {
      out << "points: []\n";
    } else {
      out << "points:\n";
      for (auto item : msg.points) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GPSPointList & msg, bool use_flow_style = false)
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
  const mrover::msg::GPSPointList & msg,
  std::ostream & out, size_t indentation = 0)
{
  mrover::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mrover::msg::to_yaml() instead")]]
inline std::string to_yaml(const mrover::msg::GPSPointList & msg)
{
  return mrover::msg::to_yaml(msg);
}

template<>
inline const char * data_type<mrover::msg::GPSPointList>()
{
  return "mrover::msg::GPSPointList";
}

template<>
inline const char * name<mrover::msg::GPSPointList>()
{
  return "mrover/msg/GPSPointList";
}

template<>
struct has_fixed_size<mrover::msg::GPSPointList>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<mrover::msg::GPSPointList>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<mrover::msg::GPSPointList>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MROVER__MSG__DETAIL__GPS_POINT_LIST__TRAITS_HPP_
