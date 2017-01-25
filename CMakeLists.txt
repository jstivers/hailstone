cmake_minimum_required(VERSION 3.6)
project(hailstone)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp)
add_executable(hailstone ${SOURCE_FILES})