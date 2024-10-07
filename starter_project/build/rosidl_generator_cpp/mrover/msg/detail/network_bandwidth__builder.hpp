// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mrover:msg/NetworkBandwidth.idl
// generated code does not contain a copyright notice

#ifndef MROVER__MSG__DETAIL__NETWORK_BANDWIDTH__BUILDER_HPP_
#define MROVER__MSG__DETAIL__NETWORK_BANDWIDTH__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mrover/msg/detail/network_bandwidth__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mrover
{

namespace msg
{

namespace builder
{

class Init_NetworkBandwidth_rx
{
public:
  explicit Init_NetworkBandwidth_rx(::mrover::msg::NetworkBandwidth & msg)
  : msg_(msg)
  {}
  ::mrover::msg::NetworkBandwidth rx(::mrover::msg::NetworkBandwidth::_rx_type arg)
  {
    msg_.rx = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mrover::msg::NetworkBandwidth msg_;
};

class Init_NetworkBandwidth_tx
{
public:
  Init_NetworkBandwidth_tx()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NetworkBandwidth_rx tx(::mrover::msg::NetworkBandwidth::_tx_type arg)
  {
    msg_.tx = std::move(arg);
    return Init_NetworkBandwidth_rx(msg_);
  }

private:
  ::mrover::msg::NetworkBandwidth msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mrover::msg::NetworkBandwidth>()
{
  return mrover::msg::builder::Init_NetworkBandwidth_tx();
}

}  // namespace mrover

#endif  // MROVER__MSG__DETAIL__NETWORK_BANDWIDTH__BUILDER_HPP_
