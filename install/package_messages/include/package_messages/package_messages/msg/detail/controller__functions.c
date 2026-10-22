// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from package_messages:msg/Controller.idl
// generated code does not contain a copyright notice
#include "package_messages/msg/detail/controller__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
package_messages__msg__Controller__init(package_messages__msg__Controller * msg)
{
  if (!msg) {
    return false;
  }
  // velx
  // vely
  // angvel
  return true;
}

void
package_messages__msg__Controller__fini(package_messages__msg__Controller * msg)
{
  if (!msg) {
    return;
  }
  // velx
  // vely
  // angvel
}

bool
package_messages__msg__Controller__are_equal(const package_messages__msg__Controller * lhs, const package_messages__msg__Controller * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // velx
  if (lhs->velx != rhs->velx) {
    return false;
  }
  // vely
  if (lhs->vely != rhs->vely) {
    return false;
  }
  // angvel
  if (lhs->angvel != rhs->angvel) {
    return false;
  }
  return true;
}

bool
package_messages__msg__Controller__copy(
  const package_messages__msg__Controller * input,
  package_messages__msg__Controller * output)
{
  if (!input || !output) {
    return false;
  }
  // velx
  output->velx = input->velx;
  // vely
  output->vely = input->vely;
  // angvel
  output->angvel = input->angvel;
  return true;
}

package_messages__msg__Controller *
package_messages__msg__Controller__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  package_messages__msg__Controller * msg = (package_messages__msg__Controller *)allocator.allocate(sizeof(package_messages__msg__Controller), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(package_messages__msg__Controller));
  bool success = package_messages__msg__Controller__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
package_messages__msg__Controller__destroy(package_messages__msg__Controller * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    package_messages__msg__Controller__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
package_messages__msg__Controller__Sequence__init(package_messages__msg__Controller__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  package_messages__msg__Controller * data = NULL;

  if (size) {
    data = (package_messages__msg__Controller *)allocator.zero_allocate(size, sizeof(package_messages__msg__Controller), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = package_messages__msg__Controller__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        package_messages__msg__Controller__fini(&data[i - 1]);
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
package_messages__msg__Controller__Sequence__fini(package_messages__msg__Controller__Sequence * array)
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
      package_messages__msg__Controller__fini(&array->data[i]);
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

package_messages__msg__Controller__Sequence *
package_messages__msg__Controller__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  package_messages__msg__Controller__Sequence * array = (package_messages__msg__Controller__Sequence *)allocator.allocate(sizeof(package_messages__msg__Controller__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = package_messages__msg__Controller__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
package_messages__msg__Controller__Sequence__destroy(package_messages__msg__Controller__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    package_messages__msg__Controller__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
package_messages__msg__Controller__Sequence__are_equal(const package_messages__msg__Controller__Sequence * lhs, const package_messages__msg__Controller__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!package_messages__msg__Controller__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
package_messages__msg__Controller__Sequence__copy(
  const package_messages__msg__Controller__Sequence * input,
  package_messages__msg__Controller__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(package_messages__msg__Controller);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    package_messages__msg__Controller * data =
      (package_messages__msg__Controller *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!package_messages__msg__Controller__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          package_messages__msg__Controller__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!package_messages__msg__Controller__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
