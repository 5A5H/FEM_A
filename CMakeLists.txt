# CMake File
cmake_minimum_required(VERSION 3.0)
project(FEM_A VERSION 0.1)

# set cpp standard
set(CMAKE_CXX_STANDARD 17)

# gather cpp files
set(CPP_FILES main.cpp)

# build the executable
add_executable(fem_a ${CPP_FILES})