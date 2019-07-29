add_executable(twave twave.cc)
target_link_libraries(twave HelloClasses gtest)
add_test(
    NAME twave
    COMMAND twave
)
add_executable(tcall tcall.cc)
target_link_libraries(tcall HelloClasses gtest)
add_test(
    NAME tcall
    COMMAND tcall
)
