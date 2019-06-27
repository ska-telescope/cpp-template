cmake_minimum_required(VERSION 3.5)

file(STRINGS version.txt HelloWorld_VERSION)
message(STATUS "Building HelloWorld version ${HelloWorld_VERSION}")

project(HelloWorld LANGUAGES CXX VERSION ${HelloWorld_VERSION})

list(APPEND CMAKE_MODULE_PATH ${PROJECT_SOURCE_DIR}/cmake_modules)
include (gtest-install)

ExternalProject_Get_Property(gtest-install install_dir)

set(GTEST_INCLUDE ${install_dir}/include)
set(GTEST_GTEST_LIBRARY ${install_dir}/lib/libgtest.a)
set(GTEST_GTEST_MAIN_LIBRARY ${install_dir}/lib/libgtest_main.a)
set(GTEST_MOCK_LIBRARY ${install_dir}/lib/libmock.a)
set(GTEST_MOCK_MAIN_LIBRARY ${install_dir}/lib/libmock_main.a)

include_directories(${GTEST_INCLUDE})


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
add_dependencies(twave gtest-install)
# Link test executable against gtest & gtest_main
enable_testing()

add_test(
    NAME twave
    COMMAND twave
)
