# generated from
# rosidl_cmake/cmake/template/rosidl_cmake_export_typesupport_targets.cmake.in

set(_exported_typesupport_targets
  "__rosidl_generator_c:magcal_wrapper__rosidl_generator_c;__rosidl_typesupport_fastrtps_c:magcal_wrapper__rosidl_typesupport_fastrtps_c;__rosidl_generator_cpp:magcal_wrapper__rosidl_generator_cpp;__rosidl_typesupport_fastrtps_cpp:magcal_wrapper__rosidl_typesupport_fastrtps_cpp;__rosidl_typesupport_introspection_c:magcal_wrapper__rosidl_typesupport_introspection_c;__rosidl_typesupport_c:magcal_wrapper__rosidl_typesupport_c;__rosidl_typesupport_introspection_cpp:magcal_wrapper__rosidl_typesupport_introspection_cpp;__rosidl_typesupport_cpp:magcal_wrapper__rosidl_typesupport_cpp;:magcal_wrapper__rosidl_generator_py")

# populate magcal_wrapper_TARGETS_<suffix>
if(NOT _exported_typesupport_targets STREQUAL "")
  # loop over typesupport targets
  foreach(_tuple ${_exported_typesupport_targets})
    string(REPLACE ":" ";" _tuple "${_tuple}")
    list(GET _tuple 0 _suffix)
    list(GET _tuple 1 _target)

    set(_target "magcal_wrapper::${_target}")
    if(NOT TARGET "${_target}")
      # the exported target must exist
      message(WARNING "Package 'magcal_wrapper' exports the typesupport target '${_target}' which doesn't exist")
    else()
      list(APPEND magcal_wrapper_TARGETS${_suffix} "${_target}")
    endif()
  endforeach()
endif()
