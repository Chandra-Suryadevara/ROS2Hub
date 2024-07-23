# generated from
# rosidl_cmake/cmake/template/rosidl_cmake_export_typesupport_targets.cmake.in

set(_exported_typesupport_targets
  "__rosidl_generator_c:firstservicepkg__rosidl_generator_c;__rosidl_typesupport_fastrtps_c:firstservicepkg__rosidl_typesupport_fastrtps_c;__rosidl_generator_cpp:firstservicepkg__rosidl_generator_cpp;__rosidl_typesupport_fastrtps_cpp:firstservicepkg__rosidl_typesupport_fastrtps_cpp;__rosidl_typesupport_introspection_c:firstservicepkg__rosidl_typesupport_introspection_c;__rosidl_typesupport_c:firstservicepkg__rosidl_typesupport_c;__rosidl_typesupport_introspection_cpp:firstservicepkg__rosidl_typesupport_introspection_cpp;__rosidl_typesupport_cpp:firstservicepkg__rosidl_typesupport_cpp;__rosidl_generator_py:firstservicepkg__rosidl_generator_py")

# populate firstservicepkg_TARGETS_<suffix>
if(NOT _exported_typesupport_targets STREQUAL "")
  # loop over typesupport targets
  foreach(_tuple ${_exported_typesupport_targets})
    string(REPLACE ":" ";" _tuple "${_tuple}")
    list(GET _tuple 0 _suffix)
    list(GET _tuple 1 _target)

    set(_target "firstservicepkg::${_target}")
    if(NOT TARGET "${_target}")
      # the exported target must exist
      message(WARNING "Package 'firstservicepkg' exports the typesupport target '${_target}' which doesn't exist")
    else()
      list(APPEND firstservicepkg_TARGETS${_suffix} "${_target}")
    endif()
  endforeach()
endif()
