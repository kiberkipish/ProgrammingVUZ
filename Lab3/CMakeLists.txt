cmake_minimum_required(VERSION 3.28)

set(project "Lab3")

project(${project})

set(CMAKE_CXX_STANDARD 20)

set(${project}_SOURCES
    Lab3.cpp)

set(${project}_SOURCE_LIST
    ${${project}_SOURCES})

add_executable(${project}
    ${${project}_SOURCE_LIST})