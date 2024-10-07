// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mrover:msg/Position.idl
// generated code does not contain a copyright notice

#ifndef MROVER__MSG__DETAIL__POSITION__BUILDER_HPP_
#define MROVER__MSG__DETAIL__POSITION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mrover/msg/detail/position__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mrover
{

namespace msg
{

namespace builder
{

class Init_Position_positions
{
public:
  explicit Init_Position_positions(::mrover::msg::Position & msg)
  : msg_(msg)
  {}
  ::mrover::msg::Position positions(::mrover::msg::Position::_positions_type arg)
  {
    msg_.positions = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mrover::msg::Position msg_;
};

class Init_Position_names
{
public:
  Init_Position_names()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Position_positions names(::mrover::msg::Position::_names_type arg)
  {
    msg_.names = std::move(arg);
    return Init_Position_positions(msg_);
  }

private:
  ::mrover::msg::Position msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mrover::msg::Position>()
{
  return mrover::msg::builder::Init_Position_names();
}

}  // namespace mrover

#endif  // MROVER__MSG__DETAIL__POSITION__BUILDER_HPP_
