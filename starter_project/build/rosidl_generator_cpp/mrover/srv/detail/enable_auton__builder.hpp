// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mrover:srv/EnableAuton.idl
// generated code does not contain a copyright notice

#ifndef MROVER__SRV__DETAIL__ENABLE_AUTON__BUILDER_HPP_
#define MROVER__SRV__DETAIL__ENABLE_AUTON__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mrover/srv/detail/enable_auton__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mrover
{

namespace srv
{

namespace builder
{

class Init_EnableAuton_Request_waypoints
{
public:
  explicit Init_EnableAuton_Request_waypoints(::mrover::srv::EnableAuton_Request & msg)
  : msg_(msg)
  {}
  ::mrover::srv::EnableAuton_Request waypoints(::mrover::srv::EnableAuton_Request::_waypoints_type arg)
  {
    msg_.waypoints = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mrover::srv::EnableAuton_Request msg_;
};

class Init_EnableAuton_Request_enable
{
public:
  Init_EnableAuton_Request_enable()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_EnableAuton_Request_waypoints enable(::mrover::srv::EnableAuton_Request::_enable_type arg)
  {
    msg_.enable = std::move(arg);
    return Init_EnableAuton_Request_waypoints(msg_);
  }

private:
  ::mrover::srv::EnableAuton_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::mrover::srv::EnableAuton_Request>()
{
  return mrover::srv::builder::Init_EnableAuton_Request_enable();
}

}  // namespace mrover


namespace mrover
{

namespace srv
{

namespace builder
{

class Init_EnableAuton_Response_success
{
public:
  Init_EnableAuton_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::mrover::srv::EnableAuton_Response success(::mrover::srv::EnableAuton_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mrover::srv::EnableAuton_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::mrover::srv::EnableAuton_Response>()
{
  return mrover::srv::builder::Init_EnableAuton_Response_success();
}

}  // namespace mrover

#endif  // MROVER__SRV__DETAIL__ENABLE_AUTON__BUILDER_HPP_
