add_library(HelloClasses
	hello.cc
	wave.cc
)

if (BUILD_TESTS)
	add_subdirectory(tests)
endif()
