#----------------------------------------------------------------
# Generated CMake target import file for configuration "Debug".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "mrover::mrover__rosidl_generator_py" for configuration "Debug"
set_property(TARGET mrover::mrover__rosidl_generator_py APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(mrover::mrover__rosidl_generator_py PROPERTIES
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/lib/libmrover__rosidl_generator_py.so"
  IMPORTED_SONAME_DEBUG "libmrover__rosidl_generator_py.so"
  )

list(APPEND _cmake_import_check_targets mrover::mrover__rosidl_generator_py )
list(APPEND _cmake_import_check_files_for_mrover::mrover__rosidl_generator_py "${_IMPORT_PREFIX}/lib/libmrover__rosidl_generator_py.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
