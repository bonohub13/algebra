cmake_minimum_required(VERSION 3.1)
project(algebra)

add_executable(test test/test.cpp)

# ----- only use this when add_library is used -----
function(link_lib executable_name library_name)
	add_library(${library_name} STATIC src/${library_name}.cpp)
	target_link_libraries(${executable_name} ${library_name})
	target_include_directories(${executable_name} PRIVATE include)
endfunction()

link_lib(test vertex)