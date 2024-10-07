// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mrover:msg/ImageTargets.idl
// generated code does not contain a copyright notice

#ifndef MROVER__MSG__DETAIL__IMAGE_TARGETS__STRUCT_HPP_
#define MROVER__MSG__DETAIL__IMAGE_TARGETS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'targets'
#include "mrover/msg/detail/image_target__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__mrover__msg__ImageTargets __attribute__((deprecated))
#else
# define DEPRECATED__mrover__msg__ImageTargets __declspec(deprecated)
#endif

namespace mrover
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ImageTargets_
{
  using Type = ImageTargets_<ContainerAllocator>;

  explicit ImageTargets_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit ImageTargets_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _targets_type =
    std::vector<mrover::msg::ImageTarget_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<mrover::msg::ImageTarget_<ContainerAllocator>>>;
  _targets_type targets;

  // setters for named parameter idiom
  Type & set__targets(
    const std::vector<mrover::msg::ImageTarget_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<mrover::msg::ImageTarget_<ContainerAllocator>>> & _arg)
  {
    this->targets = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mrover::msg::ImageTargets_<ContainerAllocator> *;
  using ConstRawPtr =
    const mrover::msg::ImageTargets_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mrover::msg::ImageTargets_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mrover::msg::ImageTargets_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mrover::msg::ImageTargets_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mrover::msg::ImageTargets_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mrover::msg::ImageTargets_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mrover::msg::ImageTargets_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mrover::msg::ImageTargets_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mrover::msg::ImageTargets_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mrover__msg__ImageTargets
    std::shared_ptr<mrover::msg::ImageTargets_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mrover__msg__ImageTargets
    std::shared_ptr<mrover::msg::ImageTargets_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ImageTargets_ & other) const
  {
    if (this->targets != other.targets) {
      return false;
    }
    return true;
  }
  bool operator!=(const ImageTargets_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ImageTargets_

// alias to use template instance with default allocator
using ImageTargets =
  mrover::msg::ImageTargets_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace mrover

#endif  // MROVER__MSG__DETAIL__IMAGE_TARGETS__STRUCT_HPP_
