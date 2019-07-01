cmake_minimum_required(VERSION 3.5)

file(STRINGS version.txt HelloWorld_VERSION)
message(STATUS "Building HelloWorld version ${HelloWorld_VERSION}")

# Project configuration, specifying version, languages,
# and the C++ standard to use for the whole project
project(HelloWorld LANGUAGES CXX VERSION ${HelloWorld_VERSION})
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Building options
option(BUILD_TESTS "Build tests" ON)

# External projects
if (BUILD_TESTS)
	add_subdirectory(external/gtest-1.8.1 googletest)
	enable_testing()
# installed as git submodule - if this is your first clone you need to
# git submodule init
# git submodule update
# This is a cmake module and needs no further input from you
endif()

# Configure a header file to pass some of the CMake settings
# to the source code
configure_file(HelloWorldConfig.h.in HelloWorldConfig.h)

# Include directories needed by all sources
include_directories(${CMAKE_CURRENT_BINARY_DIR})
include_directories(include)

# Libraries
add_subdirectory(src/top/nested)

# Executables
add_subdirectory(src/apps)
