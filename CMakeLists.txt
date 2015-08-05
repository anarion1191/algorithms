cmake_minimum_required(VERSION 3.2)

project(algorithms)

add_definitions("-Wall -std=c++11")

include_directories(${PROJECT_SOURCE_DIR}/src/include)

add_executable(sequential_search ${PROJECT_SOURCE_DIR}/src/sequential_search.cpp)
add_executable(binary_search ${PROJECT_SOURCE_DIR}/src/binary_search.cpp)
