cmake_minimum_required(VERSION 3.14)
project(farm)

set(CMAKE_CXX_STANDARD 14)

add_executable(farm main.cpp Animal.cpp Animal.h Farm.cpp Farm.h)