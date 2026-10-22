# generated from rosidl_cmake/cmake/rosidl_cmake_aggregate_target-extras.cmake.in

# Create a convenience aggregate target package_messages::package_messages
# that links all generated interface targets, so downstream packages can use
# a single modern CMake target name instead of ${package_messages_TARGETS}.
if(package_messages_TARGETS AND NOT TARGET package_messages::package_messages)
  add_library(package_messages::package_messages INTERFACE IMPORTED)
  set_target_properties(package_messages::package_messages PROPERTIES
    INTERFACE_LINK_LIBRARIES "${package_messages_TARGETS}")
endif()
