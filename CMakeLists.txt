cmake_minimum_required(VERSION 3.29)
project(g2d)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(g2d
    main.cpp
    miniwin.cpp
    miniwin.h)
