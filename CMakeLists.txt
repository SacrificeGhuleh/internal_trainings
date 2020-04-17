cmake_minimum_required(VERSION 3.16)
project(internal_trainings)

set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR})
#set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR})
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR})

set(COMMON_LIB_PATH ${CMAKE_CURRENT_LIST_DIR}/common CACHE PATH "Path to common sources")

include_directories(${COMMON_LIB_PATH})
add_subdirectory(unions-training)
add_subdirectory(templates-training)