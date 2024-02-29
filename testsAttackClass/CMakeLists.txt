cmake_minimum_required(VERSION 3.20)

add_subdirectory(googletest)


ADD_EXECUTABLE(testAttack
    testAttack.cpp
)

target_link_libraries(testAttack gmock gtest gtest_main)