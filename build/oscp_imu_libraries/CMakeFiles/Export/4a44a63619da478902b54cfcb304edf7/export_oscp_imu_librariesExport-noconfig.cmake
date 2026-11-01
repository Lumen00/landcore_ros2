#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "oscp_imu_libraries::oscp_imu_libraries" for configuration ""
set_property(TARGET oscp_imu_libraries::oscp_imu_libraries APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(oscp_imu_libraries::oscp_imu_libraries PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_NOCONFIG "C"
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/liboscp_imu_libraries.a"
  )

list(APPEND _cmake_import_check_targets oscp_imu_libraries::oscp_imu_libraries )
list(APPEND _cmake_import_check_files_for_oscp_imu_libraries::oscp_imu_libraries "${_IMPORT_PREFIX}/lib/liboscp_imu_libraries.a" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
