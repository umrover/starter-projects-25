// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mrover:msg/Course.idl
// generated code does not contain a copyright notice

#ifndef MROVER__MSG__DETAIL__COURSE__BUILDER_HPP_
#define MROVER__MSG__DETAIL__COURSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mrover/msg/detail/course__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mrover
{

namespace msg
{

namespace builder
{

class Init_Course_waypoints
{
public:
  Init_Course_waypoints()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::mrover::msg::Course waypoints(::mrover::msg::Course::_waypoints_type arg)
  {
    msg_.waypoints = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mrover::msg::Course msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mrover::msg::Course>()
{
  return mrover::msg::builder::Init_Course_waypoints();
}

}  // namespace mrover

#endif  // MROVER__MSG__DETAIL__COURSE__BUILDER_HPP_
