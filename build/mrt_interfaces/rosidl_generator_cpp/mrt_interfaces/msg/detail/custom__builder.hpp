// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mrt_interfaces:msg/Custom.idl
// generated code does not contain a copyright notice

#ifndef MRT_INTERFACES__MSG__DETAIL__CUSTOM__BUILDER_HPP_
#define MRT_INTERFACES__MSG__DETAIL__CUSTOM__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mrt_interfaces/msg/detail/custom__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mrt_interfaces
{

namespace msg
{

namespace builder
{

class Init_Custom_health_status
{
public:
  explicit Init_Custom_health_status(::mrt_interfaces::msg::Custom & msg)
  : msg_(msg)
  {}
  ::mrt_interfaces::msg::Custom health_status(::mrt_interfaces::msg::Custom::_health_status_type arg)
  {
    msg_.health_status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mrt_interfaces::msg::Custom msg_;
};

class Init_Custom_current_location
{
public:
  explicit Init_Custom_current_location(::mrt_interfaces::msg::Custom & msg)
  : msg_(msg)
  {}
  Init_Custom_health_status current_location(::mrt_interfaces::msg::Custom::_current_location_type arg)
  {
    msg_.current_location = std::move(arg);
    return Init_Custom_health_status(msg_);
  }

private:
  ::mrt_interfaces::msg::Custom msg_;
};

class Init_Custom_battery_level
{
public:
  explicit Init_Custom_battery_level(::mrt_interfaces::msg::Custom & msg)
  : msg_(msg)
  {}
  Init_Custom_current_location battery_level(::mrt_interfaces::msg::Custom::_battery_level_type arg)
  {
    msg_.battery_level = std::move(arg);
    return Init_Custom_current_location(msg_);
  }

private:
  ::mrt_interfaces::msg::Custom msg_;
};

class Init_Custom_rover_id
{
public:
  Init_Custom_rover_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Custom_battery_level rover_id(::mrt_interfaces::msg::Custom::_rover_id_type arg)
  {
    msg_.rover_id = std::move(arg);
    return Init_Custom_battery_level(msg_);
  }

private:
  ::mrt_interfaces::msg::Custom msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mrt_interfaces::msg::Custom>()
{
  return mrt_interfaces::msg::builder::Init_Custom_rover_id();
}

}  // namespace mrt_interfaces

#endif  // MRT_INTERFACES__MSG__DETAIL__CUSTOM__BUILDER_HPP_
