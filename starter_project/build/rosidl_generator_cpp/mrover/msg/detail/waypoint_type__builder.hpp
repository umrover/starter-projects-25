// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mrover:msg/WaypointType.idl
// generated code does not contain a copyright notice

#ifndef MROVER__MSG__DETAIL__WAYPOINT_TYPE__BUILDER_HPP_
#define MROVER__MSG__DETAIL__WAYPOINT_TYPE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mrover/msg/detail/waypoint_type__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mrover
{

namespace msg
{

namespace builder
{

class Init_WaypointType_val
{
public:
  Init_WaypointType_val()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::mrover::msg::WaypointType val(::mrover::msg::WaypointType::_val_type arg)
  {
    msg_.val = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mrover::msg::WaypointType msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mrover::msg::WaypointType>()
{
  return mrover::msg::builder::Init_WaypointType_val();
}

}  // namespace mrover

#endif  // MROVER__MSG__DETAIL__WAYPOINT_TYPE__BUILDER_HPP_
