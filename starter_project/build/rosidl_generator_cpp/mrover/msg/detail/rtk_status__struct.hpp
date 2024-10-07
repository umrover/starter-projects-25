// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mrover:msg/RTKStatus.idl
// generated code does not contain a copyright notice

#ifndef MROVER__MSG__DETAIL__RTK_STATUS__STRUCT_HPP_
#define MROVER__MSG__DETAIL__RTK_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__mrover__msg__RTKStatus __attribute__((deprecated))
#else
# define DEPRECATED__mrover__msg__RTKStatus __declspec(deprecated)
#endif

namespace mrover
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RTKStatus_
{
  using Type = RTKStatus_<ContainerAllocator>;

  explicit RTKStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->fix_type = 0;
    }
  }

  explicit RTKStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->fix_type = 0;
    }
  }

  // field types and members
  using _fix_type_type =
    uint8_t;
  _fix_type_type fix_type;

  // setters for named parameter idiom
  Type & set__fix_type(
    const uint8_t & _arg)
  {
    this->fix_type = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t NO_RTK =
    0u;
  static constexpr uint8_t FLOATING_RTK =
    1u;
  static constexpr uint8_t RTK_FIX =
    2u;

  // pointer types
  using RawPtr =
    mrover::msg::RTKStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const mrover::msg::RTKStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mrover::msg::RTKStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mrover::msg::RTKStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mrover::msg::RTKStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mrover::msg::RTKStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mrover::msg::RTKStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mrover::msg::RTKStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mrover::msg::RTKStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mrover::msg::RTKStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mrover__msg__RTKStatus
    std::shared_ptr<mrover::msg::RTKStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mrover__msg__RTKStatus
    std::shared_ptr<mrover::msg::RTKStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RTKStatus_ & other) const
  {
    if (this->fix_type != other.fix_type) {
      return false;
    }
    return true;
  }
  bool operator!=(const RTKStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RTKStatus_

// alias to use template instance with default allocator
using RTKStatus =
  mrover::msg::RTKStatus_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RTKStatus_<ContainerAllocator>::NO_RTK;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RTKStatus_<ContainerAllocator>::FLOATING_RTK;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RTKStatus_<ContainerAllocator>::RTK_FIX;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace mrover

#endif  // MROVER__MSG__DETAIL__RTK_STATUS__STRUCT_HPP_
