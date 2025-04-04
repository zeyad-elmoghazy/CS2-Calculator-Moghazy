cmake_minimum_required(VERSION 3.10)
project(Calculator)

set(CMAKE_CXX_STANDARD 11)  # Optional: Use C++11

add_executable(test
    test.cpp
    calculator.cpp
    calculator.h
)