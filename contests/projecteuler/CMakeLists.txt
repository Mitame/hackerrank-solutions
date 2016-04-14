project(HackerRank/Contests/ProjectEuler)
use_c99()

file(GLOB files "*.c")
foreach(filename ${files})
  get_filename_component(exec_name ${filename} NAME_WE)
  message(STATUS "Creating program `" ${exec_name} "' for file `" ${filename} "'")
  add_executable(${exec_name} ${filename})
endforeach()
