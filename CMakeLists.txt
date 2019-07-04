cmake_minimum_required(VERSION 3.9)
project(graphQ)

set(CMAKE_CXX_STANDARD 17)
include_directories(${CMAKE_CURRENT_SOURCE_DIR})
add_subdirectory(src)


add_executable(graphQ main.cpp)
target_link_libraries(graphQ graphObj)