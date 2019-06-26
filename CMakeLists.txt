cmake_minimum_required(VERSION 3.5)

project(HelloWorld)

file(READ "version.txt" ver)

string(REGEX MATCH "VERSION_MAJOR ([0-9]*)" _ ${ver})
set(ver_major ${CMAKE_MATCH_1})

string(REGEX MATCH "VERSION_MINOR ([0-9]*)" _ ${ver})
set(ver_minor ${CMAKE_MATCH_1})

string(REGEX MATCH "VERSION_PATCH ([0-9]*)" _ ${ver})
set(ver_patch ${CMAKE_MATCH_1})

message("version: ${ver_major}.${ver_minor}.${ver_patch}")

# The version number.
set (HelloWorld_VERSION_MAJOR ${ver_major})
set (HelloWorld_VERSION_MINOR ${ver_minor})
set (HelloWorld_VERSION_PATCH ${ver_patch})

# configure a header file to pass some of the CMake settings
# to the source code
configure_file (
	"${PROJECT_SOURCE_DIR}/HelloWorldConfig.h.in"
	"${PROJECT_BINARY_DIR}/HelloWorldConfig.h"
  )


