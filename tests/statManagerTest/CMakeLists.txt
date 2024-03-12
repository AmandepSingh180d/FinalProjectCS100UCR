cmake_minimum_required(VERSION 3.20)

add_subdirectory(googletest)


ADD_EXECUTABLE(statTest
    statManager.h
    statManager.cpp
    test.cpp
)

target_link_libraries(statTest gmock gtest gtest_main)
