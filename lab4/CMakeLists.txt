cmake_minimum_required(VERSION 3.23)
project(lab4)

set(CMAKE_CXX_STANDARD 17)

add_executable(lab4 main.cpp fuel_type.cpp fuel_type.h Engine.cpp Engine.h Car.h Car.cpp)