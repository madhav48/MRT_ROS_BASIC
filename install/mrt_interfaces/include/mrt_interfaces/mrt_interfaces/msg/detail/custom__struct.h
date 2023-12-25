// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mrt_interfaces:msg/Custom.idl
// generated code does not contain a copyright notice

#ifndef MRT_INTERFACES__MSG__DETAIL__CUSTOM__STRUCT_H_
#define MRT_INTERFACES__MSG__DETAIL__CUSTOM__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'current_location'
#include "geometry_msgs/msg/detail/pose__struct.h"
// Member 'health_status'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/Custom in the package mrt_interfaces.
typedef struct mrt_interfaces__msg__Custom
{
  int32_t rover_id;
  float battery_level;
  geometry_msgs__msg__Pose current_location;
  rosidl_runtime_c__String health_status;
} mrt_interfaces__msg__Custom;

// Struct for a sequence of mrt_interfaces__msg__Custom.
typedef struct mrt_interfaces__msg__Custom__Sequence
{
  mrt_interfaces__msg__Custom * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mrt_interfaces__msg__Custom__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MRT_INTERFACES__MSG__DETAIL__CUSTOM__STRUCT_H_
