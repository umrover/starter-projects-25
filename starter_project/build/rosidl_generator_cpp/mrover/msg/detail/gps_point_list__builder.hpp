// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mrover:msg/GPSPointList.idl
// generated code does not contain a copyright notice

#ifndef MROVER__MSG__DETAIL__GPS_POINT_LIST__BUILDER_HPP_
#define MROVER__MSG__DETAIL__GPS_POINT_LIST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mrover/msg/detail/gps_point_list__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mrover
{

namespace msg
{

namespace builder
{

class Init_GPSPointList_points
{
public:
  Init_GPSPointList_points()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::mrover::msg::GPSPointList points(::mrover::msg::GPSPointList::_points_type arg)
  {
    msg_.points = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mrover::msg::GPSPointList msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mrover::msg::GPSPointList>()
{
  return mrover::msg::builder::Init_GPSPointList_points();
}

}  // namespace mrover

#endif  // MROVER__MSG__DETAIL__GPS_POINT_LIST__BUILDER_HPP_
