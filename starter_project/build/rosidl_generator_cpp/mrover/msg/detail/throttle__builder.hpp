// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mrover:msg/Throttle.idl
// generated code does not contain a copyright notice

#ifndef MROVER__MSG__DETAIL__THROTTLE__BUILDER_HPP_
#define MROVER__MSG__DETAIL__THROTTLE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mrover/msg/detail/throttle__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mrover
{

namespace msg
{

namespace builder
{

class Init_Throttle_throttles
{
public:
  explicit Init_Throttle_throttles(::mrover::msg::Throttle & msg)
  : msg_(msg)
  {}
  ::mrover::msg::Throttle throttles(::mrover::msg::Throttle::_throttles_type arg)
  {
    msg_.throttles = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mrover::msg::Throttle msg_;
};

class Init_Throttle_names
{
public:
  Init_Throttle_names()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Throttle_throttles names(::mrover::msg::Throttle::_names_type arg)
  {
    msg_.names = std::move(arg);
    return Init_Throttle_throttles(msg_);
  }

private:
  ::mrover::msg::Throttle msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mrover::msg::Throttle>()
{
  return mrover::msg::builder::Init_Throttle_names();
}

}  // namespace mrover

#endif  // MROVER__MSG__DETAIL__THROTTLE__BUILDER_HPP_
