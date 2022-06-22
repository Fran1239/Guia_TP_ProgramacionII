cmake_minimum_required(VERSION 3.21)
project(eje_1)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(eje_1
        fecha.cpp
        fecha.h
        main_fecha.cpp)
