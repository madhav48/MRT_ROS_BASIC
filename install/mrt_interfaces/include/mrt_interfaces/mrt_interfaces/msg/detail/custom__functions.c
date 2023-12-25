// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mrt_interfaces:msg/Custom.idl
// generated code does not contain a copyright notice
#include "mrt_interfaces/msg/detail/custom__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `current_location`
#include "geometry_msgs/msg/detail/pose__functions.h"
// Member `health_status`
#include "rosidl_runtime_c/string_functions.h"

bool
mrt_interfaces__msg__Custom__init(mrt_interfaces__msg__Custom * msg)
{
  if (!msg) {
    return false;
  }
  // rover_id
  // battery_level
  // current_location
  if (!geometry_msgs__msg__Pose__init(&msg->current_location)) {
    mrt_interfaces__msg__Custom__fini(msg);
    return false;
  }
  // health_status
  if (!rosidl_runtime_c__String__init(&msg->health_status)) {
    mrt_interfaces__msg__Custom__fini(msg);
    return false;
  }
  return true;
}

void
mrt_interfaces__msg__Custom__fini(mrt_interfaces__msg__Custom * msg)
{
  if (!msg) {
    return;
  }
  // rover_id
  // battery_level
  // current_location
  geometry_msgs__msg__Pose__fini(&msg->current_location);
  // health_status
  rosidl_runtime_c__String__fini(&msg->health_status);
}

bool
mrt_interfaces__msg__Custom__are_equal(const mrt_interfaces__msg__Custom * lhs, const mrt_interfaces__msg__Custom * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // rover_id
  if (lhs->rover_id != rhs->rover_id) {
    return false;
  }
  // battery_level
  if (lhs->battery_level != rhs->battery_level) {
    return false;
  }
  // current_location
  if (!geometry_msgs__msg__Pose__are_equal(
      &(lhs->current_location), &(rhs->current_location)))
  {
    return false;
  }
  // health_status
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->health_status), &(rhs->health_status)))
  {
    return false;
  }
  return true;
}

bool
mrt_interfaces__msg__Custom__copy(
  const mrt_interfaces__msg__Custom * input,
  mrt_interfaces__msg__Custom * output)
{
  if (!input || !output) {
    return false;
  }
  // rover_id
  output->rover_id = input->rover_id;
  // battery_level
  output->battery_level = input->battery_level;
  // current_location
  if (!geometry_msgs__msg__Pose__copy(
      &(input->current_location), &(output->current_location)))
  {
    return false;
  }
  // health_status
  if (!rosidl_runtime_c__String__copy(
      &(input->health_status), &(output->health_status)))
  {
    return false;
  }
  return true;
}

mrt_interfaces__msg__Custom *
mrt_interfaces__msg__Custom__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrt_interfaces__msg__Custom * msg = (mrt_interfaces__msg__Custom *)allocator.allocate(sizeof(mrt_interfaces__msg__Custom), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mrt_interfaces__msg__Custom));
  bool success = mrt_interfaces__msg__Custom__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mrt_interfaces__msg__Custom__destroy(mrt_interfaces__msg__Custom * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mrt_interfaces__msg__Custom__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mrt_interfaces__msg__Custom__Sequence__init(mrt_interfaces__msg__Custom__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrt_interfaces__msg__Custom * data = NULL;

  if (size) {
    data = (mrt_interfaces__msg__Custom *)allocator.zero_allocate(size, sizeof(mrt_interfaces__msg__Custom), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mrt_interfaces__msg__Custom__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mrt_interfaces__msg__Custom__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
mrt_interfaces__msg__Custom__Sequence__fini(mrt_interfaces__msg__Custom__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      mrt_interfaces__msg__Custom__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

mrt_interfaces__msg__Custom__Sequence *
mrt_interfaces__msg__Custom__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrt_interfaces__msg__Custom__Sequence * array = (mrt_interfaces__msg__Custom__Sequence *)allocator.allocate(sizeof(mrt_interfaces__msg__Custom__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mrt_interfaces__msg__Custom__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mrt_interfaces__msg__Custom__Sequence__destroy(mrt_interfaces__msg__Custom__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mrt_interfaces__msg__Custom__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mrt_interfaces__msg__Custom__Sequence__are_equal(const mrt_interfaces__msg__Custom__Sequence * lhs, const mrt_interfaces__msg__Custom__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mrt_interfaces__msg__Custom__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mrt_interfaces__msg__Custom__Sequence__copy(
  const mrt_interfaces__msg__Custom__Sequence * input,
  mrt_interfaces__msg__Custom__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mrt_interfaces__msg__Custom);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mrt_interfaces__msg__Custom * data =
      (mrt_interfaces__msg__Custom *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mrt_interfaces__msg__Custom__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mrt_interfaces__msg__Custom__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mrt_interfaces__msg__Custom__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
