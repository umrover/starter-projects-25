// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mrover:msg/PDLB.idl
// generated code does not contain a copyright notice

#ifndef MROVER__MSG__DETAIL__PDLB__STRUCT_HPP_
#define MROVER__MSG__DETAIL__PDLB__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__mrover__msg__PDLB __attribute__((deprecated))
#else
# define DEPRECATED__mrover__msg__PDLB __declspec(deprecated)
#endif

namespace mrover
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PDLB_
{
  using Type = PDLB_<ContainerAllocator>;

  explicit PDLB_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<float, 6>::iterator, float>(this->temperatures.begin(), this->temperatures.end(), 0.0f);
      std::fill<typename std::array<float, 6>::iterator, float>(this->currents.begin(), this->currents.end(), 0.0f);
    }
  }

  explicit PDLB_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : temperatures(_alloc),
    currents(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<float, 6>::iterator, float>(this->temperatures.begin(), this->temperatures.end(), 0.0f);
      std::fill<typename std::array<float, 6>::iterator, float>(this->currents.begin(), this->currents.end(), 0.0f);
    }
  }

  // field types and members
  using _temperatures_type =
    std::array<float, 6>;
  _temperatures_type temperatures;
  using _currents_type =
    std::array<float, 6>;
  _currents_type currents;

  // setters for named parameter idiom
  Type & set__temperatures(
    const std::array<float, 6> & _arg)
  {
    this->temperatures = _arg;
    return *this;
  }
  Type & set__currents(
    const std::array<float, 6> & _arg)
  {
    this->currents = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mrover::msg::PDLB_<ContainerAllocator> *;
  using ConstRawPtr =
    const mrover::msg::PDLB_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mrover::msg::PDLB_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mrover::msg::PDLB_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mrover::msg::PDLB_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mrover::msg::PDLB_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mrover::msg::PDLB_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mrover::msg::PDLB_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mrover::msg::PDLB_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mrover::msg::PDLB_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mrover__msg__PDLB
    std::shared_ptr<mrover::msg::PDLB_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mrover__msg__PDLB
    std::shared_ptr<mrover::msg::PDLB_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PDLB_ & other) const
  {
    if (this->temperatures != other.temperatures) {
      return false;
    }
    if (this->currents != other.currents) {
      return false;
    }
    return true;
  }
  bool operator!=(const PDLB_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PDLB_

// alias to use template instance with default allocator
using PDLB =
  mrover::msg::PDLB_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace mrover

#endif  // MROVER__MSG__DETAIL__PDLB__STRUCT_HPP_
