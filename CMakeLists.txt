cmake_minimum_required(VERSION 3.3)
project(LR1)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp Vector.cpp Vector.h)
add_executable(LR1 ${SOURCE_FILES})