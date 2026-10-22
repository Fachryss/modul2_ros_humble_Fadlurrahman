// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from package_messages:msg/Controller.idl
// generated code does not contain a copyright notice

#ifndef PACKAGE_MESSAGES__MSG__DETAIL__CONTROLLER__STRUCT_H_
#define PACKAGE_MESSAGES__MSG__DETAIL__CONTROLLER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Controller in the package package_messages.
typedef struct package_messages__msg__Controller
{
  float velx;
  float vely;
  float angvel;
} package_messages__msg__Controller;

// Struct for a sequence of package_messages__msg__Controller.
typedef struct package_messages__msg__Controller__Sequence
{
  package_messages__msg__Controller * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} package_messages__msg__Controller__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PACKAGE_MESSAGES__MSG__DETAIL__CONTROLLER__STRUCT_H_
