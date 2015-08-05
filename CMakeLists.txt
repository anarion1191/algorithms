cmake_minimum_required(VERSION 3.2)

project(algorithms)

include_directories(${PROJECT_SOURCE_DIR}/src/include)

file(GLOB SOURCES ${PROJECT_SOURCE_DIR}/src/*.cpp)

add_executable(algorithms ${SOURCES})
