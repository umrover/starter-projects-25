// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mrover:msg/CalibrationStatus.idl
// generated code does not contain a copyright notice

#ifndef MROVER__MSG__DETAIL__CALIBRATION_STATUS__BUILDER_HPP_
#define MROVER__MSG__DETAIL__CALIBRATION_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mrover/msg/detail/calibration_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mrover
{

namespace msg
{

namespace builder
{

class Init_CalibrationStatus_acceleration_calibration
{
public:
  explicit Init_CalibrationStatus_acceleration_calibration(::mrover::msg::CalibrationStatus & msg)
  : msg_(msg)
  {}
  ::mrover::msg::CalibrationStatus acceleration_calibration(::mrover::msg::CalibrationStatus::_acceleration_calibration_type arg)
  {
    msg_.acceleration_calibration = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mrover::msg::CalibrationStatus msg_;
};

class Init_CalibrationStatus_gyroscope_calibration
{
public:
  explicit Init_CalibrationStatus_gyroscope_calibration(::mrover::msg::CalibrationStatus & msg)
  : msg_(msg)
  {}
  Init_CalibrationStatus_acceleration_calibration gyroscope_calibration(::mrover::msg::CalibrationStatus::_gyroscope_calibration_type arg)
  {
    msg_.gyroscope_calibration = std::move(arg);
    return Init_CalibrationStatus_acceleration_calibration(msg_);
  }

private:
  ::mrover::msg::CalibrationStatus msg_;
};

class Init_CalibrationStatus_magnetometer_calibration
{
public:
  explicit Init_CalibrationStatus_magnetometer_calibration(::mrover::msg::CalibrationStatus & msg)
  : msg_(msg)
  {}
  Init_CalibrationStatus_gyroscope_calibration magnetometer_calibration(::mrover::msg::CalibrationStatus::_magnetometer_calibration_type arg)
  {
    msg_.magnetometer_calibration = std::move(arg);
    return Init_CalibrationStatus_gyroscope_calibration(msg_);
  }

private:
  ::mrover::msg::CalibrationStatus msg_;
};

class Init_CalibrationStatus_header
{
public:
  Init_CalibrationStatus_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CalibrationStatus_magnetometer_calibration header(::mrover::msg::CalibrationStatus::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_CalibrationStatus_magnetometer_calibration(msg_);
  }

private:
  ::mrover::msg::CalibrationStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mrover::msg::CalibrationStatus>()
{
  return mrover::msg::builder::Init_CalibrationStatus_header();
}

}  // namespace mrover

#endif  // MROVER__MSG__DETAIL__CALIBRATION_STATUS__BUILDER_HPP_
