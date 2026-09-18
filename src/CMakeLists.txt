cmake_minimum_required(VERSION 3.10)
project(Laboratories)

set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)

add_executable(lab6_bin lab6/main.cpp lab6/graphlib.cpp)

add_executable(task3_bin task3.c)