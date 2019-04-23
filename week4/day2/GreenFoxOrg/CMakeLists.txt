cmake_minimum_required(VERSION 3.13)
project(GreenFoxOrg)

set(CMAKE_CXX_STANDARD 14)

add_executable(GreenFoxOrg main.cpp Person.cpp Student.cpp Student.h Person.h Mentor.cpp Mentor.h Sponsor.cpp Sponsor.h Cohort.cpp Cohort.h)