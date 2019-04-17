cmake_minimum_required(VERSION 3.13)
project(PostIt)

set(CMAKE_CXX_STANDARD 14)

add_executable(PostIt main.cpp cmake-build-debug/PostIt.cpp cmake-build-debug/PostIt.h)