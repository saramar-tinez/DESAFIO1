# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\DESAFIO_1_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\DESAFIO_1_autogen.dir\\ParseCache.txt"
  "DESAFIO_1_autogen"
  )
endif()
