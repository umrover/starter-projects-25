// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mrover:msg/Spectral.idl
// generated code does not contain a copyright notice

#ifndef MROVER__MSG__DETAIL__SPECTRAL__TRAITS_HPP_
#define MROVER__MSG__DETAIL__SPECTRAL__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mrover/msg/detail/spectral__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace mrover
{

namespace msg
{

inline void to_flow_style_yaml(
  const Spectral & msg,
  std::ostream & out)
{
  out << "{";
  // member: site
  {
    out << "site: ";
    rosidl_generator_traits::value_to_yaml(msg.site, out);
    out << ", ";
  }

  // member: data
  {
    if (msg.data.size() == 0) {
      out << "data: []";
    } else {
      out << "data: [";
      size_t pending_items = msg.data.size();
      for (auto item : msg.data) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: error
  {
    out << "error: ";
    rosidl_generator_traits::value_to_yaml(msg.error, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Spectral & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: site
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "site: ";
    rosidl_generator_traits::value_to_yaml(msg.site, out);
    out << "\n";
  }

  // member: data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.data.size() == 0) {
      out << "data: []\n";
    } else {
      out << "data:\n";
      for (auto item : msg.data) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "error: ";
    rosidl_generator_traits::value_to_yaml(msg.error, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Spectral & msg, bool use_flow_style = false)
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
  const mrover::msg::Spectral & msg,
  std::ostream & out, size_t indentation = 0)
{
  mrover::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mrover::msg::to_yaml() instead")]]
inline std::string to_yaml(const mrover::msg::Spectral & msg)
{
  return mrover::msg::to_yaml(msg);
}

template<>
inline const char * data_type<mrover::msg::Spectral>()
{
  return "mrover::msg::Spectral";
}

template<>
inline const char * name<mrover::msg::Spectral>()
{
  return "mrover/msg/Spectral";
}

template<>
struct has_fixed_size<mrover::msg::Spectral>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<mrover::msg::Spectral>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<mrover::msg::Spectral>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MROVER__MSG__DETAIL__SPECTRAL__TRAITS_HPP_
