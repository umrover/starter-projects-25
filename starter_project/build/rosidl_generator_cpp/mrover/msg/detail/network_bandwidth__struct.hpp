// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mrover:msg/NetworkBandwidth.idl
// generated code does not contain a copyright notice

#ifndef MROVER__MSG__DETAIL__NETWORK_BANDWIDTH__STRUCT_HPP_
#define MROVER__MSG__DETAIL__NETWORK_BANDWIDTH__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__mrover__msg__NetworkBandwidth __attribute__((deprecated))
#else
# define DEPRECATED__mrover__msg__NetworkBandwidth __declspec(deprecated)
#endif

namespace mrover
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct NetworkBandwidth_
{
  using Type = NetworkBandwidth_<ContainerAllocator>;

  explicit NetworkBandwidth_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->tx = 0.0;
      this->rx = 0.0;
    }
  }

  explicit NetworkBandwidth_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->tx = 0.0;
      this->rx = 0.0;
    }
  }

  // field types and members
  using _tx_type =
    double;
  _tx_type tx;
  using _rx_type =
    double;
  _rx_type rx;

  // setters for named parameter idiom
  Type & set__tx(
    const double & _arg)
  {
    this->tx = _arg;
    return *this;
  }
  Type & set__rx(
    const double & _arg)
  {
    this->rx = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mrover::msg::NetworkBandwidth_<ContainerAllocator> *;
  using ConstRawPtr =
    const mrover::msg::NetworkBandwidth_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mrover::msg::NetworkBandwidth_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mrover::msg::NetworkBandwidth_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mrover::msg::NetworkBandwidth_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mrover::msg::NetworkBandwidth_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mrover::msg::NetworkBandwidth_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mrover::msg::NetworkBandwidth_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mrover::msg::NetworkBandwidth_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mrover::msg::NetworkBandwidth_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mrover__msg__NetworkBandwidth
    std::shared_ptr<mrover::msg::NetworkBandwidth_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mrover__msg__NetworkBandwidth
    std::shared_ptr<mrover::msg::NetworkBandwidth_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NetworkBandwidth_ & other) const
  {
    if (this->tx != other.tx) {
      return false;
    }
    if (this->rx != other.rx) {
      return false;
    }
    return true;
  }
  bool operator!=(const NetworkBandwidth_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NetworkBandwidth_

// alias to use template instance with default allocator
using NetworkBandwidth =
  mrover::msg::NetworkBandwidth_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace mrover

#endif  // MROVER__MSG__DETAIL__NETWORK_BANDWIDTH__STRUCT_HPP_
