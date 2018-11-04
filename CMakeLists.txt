cmake_minimum_required(VERSION 3.10)
project(MyLex)

set(CMAKE_CXX_STANDARD 11)

add_executable(MyLex src/main.cpp src/FA.cpp src/FA.h src/util.h src/util.cpp)