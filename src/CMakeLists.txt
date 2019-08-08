# Configure a header file to pass some of the CMake settings
# to the source code
configure_file(HelloWorldConfig.h.in HelloWorldConfig.h)

# Include directories needed by all sources
include_directories(${CMAKE_CURRENT_BINARY_DIR})
include_directories(${CMAKE_CURRENT_SOURCE_DIR})

# Libraries
add_subdirectory(ska/nested)
# Executables
add_subdirectory(apps)
