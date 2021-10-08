cmake_minimum_required(VERSION 3.5)

file(STRINGS version.txt HelloWorld_VERSION)
message(STATUS "Building HelloWorld version ${HelloWorld_VERSION}")

# Project configuration, specifying version, languages,
# and the C++ standard to use for the whole project
project(HelloWorld LANGUAGES CXX VERSION ${HelloWorld_VERSION})
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_MODULE_PATH ${PROJECT_SOURCE_DIR}/resources/cmake-modules)
include(dependencies)
include(lint)
include(CTest)

# External projects
if (BUILD_TESTING)
  add_subdirectory(resources/googletest googletest EXCLUDE_FROM_ALL)
# installed as git submodule - if this is your first clone you need to
# git submodule init
# git submodule update
# This is a cmake module and needs no further input from you
endif()

find_dependencies()

add_subdirectory(src/ska/helloworld)
add_subdirectory(src/apps)

# Install cmake config + version + target files
include(CMakePackageConfigHelpers)
configure_package_config_file(
  cmake/HelloWorldConfig.cmake.in
  "${CMAKE_CURRENT_BINARY_DIR}${CMAKE_FILES_DIRECTORY}/HelloWorldConfig.cmake"
  INSTALL_DESTINATION
    share/helloworld/cmake
)
write_basic_package_version_file(
  "${CMAKE_CURRENT_BINARY_DIR}${CMAKE_FILES_DIRECTORY}/HelloWorldVersion.cmake"
  COMPATIBILITY
    AnyNewerVersion
)
install(FILES
  ${CMAKE_CURRENT_BINARY_DIR}${CMAKE_FILES_DIRECTORY}/HelloWorldConfig.cmake
  ${CMAKE_CURRENT_BINARY_DIR}${CMAKE_FILES_DIRECTORY}/HelloWorldVersion.cmake
  DESTINATION
    share/helloworld/cmake
  COMPONENT
    dev
)
install(EXPORT helloworld-targets
  FILE
    HelloWorldTargets.cmake
  DESTINATION
    share/helloworld/cmake
  COMPONENT
    dev
  NAMESPACE
    helloworld::
)
