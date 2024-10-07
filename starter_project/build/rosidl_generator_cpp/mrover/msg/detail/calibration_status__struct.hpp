// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mrover:msg/CalibrationStatus.idl
// generated code does not contain a copyright notice

#ifndef MROVER__MSG__DETAIL__CALIBRATION_STATUS__STRUCT_HPP_
#define MROVER__MSG__DETAIL__CALIBRATION_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__mrover__msg__CalibrationStatus __attribute__((deprecated))
#else
# define DEPRECATED__mrover__msg__CalibrationStatus __declspec(deprecated)
#endif

namespace mrover
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CalibrationStatus_
{
  using Type = CalibrationStatus_<ContainerAllocator>;

  explicit CalibrationStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->magnetometer_calibration = 0;
      this->gyroscope_calibration = 0;
      this->acceleration_calibration = 0;
    }
  }

  explicit CalibrationStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->magnetometer_calibration = 0;
      this->gyroscope_calibration = 0;
      this->acceleration_calibration = 0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _magnetometer_calibration_type =
    uint8_t;
  _magnetometer_calibration_type magnetometer_calibration;
  using _gyroscope_calibration_type =
    uint8_t;
  _gyroscope_calibration_type gyroscope_calibration;
  using _acceleration_calibration_type =
    uint8_t;
  _acceleration_calibration_type acceleration_calibration;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__magnetometer_calibration(
    const uint8_t & _arg)
  {
    this->magnetometer_calibration = _arg;
    return *this;
  }
  Type & set__gyroscope_calibration(
    const uint8_t & _arg)
  {
    this->gyroscope_calibration = _arg;
    return *this;
  }
  Type & set__acceleration_calibration(
    const uint8_t & _arg)
  {
    this->acceleration_calibration = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mrover::msg::CalibrationStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const mrover::msg::CalibrationStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mrover::msg::CalibrationStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mrover::msg::CalibrationStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mrover::msg::CalibrationStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mrover::msg::CalibrationStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mrover::msg::CalibrationStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mrover::msg::CalibrationStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mrover::msg::CalibrationStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mrover::msg::CalibrationStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mrover__msg__CalibrationStatus
    std::shared_ptr<mrover::msg::CalibrationStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mrover__msg__CalibrationStatus
    std::shared_ptr<mrover::msg::CalibrationStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CalibrationStatus_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->magnetometer_calibration != other.magnetometer_calibration) {
      return false;
    }
    if (this->gyroscope_calibration != other.gyroscope_calibration) {
      return false;
    }
    if (this->acceleration_calibration != other.acceleration_calibration) {
      return false;
    }
    return true;
  }
  bool operator!=(const CalibrationStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CalibrationStatus_

// alias to use template instance with default allocator
using CalibrationStatus =
  mrover::msg::CalibrationStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace mrover

#endif  // MROVER__MSG__DETAIL__CALIBRATION_STATUS__STRUCT_HPP_
