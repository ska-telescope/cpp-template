set(public_headers
  hello.h
  wave.h
  call.h
)
set(private_headers
  wave_impl.h
  call_impl.h
)
set(sources
  hello.cc
  wave.cc
  call.cc
)

add_library(
  HelloClasses
    ${sources}
    ${private_headers}
    ${public_headers}
)

if (BUILD_TESTING)
  add_subdirectory(tests)
endif()

install(
  FILES
    ${public_headers}
  DESTINATION
    include/top/nested
)
