// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mrover:msg/Velocity.idl
// generated code does not contain a copyright notice

#ifndef MROVER__MSG__DETAIL__VELOCITY__BUILDER_HPP_
#define MROVER__MSG__DETAIL__VELOCITY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mrover/msg/detail/velocity__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mrover
{

namespace msg
{

namespace builder
{

class Init_Velocity_velocities
{
public:
  explicit Init_Velocity_velocities(::mrover::msg::Velocity & msg)
  : msg_(msg)
  {}
  ::mrover::msg::Velocity velocities(::mrover::msg::Velocity::_velocities_type arg)
  {
    msg_.velocities = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mrover::msg::Velocity msg_;
};

class Init_Velocity_names
{
public:
  Init_Velocity_names()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Velocity_velocities names(::mrover::msg::Velocity::_names_type arg)
  {
    msg_.names = std::move(arg);
    return Init_Velocity_velocities(msg_);
  }

private:
  ::mrover::msg::Velocity msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mrover::msg::Velocity>()
{
  return mrover::msg::builder::Init_Velocity_names();
}

}  // namespace mrover

#endif  // MROVER__MSG__DETAIL__VELOCITY__BUILDER_HPP_
