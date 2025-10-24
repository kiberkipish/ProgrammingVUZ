cmake_minimum_required(VERSION 3.23)

set(project "Lab5")
project(${project})

set(CMAKE_CXX_STANDARD 20)

set(${project}_SOURCES
        Lab5.cpp)

add_subdirectory(source)

set(${project}_SOURCE_LIST
        ${${project}_SOURCES})

add_executable(${project}
        ${${project}_SOURCE_LIST})

target_link_libraries(${project} source)