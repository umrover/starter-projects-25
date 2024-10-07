// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mrover:msg/ControllerState.idl
// generated code does not contain a copyright notice

#ifndef MROVER__MSG__DETAIL__CONTROLLER_STATE__BUILDER_HPP_
#define MROVER__MSG__DETAIL__CONTROLLER_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mrover/msg/detail/controller_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mrover
{

namespace msg
{

namespace builder
{

class Init_ControllerState_limit_hit
{
public:
  explicit Init_ControllerState_limit_hit(::mrover::msg::ControllerState & msg)
  : msg_(msg)
  {}
  ::mrover::msg::ControllerState limit_hit(::mrover::msg::ControllerState::_limit_hit_type arg)
  {
    msg_.limit_hit = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mrover::msg::ControllerState msg_;
};

class Init_ControllerState_error
{
public:
  explicit Init_ControllerState_error(::mrover::msg::ControllerState & msg)
  : msg_(msg)
  {}
  Init_ControllerState_limit_hit error(::mrover::msg::ControllerState::_error_type arg)
  {
    msg_.error = std::move(arg);
    return Init_ControllerState_limit_hit(msg_);
  }

private:
  ::mrover::msg::ControllerState msg_;
};

class Init_ControllerState_state
{
public:
  explicit Init_ControllerState_state(::mrover::msg::ControllerState & msg)
  : msg_(msg)
  {}
  Init_ControllerState_error state(::mrover::msg::ControllerState::_state_type arg)
  {
    msg_.state = std::move(arg);
    return Init_ControllerState_error(msg_);
  }

private:
  ::mrover::msg::ControllerState msg_;
};

class Init_ControllerState_name
{
public:
  Init_ControllerState_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ControllerState_state name(::mrover::msg::ControllerState::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_ControllerState_state(msg_);
  }

private:
  ::mrover::msg::ControllerState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mrover::msg::ControllerState>()
{
  return mrover::msg::builder::Init_ControllerState_name();
}

}  // namespace mrover

#endif  // MROVER__MSG__DETAIL__CONTROLLER_STATE__BUILDER_HPP_
