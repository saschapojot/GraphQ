cmake_minimum_required(VERSION 3.9)


set(CMAKE_CXX_STANDARD 17)

include_directories(../include)

add_library(graphObj edgeContainer.cpp graphQ.cpp vertexContainer.cpp)