cmake_minimum_required(VERSION 3.16)
project(common_lib)

set(COMMON_SOURCES
    ${CMAKE_CURRENT_LIST_DIR}/utils.cpp ${CMAKE_CURRENT_LIST_DIR}/utils.h
    CACHE PATH
    "Common source files")