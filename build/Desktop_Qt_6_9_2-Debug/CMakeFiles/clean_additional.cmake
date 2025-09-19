# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/Dental-clinic_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/Dental-clinic_autogen.dir/ParseCache.txt"
  "Dental-clinic_autogen"
  )
endif()
