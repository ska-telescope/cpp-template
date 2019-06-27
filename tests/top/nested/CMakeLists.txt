add_executable(twave twave.cc)
target_link_libraries(twave 
	HelloClasses
	${GTEST_LIBRARY} 
	${GTEST_MAIN_LIBRARY})
