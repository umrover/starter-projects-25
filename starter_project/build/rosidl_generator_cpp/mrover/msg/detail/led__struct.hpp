// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mrover:msg/LED.idl
// generated code does not contain a copyright notice

#ifndef MROVER__MSG__DETAIL__LED__STRUCT_HPP_
#define MROVER__MSG__DETAIL__LED__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__mrover__msg__LED __attribute__((deprecated))
#else
# define DEPRECATED__mrover__msg__LED __declspec(deprecated)
#endif

namespace mrover
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LED_
{
  using Type = LED_<ContainerAllocator>;

  explicit LED_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->red = false;
      this->green = false;
      this->blue = false;
      this->is_blinking = false;
    }
  }

  explicit LED_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->red = false;
      this->green = false;
      this->blue = false;
      this->is_blinking = false;
    }
  }

  // field types and members
  using _red_type =
    bool;
  _red_type red;
  using _green_type =
    bool;
  _green_type green;
  using _blue_type =
    bool;
  _blue_type blue;
  using _is_blinking_type =
    bool;
  _is_blinking_type is_blinking;

  // setters for named parameter idiom
  Type & set__red(
    const bool & _arg)
  {
    this->red = _arg;
    return *this;
  }
  Type & set__green(
    const bool & _arg)
  {
    this->green = _arg;
    return *this;
  }
  Type & set__blue(
    const bool & _arg)
  {
    this->blue = _arg;
    return *this;
  }
  Type & set__is_blinking(
    const bool & _arg)
  {
    this->is_blinking = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mrover::msg::LED_<ContainerAllocator> *;
  using ConstRawPtr =
    const mrover::msg::LED_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mrover::msg::LED_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mrover::msg::LED_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mrover::msg::LED_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mrover::msg::LED_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mrover::msg::LED_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mrover::msg::LED_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mrover::msg::LED_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mrover::msg::LED_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mrover__msg__LED
    std::shared_ptr<mrover::msg::LED_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mrover__msg__LED
    std::shared_ptr<mrover::msg::LED_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LED_ & other) const
  {
    if (this->red != other.red) {
      return false;
    }
    if (this->green != other.green) {
      return false;
    }
    if (this->blue != other.blue) {
      return false;
    }
    if (this->is_blinking != other.is_blinking) {
      return false;
    }
    return true;
  }
  bool operator!=(const LED_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LED_

// alias to use template instance with default allocator
using LED =
  mrover::msg::LED_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace mrover

#endif  // MROVER__MSG__DETAIL__LED__STRUCT_HPP_
