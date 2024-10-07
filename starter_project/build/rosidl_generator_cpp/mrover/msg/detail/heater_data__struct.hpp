// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mrover:msg/HeaterData.idl
// generated code does not contain a copyright notice

#ifndef MROVER__MSG__DETAIL__HEATER_DATA__STRUCT_HPP_
#define MROVER__MSG__DETAIL__HEATER_DATA__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__mrover__msg__HeaterData __attribute__((deprecated))
#else
# define DEPRECATED__mrover__msg__HeaterData __declspec(deprecated)
#endif

namespace mrover
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct HeaterData_
{
  using Type = HeaterData_<ContainerAllocator>;

  explicit HeaterData_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit HeaterData_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _state_type =
    std::vector<bool, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bool>>;
  _state_type state;

  // setters for named parameter idiom
  Type & set__state(
    const std::vector<bool, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bool>> & _arg)
  {
    this->state = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mrover::msg::HeaterData_<ContainerAllocator> *;
  using ConstRawPtr =
    const mrover::msg::HeaterData_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mrover::msg::HeaterData_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mrover::msg::HeaterData_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mrover::msg::HeaterData_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mrover::msg::HeaterData_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mrover::msg::HeaterData_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mrover::msg::HeaterData_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mrover::msg::HeaterData_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mrover::msg::HeaterData_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mrover__msg__HeaterData
    std::shared_ptr<mrover::msg::HeaterData_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mrover__msg__HeaterData
    std::shared_ptr<mrover::msg::HeaterData_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const HeaterData_ & other) const
  {
    if (this->state != other.state) {
      return false;
    }
    return true;
  }
  bool operator!=(const HeaterData_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct HeaterData_

// alias to use template instance with default allocator
using HeaterData =
  mrover::msg::HeaterData_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace mrover

#endif  // MROVER__MSG__DETAIL__HEATER_DATA__STRUCT_HPP_
