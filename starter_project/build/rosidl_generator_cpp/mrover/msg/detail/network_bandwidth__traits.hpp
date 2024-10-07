// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mrover:msg/NetworkBandwidth.idl
// generated code does not contain a copyright notice

#ifndef MROVER__MSG__DETAIL__NETWORK_BANDWIDTH__TRAITS_HPP_
#define MROVER__MSG__DETAIL__NETWORK_BANDWIDTH__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mrover/msg/detail/network_bandwidth__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace mrover
{

namespace msg
{

inline void to_flow_style_yaml(
  const NetworkBandwidth & msg,
  std::ostream & out)
{
  out << "{";
  // member: tx
  {
    out << "tx: ";
    rosidl_generator_traits::value_to_yaml(msg.tx, out);
    out << ", ";
  }

  // member: rx
  {
    out << "rx: ";
    rosidl_generator_traits::value_to_yaml(msg.rx, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const NetworkBandwidth & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: tx
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tx: ";
    rosidl_generator_traits::value_to_yaml(msg.tx, out);
    out << "\n";
  }

  // member: rx
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rx: ";
    rosidl_generator_traits::value_to_yaml(msg.rx, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const NetworkBandwidth & msg, bool use_flow_style = false)
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
  const mrover::msg::NetworkBandwidth & msg,
  std::ostream & out, size_t indentation = 0)
{
  mrover::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mrover::msg::to_yaml() instead")]]
inline std::string to_yaml(const mrover::msg::NetworkBandwidth & msg)
{
  return mrover::msg::to_yaml(msg);
}

template<>
inline const char * data_type<mrover::msg::NetworkBandwidth>()
{
  return "mrover::msg::NetworkBandwidth";
}

template<>
inline const char * name<mrover::msg::NetworkBandwidth>()
{
  return "mrover/msg/NetworkBandwidth";
}

template<>
struct has_fixed_size<mrover::msg::NetworkBandwidth>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<mrover::msg::NetworkBandwidth>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<mrover::msg::NetworkBandwidth>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MROVER__MSG__DETAIL__NETWORK_BANDWIDTH__TRAITS_HPP_
