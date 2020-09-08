cmake_minimum_required(VERSION 3.1)
project(algebra VERSION 1.0.1 DESCRIPTION "library for computing simple algebra")

# for installing matrix library
add_library(matrix SHARED
  src/matrix_int.cpp
  src/matrix_double.cpp
  src/matrix_float.cpp
  src/vertex_int.cpp
  src/vertex_double.cpp
  src/vertex_float.cpp
)
set_target_properties(matrix PROPERTIES
  VERSION ${PROJECT_VERSION}
  SOVERSION 1
  PUBLIC_HEADER include/algebra/matrix/matrix.hpp
)
configure_file(matrix.pc.in matrix.pc @ONLY)
target_include_directories(matrix PRIVATE src)
target_include_directories(matrix PRIVATE include)
install(TARGETS matrix
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  PUBLIC_HEADER DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}
)
install(FILES ${CMAKE_BINARY_DIR}/matrix.pc
  DESTINATION ${CMAKE_INSTALL_DATAROOTDIR}/pkgconfig
)
# -----------------------------
# for installing vertex library
add_library(vertex SHARED
  src/vertex_int.cpp
  src/vertex_double.cpp
  src/vertex_float.cpp
)
set_target_properties(vertex PROPERTIES
  VERSION ${PROJECT_VERSION}
  SOVERSION 1
  PUBLIC_HEADER include/algebra/vertex/matrix.hpp
)
configure_file(vertex.pc.in vertex.pc @ONLY)
target_include_directories(vertex PRIVATE src)
target_include_directories(vertex PRIVATE include)
install(TARGETS vertex
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  PUBLIC_HEADER DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}
)
install(FILES ${CMAKE_BINARY_DIR}/vertex.pc
  DESTINATION ${CMAKE_INSTALL_DATAROOTDIR}/pkgconfig
)
# -----------------------------

# for linking libraries to executable
function(link_lib executable_name library_name)
  add_executable(${executable_name} src/${executable_name}.cpp)
  target_link_libraries(${executable_name} ${library_name})
endfunction()

# for linking libraries to executable for testing
function(link_lib_to_test executable_name library_name)
  add_executable(${executable_name} test/${executable_name}.cpp)
  target_link_libraries(${executable_name} ${library_name})
endfunction()

link_lib_to_test(test_matrix matrix)