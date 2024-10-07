// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mrover:msg/Spectral.idl
// generated code does not contain a copyright notice

#ifndef MROVER__MSG__DETAIL__SPECTRAL__STRUCT_HPP_
#define MROVER__MSG__DETAIL__SPECTRAL__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__mrover__msg__Spectral __attribute__((deprecated))
#else
# define DEPRECATED__mrover__msg__Spectral __declspec(deprecated)
#endif

namespace mrover
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Spectral_
{
  using Type = Spectral_<ContainerAllocator>;

  explicit Spectral_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->site = 0;
      std::fill<typename std::array<float, 6>::iterator, float>(this->data.begin(), this->data.end(), 0.0f);
      this->error = false;
    }
  }

  explicit Spectral_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : data(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->site = 0;
      std::fill<typename std::array<float, 6>::iterator, float>(this->data.begin(), this->data.end(), 0.0f);
      this->error = false;
    }
  }

  // field types and members
  using _site_type =
    uint8_t;
  _site_type site;
  using _data_type =
    std::array<float, 6>;
  _data_type data;
  using _error_type =
    bool;
  _error_type error;

  // setters for named parameter idiom
  Type & set__site(
    const uint8_t & _arg)
  {
    this->site = _arg;
    return *this;
  }
  Type & set__data(
    const std::array<float, 6> & _arg)
  {
    this->data = _arg;
    return *this;
  }
  Type & set__error(
    const bool & _arg)
  {
    this->error = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mrover::msg::Spectral_<ContainerAllocator> *;
  using ConstRawPtr =
    const mrover::msg::Spectral_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mrover::msg::Spectral_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mrover::msg::Spectral_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mrover::msg::Spectral_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mrover::msg::Spectral_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mrover::msg::Spectral_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mrover::msg::Spectral_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mrover::msg::Spectral_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mrover::msg::Spectral_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mrover__msg__Spectral
    std::shared_ptr<mrover::msg::Spectral_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mrover__msg__Spectral
    std::shared_ptr<mrover::msg::Spectral_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Spectral_ & other) const
  {
    if (this->site != other.site) {
      return false;
    }
    if (this->data != other.data) {
      return false;
    }
    if (this->error != other.error) {
      return false;
    }
    return true;
  }
  bool operator!=(const Spectral_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Spectral_

// alias to use template instance with default allocator
using Spectral =
  mrover::msg::Spectral_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace mrover

#endif  // MROVER__MSG__DETAIL__SPECTRAL__STRUCT_HPP_
