// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mrover:msg/StarterProjectTag.idl
// generated code does not contain a copyright notice

#ifndef MROVER__MSG__DETAIL__STARTER_PROJECT_TAG__STRUCT_HPP_
#define MROVER__MSG__DETAIL__STARTER_PROJECT_TAG__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__mrover__msg__StarterProjectTag __attribute__((deprecated))
#else
# define DEPRECATED__mrover__msg__StarterProjectTag __declspec(deprecated)
#endif

namespace mrover
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct StarterProjectTag_
{
  using Type = StarterProjectTag_<ContainerAllocator>;

  explicit StarterProjectTag_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->tag_id = 0l;
      this->x_tag_center_pixel = 0.0f;
      this->y_tag_center_pixel = 0.0f;
      this->closeness_metric = 0.0f;
    }
  }

  explicit StarterProjectTag_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->tag_id = 0l;
      this->x_tag_center_pixel = 0.0f;
      this->y_tag_center_pixel = 0.0f;
      this->closeness_metric = 0.0f;
    }
  }

  // field types and members
  using _tag_id_type =
    int32_t;
  _tag_id_type tag_id;
  using _x_tag_center_pixel_type =
    float;
  _x_tag_center_pixel_type x_tag_center_pixel;
  using _y_tag_center_pixel_type =
    float;
  _y_tag_center_pixel_type y_tag_center_pixel;
  using _closeness_metric_type =
    float;
  _closeness_metric_type closeness_metric;

  // setters for named parameter idiom
  Type & set__tag_id(
    const int32_t & _arg)
  {
    this->tag_id = _arg;
    return *this;
  }
  Type & set__x_tag_center_pixel(
    const float & _arg)
  {
    this->x_tag_center_pixel = _arg;
    return *this;
  }
  Type & set__y_tag_center_pixel(
    const float & _arg)
  {
    this->y_tag_center_pixel = _arg;
    return *this;
  }
  Type & set__closeness_metric(
    const float & _arg)
  {
    this->closeness_metric = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mrover::msg::StarterProjectTag_<ContainerAllocator> *;
  using ConstRawPtr =
    const mrover::msg::StarterProjectTag_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mrover::msg::StarterProjectTag_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mrover::msg::StarterProjectTag_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mrover::msg::StarterProjectTag_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mrover::msg::StarterProjectTag_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mrover::msg::StarterProjectTag_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mrover::msg::StarterProjectTag_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mrover::msg::StarterProjectTag_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mrover::msg::StarterProjectTag_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mrover__msg__StarterProjectTag
    std::shared_ptr<mrover::msg::StarterProjectTag_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mrover__msg__StarterProjectTag
    std::shared_ptr<mrover::msg::StarterProjectTag_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const StarterProjectTag_ & other) const
  {
    if (this->tag_id != other.tag_id) {
      return false;
    }
    if (this->x_tag_center_pixel != other.x_tag_center_pixel) {
      return false;
    }
    if (this->y_tag_center_pixel != other.y_tag_center_pixel) {
      return false;
    }
    if (this->closeness_metric != other.closeness_metric) {
      return false;
    }
    return true;
  }
  bool operator!=(const StarterProjectTag_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct StarterProjectTag_

// alias to use template instance with default allocator
using StarterProjectTag =
  mrover::msg::StarterProjectTag_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace mrover

#endif  // MROVER__MSG__DETAIL__STARTER_PROJECT_TAG__STRUCT_HPP_
