cmake_minimum_required(VERSION 3.9)
project(Lab8)

set(CMAKE_CXX_STANDARD 17)

add_subdirectory(src/lab-lib lab-lib)
link_libraries(lab-lib)

add_executable(Lab8 Lab8\main.c)
