// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mrover:msg/ScienceThermistors.idl
// generated code does not contain a copyright notice

#ifndef MROVER__MSG__DETAIL__SCIENCE_THERMISTORS__STRUCT_HPP_
#define MROVER__MSG__DETAIL__SCIENCE_THERMISTORS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'temps'
#include "sensor_msgs/msg/detail/temperature__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__mrover__msg__ScienceThermistors __attribute__((deprecated))
#else
# define DEPRECATED__mrover__msg__ScienceThermistors __declspec(deprecated)
#endif

namespace mrover
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ScienceThermistors_
{
  using Type = ScienceThermistors_<ContainerAllocator>;

  explicit ScienceThermistors_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit ScienceThermistors_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _temps_type =
    std::vector<sensor_msgs::msg::Temperature_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<sensor_msgs::msg::Temperature_<ContainerAllocator>>>;
  _temps_type temps;

  // setters for named parameter idiom
  Type & set__temps(
    const std::vector<sensor_msgs::msg::Temperature_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<sensor_msgs::msg::Temperature_<ContainerAllocator>>> & _arg)
  {
    this->temps = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mrover::msg::ScienceThermistors_<ContainerAllocator> *;
  using ConstRawPtr =
    const mrover::msg::ScienceThermistors_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mrover::msg::ScienceThermistors_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mrover::msg::ScienceThermistors_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mrover::msg::ScienceThermistors_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mrover::msg::ScienceThermistors_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mrover::msg::ScienceThermistors_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mrover::msg::ScienceThermistors_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mrover::msg::ScienceThermistors_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mrover::msg::ScienceThermistors_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mrover__msg__ScienceThermistors
    std::shared_ptr<mrover::msg::ScienceThermistors_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mrover__msg__ScienceThermistors
    std::shared_ptr<mrover::msg::ScienceThermistors_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ScienceThermistors_ & other) const
  {
    if (this->temps != other.temps) {
      return false;
    }
    return true;
  }
  bool operator!=(const ScienceThermistors_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ScienceThermistors_

// alias to use template instance with default allocator
using ScienceThermistors =
  mrover::msg::ScienceThermistors_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace mrover

#endif  // MROVER__MSG__DETAIL__SCIENCE_THERMISTORS__STRUCT_HPP_
