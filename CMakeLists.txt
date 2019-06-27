cmake_minimum_required(VERSION 3.5)

file(STRINGS version.txt HelloWorld_VERSION)
message(STATUS "Building HelloWorld version ${HelloWorld_VERSION}")

project(HelloWorld LANGUAGES CXX VERSION ${HelloWorld_VERSION})

list(APPEND CMAKE_MODULE_PATH ${PROJECT_SOURCE_DIR}/cmake_modules)
set(USE_GTEST yes)
include (gtest)

ExternalProject_Get_Property(gtest install_dir)
set(GTEST_ROOT ${install_dir})
find_package(GTest REQUIRED)

include_directories(${GTEST_INCLUDE_DIR})

# configure a header file to pass some of the CMake settings
# to the source code
configure_file (HelloWorldConfig.h.in HelloWorldConfig.h)
include_directories(${CMAKE_CURRENT_BINARY_DIR})

# The whole project requires C++11
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(include)

#LIBRARIES
add_subdirectory (src/top/nested)

#EXECUTEABLES
add_subdirectory(src/apps)

#TESTS

add_subdirectory(tests/top/nested/)
add_dependencies(twave gtest)
# Link test executable against gtest & gtest_main

add_test(
    NAME twave
    COMMAND twave
)
