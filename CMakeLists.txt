cmake_minimum_required(VERSION 3.22)
project(Hexagram)

set(CMAKE_CXX_STANDARD 14)

add_executable(Hexagram
        src/HexVec.cpp
        src/main.cpp)

target_include_directories(Hexagram PRIVATE lib)
