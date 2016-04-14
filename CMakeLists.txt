project(HackerRank C)

cmake_minimum_required(VERSION 2.8.7) #can prob be lower, but w/e

macro(use_c99)
  if (CMAKE_VERSION VERSION_LESS "3.1")
    if (CMAKE_C_COMPILER_ID STREQUAL "GNU")
      set (CMAKE_C_FLAGS "--std=gnu99 ${CMAKE_C_FLAGS}")
    endif ()
  else ()
    set (CMAKE_C_STANDARD 99)
  endif ()
endmacro(use_c99)

macro(add_c_files)
  file(GLOB files "*.c")
  foreach(filename ${files})
    get_filename_component(exec_name ${filename} NAME_WE)
    message(STATUS "Creating program `" ${exec_name} "' for file `" ${filename} "'")
    add_executable(${exec_name} ${filename})
  endforeach()
endmacro(add_c_files)

add_subdirectory(algorithms)
add_subdirectory(mathematics)
add_subdirectory(contests)
