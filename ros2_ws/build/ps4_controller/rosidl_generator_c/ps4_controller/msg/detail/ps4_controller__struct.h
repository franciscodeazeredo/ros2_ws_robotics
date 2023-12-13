// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ps4_controller:msg/Ps4Controller.idl
// generated code does not contain a copyright notice

#ifndef PS4_CONTROLLER__MSG__DETAIL__PS4_CONTROLLER__STRUCT_H_
#define PS4_CONTROLLER__MSG__DETAIL__PS4_CONTROLLER__STRUCT_H_

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

/// Struct defined in msg/Ps4Controller in the package ps4_controller.
/**
  * Ps4Controller.msg
 */
typedef struct ps4_controller__msg__Ps4Controller
{
  rosidl_runtime_c__float__Sequence axes;
  rosidl_runtime_c__int32__Sequence buttons;
  rosidl_runtime_c__int32__Sequence numpad;
} ps4_controller__msg__Ps4Controller;

// Struct for a sequence of ps4_controller__msg__Ps4Controller.
typedef struct ps4_controller__msg__Ps4Controller__Sequence
{
  ps4_controller__msg__Ps4Controller * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ps4_controller__msg__Ps4Controller__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PS4_CONTROLLER__MSG__DETAIL__PS4_CONTROLLER__STRUCT_H_
