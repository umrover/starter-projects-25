#----------------------------------------------------------------
# Generated CMake target import file for configuration "Debug".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "mrover::mrover__rosidl_typesupport_cpp" for configuration "Debug"
set_property(TARGET mrover::mrover__rosidl_typesupport_cpp APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(mrover::mrover__rosidl_typesupport_cpp PROPERTIES
  IMPORTED_LINK_DEPENDENT_LIBRARIES_DEBUG "rosidl_runtime_c::rosidl_runtime_c;rosidl_typesupport_cpp::rosidl_typesupport_cpp;rosidl_typesupport_c::rosidl_typesupport_c"
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/lib/libmrover__rosidl_typesupport_cpp.so"
  IMPORTED_SONAME_DEBUG "libmrover__rosidl_typesupport_cpp.so"
  )

list(APPEND _cmake_import_check_targets mrover::mrover__rosidl_typesupport_cpp )
list(APPEND _cmake_import_check_files_for_mrover::mrover__rosidl_typesupport_cpp "${_IMPORT_PREFIX}/lib/libmrover__rosidl_typesupport_cpp.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
