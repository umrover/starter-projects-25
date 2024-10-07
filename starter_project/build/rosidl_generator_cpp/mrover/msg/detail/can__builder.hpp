// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mrover:msg/CAN.idl
// generated code does not contain a copyright notice

#ifndef MROVER__MSG__DETAIL__CAN__BUILDER_HPP_
#define MROVER__MSG__DETAIL__CAN__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mrover/msg/detail/can__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mrover
{

namespace msg
{

namespace builder
{

class Init_CAN_reply_required
{
public:
  explicit Init_CAN_reply_required(::mrover::msg::CAN & msg)
  : msg_(msg)
  {}
  ::mrover::msg::CAN reply_required(::mrover::msg::CAN::_reply_required_type arg)
  {
    msg_.reply_required = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mrover::msg::CAN msg_;
};

class Init_CAN_data
{
public:
  explicit Init_CAN_data(::mrover::msg::CAN & msg)
  : msg_(msg)
  {}
  Init_CAN_reply_required data(::mrover::msg::CAN::_data_type arg)
  {
    msg_.data = std::move(arg);
    return Init_CAN_reply_required(msg_);
  }

private:
  ::mrover::msg::CAN msg_;
};

class Init_CAN_destination
{
public:
  explicit Init_CAN_destination(::mrover::msg::CAN & msg)
  : msg_(msg)
  {}
  Init_CAN_data destination(::mrover::msg::CAN::_destination_type arg)
  {
    msg_.destination = std::move(arg);
    return Init_CAN_data(msg_);
  }

private:
  ::mrover::msg::CAN msg_;
};

class Init_CAN_source
{
public:
  Init_CAN_source()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CAN_destination source(::mrover::msg::CAN::_source_type arg)
  {
    msg_.source = std::move(arg);
    return Init_CAN_destination(msg_);
  }

private:
  ::mrover::msg::CAN msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mrover::msg::CAN>()
{
  return mrover::msg::builder::Init_CAN_source();
}

}  // namespace mrover

#endif  // MROVER__MSG__DETAIL__CAN__BUILDER_HPP_
