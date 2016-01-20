cmake_minimum_required(VERSION 3.3)
project(assign_1)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.c temp.c temp.h)
add_executable(assign_1 ${SOURCE_FILES})