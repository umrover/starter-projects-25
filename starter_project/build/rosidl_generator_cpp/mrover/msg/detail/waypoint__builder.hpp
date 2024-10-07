// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mrover:msg/Waypoint.idl
// generated code does not contain a copyright notice

#ifndef MROVER__MSG__DETAIL__WAYPOINT__BUILDER_HPP_
#define MROVER__MSG__DETAIL__WAYPOINT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mrover/msg/detail/waypoint__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mrover
{

namespace msg
{

namespace builder
{

class Init_Waypoint_type
{
public:
  explicit Init_Waypoint_type(::mrover::msg::Waypoint & msg)
  : msg_(msg)
  {}
  ::mrover::msg::Waypoint type(::mrover::msg::Waypoint::_type_type arg)
  {
    msg_.type = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mrover::msg::Waypoint msg_;
};

class Init_Waypoint_tag_id
{
public:
  Init_Waypoint_tag_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Waypoint_type tag_id(::mrover::msg::Waypoint::_tag_id_type arg)
  {
    msg_.tag_id = std::move(arg);
    return Init_Waypoint_type(msg_);
  }

private:
  ::mrover::msg::Waypoint msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mrover::msg::Waypoint>()
{
  return mrover::msg::builder::Init_Waypoint_tag_id();
}

}  // namespace mrover

#endif  // MROVER__MSG__DETAIL__WAYPOINT__BUILDER_HPP_
