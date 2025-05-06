cmake_minimum_required(VERSION 3.10)
project(CppCIExample)

set(CMAKE_CXX_STANDARD 11)

add_executable(main main.cpp math_utils.cpp)

enable_testing()
add_subdirectory(test)
