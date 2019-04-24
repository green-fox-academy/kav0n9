cmake_minimum_required(VERSION 3.13)
project(Instruments)

set(CMAKE_CXX_STANDARD 14)

add_executable(Instruments main.cpp Instruments.cpp Instruments.h StringedInstruments.cpp StringedInstruments.h ElectricGuitar.cpp ElectricGuitar.h Violin.cpp Violin.h BassGuitar.cpp BassGuitar.h)