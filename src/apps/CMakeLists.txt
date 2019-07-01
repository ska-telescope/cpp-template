# add the executable
add_executable (HelloWorld hello_world.cc)
target_link_libraries (HelloWorld HelloClasses)

install (TARGETS HelloWorld DESTINATION bin)

if (BUILD_TESTS)
	add_test(NAME HelloWorldExec COMMAND HelloWorld)
endif()
