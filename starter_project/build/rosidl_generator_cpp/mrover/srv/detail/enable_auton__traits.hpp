// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mrover:srv/EnableAuton.idl
// generated code does not contain a copyright notice

#ifndef MROVER__SRV__DETAIL__ENABLE_AUTON__TRAITS_HPP_
#define MROVER__SRV__DETAIL__ENABLE_AUTON__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mrover/srv/detail/enable_auton__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'waypoints'
#include "mrover/msg/detail/gps_waypoint__traits.hpp"

namespace mrover
{

namespace srv
{

inline void to_flow_style_yaml(
  const EnableAuton_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: enable
  {
    out << "enable: ";
    rosidl_generator_traits::value_to_yaml(msg.enable, out);
    out << ", ";
  }

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
  const EnableAuton_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: enable
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "enable: ";
    rosidl_generator_traits::value_to_yaml(msg.enable, out);
    out << "\n";
  }

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

inline std::string to_yaml(const EnableAuton_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace mrover

namespace rosidl_generator_traits
{

[[deprecated("use mrover::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const mrover::srv::EnableAuton_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  mrover::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mrover::srv::to_yaml() instead")]]
inline std::string to_yaml(const mrover::srv::EnableAuton_Request & msg)
{
  return mrover::srv::to_yaml(msg);
}

template<>
inline const char * data_type<mrover::srv::EnableAuton_Request>()
{
  return "mrover::srv::EnableAuton_Request";
}

template<>
inline const char * name<mrover::srv::EnableAuton_Request>()
{
  return "mrover/srv/EnableAuton_Request";
}

template<>
struct has_fixed_size<mrover::srv::EnableAuton_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<mrover::srv::EnableAuton_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<mrover::srv::EnableAuton_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace mrover
{

namespace srv
{

inline void to_flow_style_yaml(
  const EnableAuton_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const EnableAuton_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const EnableAuton_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace mrover

namespace rosidl_generator_traits
{

[[deprecated("use mrover::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const mrover::srv::EnableAuton_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  mrover::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mrover::srv::to_yaml() instead")]]
inline std::string to_yaml(const mrover::srv::EnableAuton_Response & msg)
{
  return mrover::srv::to_yaml(msg);
}

template<>
inline const char * data_type<mrover::srv::EnableAuton_Response>()
{
  return "mrover::srv::EnableAuton_Response";
}

template<>
inline const char * name<mrover::srv::EnableAuton_Response>()
{
  return "mrover/srv/EnableAuton_Response";
}

template<>
struct has_fixed_size<mrover::srv::EnableAuton_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<mrover::srv::EnableAuton_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<mrover::srv::EnableAuton_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<mrover::srv::EnableAuton>()
{
  return "mrover::srv::EnableAuton";
}

template<>
inline const char * name<mrover::srv::EnableAuton>()
{
  return "mrover/srv/EnableAuton";
}

template<>
struct has_fixed_size<mrover::srv::EnableAuton>
  : std::integral_constant<
    bool,
    has_fixed_size<mrover::srv::EnableAuton_Request>::value &&
    has_fixed_size<mrover::srv::EnableAuton_Response>::value
  >
{
};

template<>
struct has_bounded_size<mrover::srv::EnableAuton>
  : std::integral_constant<
    bool,
    has_bounded_size<mrover::srv::EnableAuton_Request>::value &&
    has_bounded_size<mrover::srv::EnableAuton_Response>::value
  >
{
};

template<>
struct is_service<mrover::srv::EnableAuton>
  : std::true_type
{
};

template<>
struct is_service_request<mrover::srv::EnableAuton_Request>
  : std::true_type
{
};

template<>
struct is_service_response<mrover::srv::EnableAuton_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // MROVER__SRV__DETAIL__ENABLE_AUTON__TRAITS_HPP_
