// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mrover:msg/GPSWaypoint.idl
// generated code does not contain a copyright notice

#ifndef MROVER__MSG__DETAIL__GPS_WAYPOINT__BUILDER_HPP_
#define MROVER__MSG__DETAIL__GPS_WAYPOINT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mrover/msg/detail/gps_waypoint__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mrover
{

namespace msg
{

namespace builder
{

class Init_GPSWaypoint_type
{
public:
  explicit Init_GPSWaypoint_type(::mrover::msg::GPSWaypoint & msg)
  : msg_(msg)
  {}
  ::mrover::msg::GPSWaypoint type(::mrover::msg::GPSWaypoint::_type_type arg)
  {
    msg_.type = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mrover::msg::GPSWaypoint msg_;
};

class Init_GPSWaypoint_longitude_degrees
{
public:
  explicit Init_GPSWaypoint_longitude_degrees(::mrover::msg::GPSWaypoint & msg)
  : msg_(msg)
  {}
  Init_GPSWaypoint_type longitude_degrees(::mrover::msg::GPSWaypoint::_longitude_degrees_type arg)
  {
    msg_.longitude_degrees = std::move(arg);
    return Init_GPSWaypoint_type(msg_);
  }

private:
  ::mrover::msg::GPSWaypoint msg_;
};

class Init_GPSWaypoint_latitude_degrees
{
public:
  explicit Init_GPSWaypoint_latitude_degrees(::mrover::msg::GPSWaypoint & msg)
  : msg_(msg)
  {}
  Init_GPSWaypoint_longitude_degrees latitude_degrees(::mrover::msg::GPSWaypoint::_latitude_degrees_type arg)
  {
    msg_.latitude_degrees = std::move(arg);
    return Init_GPSWaypoint_longitude_degrees(msg_);
  }

private:
  ::mrover::msg::GPSWaypoint msg_;
};

class Init_GPSWaypoint_tag_id
{
public:
  Init_GPSWaypoint_tag_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GPSWaypoint_latitude_degrees tag_id(::mrover::msg::GPSWaypoint::_tag_id_type arg)
  {
    msg_.tag_id = std::move(arg);
    return Init_GPSWaypoint_latitude_degrees(msg_);
  }

private:
  ::mrover::msg::GPSWaypoint msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mrover::msg::GPSWaypoint>()
{
  return mrover::msg::builder::Init_GPSWaypoint_tag_id();
}

}  // namespace mrover

#endif  // MROVER__MSG__DETAIL__GPS_WAYPOINT__BUILDER_HPP_
