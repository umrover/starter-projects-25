// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mrover:msg/Chassis.idl
// generated code does not contain a copyright notice

#ifndef MROVER__MSG__DETAIL__CHASSIS__BUILDER_HPP_
#define MROVER__MSG__DETAIL__CHASSIS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mrover/msg/detail/chassis__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mrover
{

namespace msg
{

namespace builder
{

class Init_Chassis_omega_l
{
public:
  explicit Init_Chassis_omega_l(::mrover::msg::Chassis & msg)
  : msg_(msg)
  {}
  ::mrover::msg::Chassis omega_l(::mrover::msg::Chassis::_omega_l_type arg)
  {
    msg_.omega_l = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mrover::msg::Chassis msg_;
};

class Init_Chassis_omega_r
{
public:
  Init_Chassis_omega_r()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Chassis_omega_l omega_r(::mrover::msg::Chassis::_omega_r_type arg)
  {
    msg_.omega_r = std::move(arg);
    return Init_Chassis_omega_l(msg_);
  }

private:
  ::mrover::msg::Chassis msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mrover::msg::Chassis>()
{
  return mrover::msg::builder::Init_Chassis_omega_r();
}

}  // namespace mrover

#endif  // MROVER__MSG__DETAIL__CHASSIS__BUILDER_HPP_
