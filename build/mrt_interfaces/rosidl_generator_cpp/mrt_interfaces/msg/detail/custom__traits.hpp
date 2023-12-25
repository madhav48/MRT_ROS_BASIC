// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mrt_interfaces:msg/Custom.idl
// generated code does not contain a copyright notice

#ifndef MRT_INTERFACES__MSG__DETAIL__CUSTOM__TRAITS_HPP_
#define MRT_INTERFACES__MSG__DETAIL__CUSTOM__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mrt_interfaces/msg/detail/custom__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'current_location'
#include "geometry_msgs/msg/detail/pose__traits.hpp"

namespace mrt_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const Custom & msg,
  std::ostream & out)
{
  out << "{";
  // member: rover_id
  {
    out << "rover_id: ";
    rosidl_generator_traits::value_to_yaml(msg.rover_id, out);
    out << ", ";
  }

  // member: battery_level
  {
    out << "battery_level: ";
    rosidl_generator_traits::value_to_yaml(msg.battery_level, out);
    out << ", ";
  }

  // member: current_location
  {
    out << "current_location: ";
    to_flow_style_yaml(msg.current_location, out);
    out << ", ";
  }

  // member: health_status
  {
    out << "health_status: ";
    rosidl_generator_traits::value_to_yaml(msg.health_status, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Custom & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: rover_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rover_id: ";
    rosidl_generator_traits::value_to_yaml(msg.rover_id, out);
    out << "\n";
  }

  // member: battery_level
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "battery_level: ";
    rosidl_generator_traits::value_to_yaml(msg.battery_level, out);
    out << "\n";
  }

  // member: current_location
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_location:\n";
    to_block_style_yaml(msg.current_location, out, indentation + 2);
  }

  // member: health_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "health_status: ";
    rosidl_generator_traits::value_to_yaml(msg.health_status, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Custom & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace mrt_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use mrt_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const mrt_interfaces::msg::Custom & msg,
  std::ostream & out, size_t indentation = 0)
{
  mrt_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mrt_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const mrt_interfaces::msg::Custom & msg)
{
  return mrt_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<mrt_interfaces::msg::Custom>()
{
  return "mrt_interfaces::msg::Custom";
}

template<>
inline const char * name<mrt_interfaces::msg::Custom>()
{
  return "mrt_interfaces/msg/Custom";
}

template<>
struct has_fixed_size<mrt_interfaces::msg::Custom>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<mrt_interfaces::msg::Custom>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<mrt_interfaces::msg::Custom>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MRT_INTERFACES__MSG__DETAIL__CUSTOM__TRAITS_HPP_
