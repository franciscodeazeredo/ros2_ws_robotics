// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ps4_controller:msg/PS4.idl
// generated code does not contain a copyright notice

#ifndef PS4_CONTROLLER__MSG__DETAIL__PS4__STRUCT_H_
#define PS4_CONTROLLER__MSG__DETAIL__PS4__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'axes'
// Member 'buttons'
// Member 'numpad'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/PS4 in the package ps4_controller.
typedef struct ps4_controller__msg__PS4
{
  rosidl_runtime_c__float__Sequence axes;
  rosidl_runtime_c__int32__Sequence buttons;
  rosidl_runtime_c__int32__Sequence numpad;
} ps4_controller__msg__PS4;

// Struct for a sequence of ps4_controller__msg__PS4.
typedef struct ps4_controller__msg__PS4__Sequence
{
  ps4_controller__msg__PS4 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ps4_controller__msg__PS4__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PS4_CONTROLLER__MSG__DETAIL__PS4__STRUCT_H_
