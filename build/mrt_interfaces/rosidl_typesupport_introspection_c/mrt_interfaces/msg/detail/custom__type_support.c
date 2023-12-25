// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from mrt_interfaces:msg/Custom.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "mrt_interfaces/msg/detail/custom__rosidl_typesupport_introspection_c.h"
#include "mrt_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "mrt_interfaces/msg/detail/custom__functions.h"
#include "mrt_interfaces/msg/detail/custom__struct.h"


// Include directives for member types
// Member `current_location`
#include "geometry_msgs/msg/pose.h"
// Member `current_location`
#include "geometry_msgs/msg/detail/pose__rosidl_typesupport_introspection_c.h"
// Member `health_status`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void mrt_interfaces__msg__Custom__rosidl_typesupport_introspection_c__Custom_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  mrt_interfaces__msg__Custom__init(message_memory);
}

void mrt_interfaces__msg__Custom__rosidl_typesupport_introspection_c__Custom_fini_function(void * message_memory)
{
  mrt_interfaces__msg__Custom__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember mrt_interfaces__msg__Custom__rosidl_typesupport_introspection_c__Custom_message_member_array[4] = {
  {
    "rover_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrt_interfaces__msg__Custom, rover_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "battery_level",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrt_interfaces__msg__Custom, battery_level),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "current_location",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrt_interfaces__msg__Custom, current_location),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "health_status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrt_interfaces__msg__Custom, health_status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers mrt_interfaces__msg__Custom__rosidl_typesupport_introspection_c__Custom_message_members = {
  "mrt_interfaces__msg",  // message namespace
  "Custom",  // message name
  4,  // number of fields
  sizeof(mrt_interfaces__msg__Custom),
  mrt_interfaces__msg__Custom__rosidl_typesupport_introspection_c__Custom_message_member_array,  // message members
  mrt_interfaces__msg__Custom__rosidl_typesupport_introspection_c__Custom_init_function,  // function to initialize message memory (memory has to be allocated)
  mrt_interfaces__msg__Custom__rosidl_typesupport_introspection_c__Custom_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t mrt_interfaces__msg__Custom__rosidl_typesupport_introspection_c__Custom_message_type_support_handle = {
  0,
  &mrt_interfaces__msg__Custom__rosidl_typesupport_introspection_c__Custom_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_mrt_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mrt_interfaces, msg, Custom)() {
  mrt_interfaces__msg__Custom__rosidl_typesupport_introspection_c__Custom_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Pose)();
  if (!mrt_interfaces__msg__Custom__rosidl_typesupport_introspection_c__Custom_message_type_support_handle.typesupport_identifier) {
    mrt_interfaces__msg__Custom__rosidl_typesupport_introspection_c__Custom_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &mrt_interfaces__msg__Custom__rosidl_typesupport_introspection_c__Custom_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
