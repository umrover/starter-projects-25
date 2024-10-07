// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mrover:msg/GPSWaypoint.idl
// generated code does not contain a copyright notice

#ifndef MROVER__MSG__DETAIL__GPS_WAYPOINT__TRAITS_HPP_
#define MROVER__MSG__DETAIL__GPS_WAYPOINT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mrover/msg/detail/gps_waypoint__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'type'
#include "mrover/msg/detail/waypoint_type__traits.hpp"

namespace mrover
{

namespace msg
{

inline void to_flow_style_yaml(
  const GPSWaypoint & msg,
  std::ostream & out)
{
  out << "{";
  // member: tag_id
  {
    out << "tag_id: ";
    rosidl_generator_traits::value_to_yaml(msg.tag_id, out);
    out << ", ";
  }

  // member: latitude_degrees
  {
    out << "latitude_degrees: ";
    rosidl_generator_traits::value_to_yaml(msg.latitude_degrees, out);
    out << ", ";
  }

  // member: longitude_degrees
  {
    out << "longitude_degrees: ";
    rosidl_generator_traits::value_to_yaml(msg.longitude_degrees, out);
    out << ", ";
  }

  // member: type
  {
    out << "type: ";
    to_flow_style_yaml(msg.type, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GPSWaypoint & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: tag_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tag_id: ";
    rosidl_generator_traits::value_to_yaml(msg.tag_id, out);
    out << "\n";
  }

  // member: latitude_degrees
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "latitude_degrees: ";
    rosidl_generator_traits::value_to_yaml(msg.latitude_degrees, out);
    out << "\n";
  }

  // member: longitude_degrees
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "longitude_degrees: ";
    rosidl_generator_traits::value_to_yaml(msg.longitude_degrees, out);
    out << "\n";
  }

  // member: type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "type:\n";
    to_block_style_yaml(msg.type, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GPSWaypoint & msg, bool use_flow_style = false)
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
  const mrover::msg::GPSWaypoint & msg,
  std::ostream & out, size_t indentation = 0)
{
  mrover::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mrover::msg::to_yaml() instead")]]
inline std::string to_yaml(const mrover::msg::GPSWaypoint & msg)
{
  return mrover::msg::to_yaml(msg);
}

template<>
inline const char * data_type<mrover::msg::GPSWaypoint>()
{
  return "mrover::msg::GPSWaypoint";
}

template<>
inline const char * name<mrover::msg::GPSWaypoint>()
{
  return "mrover/msg/GPSWaypoint";
}

template<>
struct has_fixed_size<mrover::msg::GPSWaypoint>
  : std::integral_constant<bool, has_fixed_size<mrover::msg::WaypointType>::value> {};

template<>
struct has_bounded_size<mrover::msg::GPSWaypoint>
  : std::integral_constant<bool, has_bounded_size<mrover::msg::WaypointType>::value> {};

template<>
struct is_message<mrover::msg::GPSWaypoint>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MROVER__MSG__DETAIL__GPS_WAYPOINT__TRAITS_HPP_
