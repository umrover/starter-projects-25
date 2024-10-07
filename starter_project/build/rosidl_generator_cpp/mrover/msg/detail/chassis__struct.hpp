// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mrover:msg/Chassis.idl
// generated code does not contain a copyright notice

#ifndef MROVER__MSG__DETAIL__CHASSIS__STRUCT_HPP_
#define MROVER__MSG__DETAIL__CHASSIS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__mrover__msg__Chassis __attribute__((deprecated))
#else
# define DEPRECATED__mrover__msg__Chassis __declspec(deprecated)
#endif

namespace mrover
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Chassis_
{
  using Type = Chassis_<ContainerAllocator>;

  explicit Chassis_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->omega_r = 0.0;
      this->omega_l = 0.0;
    }
  }

  explicit Chassis_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->omega_r = 0.0;
      this->omega_l = 0.0;
    }
  }

  // field types and members
  using _omega_r_type =
    double;
  _omega_r_type omega_r;
  using _omega_l_type =
    double;
  _omega_l_type omega_l;

  // setters for named parameter idiom
  Type & set__omega_r(
    const double & _arg)
  {
    this->omega_r = _arg;
    return *this;
  }
  Type & set__omega_l(
    const double & _arg)
  {
    this->omega_l = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mrover::msg::Chassis_<ContainerAllocator> *;
  using ConstRawPtr =
    const mrover::msg::Chassis_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mrover::msg::Chassis_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mrover::msg::Chassis_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mrover::msg::Chassis_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mrover::msg::Chassis_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mrover::msg::Chassis_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mrover::msg::Chassis_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mrover::msg::Chassis_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mrover::msg::Chassis_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mrover__msg__Chassis
    std::shared_ptr<mrover::msg::Chassis_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mrover__msg__Chassis
    std::shared_ptr<mrover::msg::Chassis_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Chassis_ & other) const
  {
    if (this->omega_r != other.omega_r) {
      return false;
    }
    if (this->omega_l != other.omega_l) {
      return false;
    }
    return true;
  }
  bool operator!=(const Chassis_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Chassis_

// alias to use template instance with default allocator
using Chassis =
  mrover::msg::Chassis_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace mrover

#endif  // MROVER__MSG__DETAIL__CHASSIS__STRUCT_HPP_
