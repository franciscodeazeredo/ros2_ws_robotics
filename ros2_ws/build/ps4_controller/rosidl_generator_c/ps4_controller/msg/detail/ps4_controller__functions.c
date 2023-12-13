// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ps4_controller:msg/Ps4Controller.idl
// generated code does not contain a copyright notice
#include "ps4_controller/msg/detail/ps4_controller__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `axes`
// Member `buttons`
// Member `numpad`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
ps4_controller__msg__Ps4Controller__init(ps4_controller__msg__Ps4Controller * msg)
{
  if (!msg) {
    return false;
  }
  // axes
  if (!rosidl_runtime_c__float__Sequence__init(&msg->axes, 0)) {
    ps4_controller__msg__Ps4Controller__fini(msg);
    return false;
  }
  // buttons
  if (!rosidl_runtime_c__int32__Sequence__init(&msg->buttons, 0)) {
    ps4_controller__msg__Ps4Controller__fini(msg);
    return false;
  }
  // numpad
  if (!rosidl_runtime_c__int32__Sequence__init(&msg->numpad, 0)) {
    ps4_controller__msg__Ps4Controller__fini(msg);
    return false;
  }
  return true;
}

void
ps4_controller__msg__Ps4Controller__fini(ps4_controller__msg__Ps4Controller * msg)
{
  if (!msg) {
    return;
  }
  // axes
  rosidl_runtime_c__float__Sequence__fini(&msg->axes);
  // buttons
  rosidl_runtime_c__int32__Sequence__fini(&msg->buttons);
  // numpad
  rosidl_runtime_c__int32__Sequence__fini(&msg->numpad);
}

bool
ps4_controller__msg__Ps4Controller__are_equal(const ps4_controller__msg__Ps4Controller * lhs, const ps4_controller__msg__Ps4Controller * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // axes
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->axes), &(rhs->axes)))
  {
    return false;
  }
  // buttons
  if (!rosidl_runtime_c__int32__Sequence__are_equal(
      &(lhs->buttons), &(rhs->buttons)))
  {
    return false;
  }
  // numpad
  if (!rosidl_runtime_c__int32__Sequence__are_equal(
      &(lhs->numpad), &(rhs->numpad)))
  {
    return false;
  }
  return true;
}

bool
ps4_controller__msg__Ps4Controller__copy(
  const ps4_controller__msg__Ps4Controller * input,
  ps4_controller__msg__Ps4Controller * output)
{
  if (!input || !output) {
    return false;
  }
  // axes
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->axes), &(output->axes)))
  {
    return false;
  }
  // buttons
  if (!rosidl_runtime_c__int32__Sequence__copy(
      &(input->buttons), &(output->buttons)))
  {
    return false;
  }
  // numpad
  if (!rosidl_runtime_c__int32__Sequence__copy(
      &(input->numpad), &(output->numpad)))
  {
    return false;
  }
  return true;
}

ps4_controller__msg__Ps4Controller *
ps4_controller__msg__Ps4Controller__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ps4_controller__msg__Ps4Controller * msg = (ps4_controller__msg__Ps4Controller *)allocator.allocate(sizeof(ps4_controller__msg__Ps4Controller), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ps4_controller__msg__Ps4Controller));
  bool success = ps4_controller__msg__Ps4Controller__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ps4_controller__msg__Ps4Controller__destroy(ps4_controller__msg__Ps4Controller * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ps4_controller__msg__Ps4Controller__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ps4_controller__msg__Ps4Controller__Sequence__init(ps4_controller__msg__Ps4Controller__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ps4_controller__msg__Ps4Controller * data = NULL;

  if (size) {
    data = (ps4_controller__msg__Ps4Controller *)allocator.zero_allocate(size, sizeof(ps4_controller__msg__Ps4Controller), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ps4_controller__msg__Ps4Controller__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ps4_controller__msg__Ps4Controller__fini(&data[i - 1]);
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
ps4_controller__msg__Ps4Controller__Sequence__fini(ps4_controller__msg__Ps4Controller__Sequence * array)
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
      ps4_controller__msg__Ps4Controller__fini(&array->data[i]);
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

ps4_controller__msg__Ps4Controller__Sequence *
ps4_controller__msg__Ps4Controller__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ps4_controller__msg__Ps4Controller__Sequence * array = (ps4_controller__msg__Ps4Controller__Sequence *)allocator.allocate(sizeof(ps4_controller__msg__Ps4Controller__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ps4_controller__msg__Ps4Controller__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ps4_controller__msg__Ps4Controller__Sequence__destroy(ps4_controller__msg__Ps4Controller__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ps4_controller__msg__Ps4Controller__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ps4_controller__msg__Ps4Controller__Sequence__are_equal(const ps4_controller__msg__Ps4Controller__Sequence * lhs, const ps4_controller__msg__Ps4Controller__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ps4_controller__msg__Ps4Controller__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ps4_controller__msg__Ps4Controller__Sequence__copy(
  const ps4_controller__msg__Ps4Controller__Sequence * input,
  ps4_controller__msg__Ps4Controller__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ps4_controller__msg__Ps4Controller);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ps4_controller__msg__Ps4Controller * data =
      (ps4_controller__msg__Ps4Controller *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ps4_controller__msg__Ps4Controller__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ps4_controller__msg__Ps4Controller__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ps4_controller__msg__Ps4Controller__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
