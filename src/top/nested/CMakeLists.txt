add_library(HelloClasses
	hello.cc
	wave.cc
)

if (BUILD_TESTS)
	add_subdirectory(tests)
endif()

install( FILES
  hello.h
  wave.h
  DESTINATION include/top/nested
  )
