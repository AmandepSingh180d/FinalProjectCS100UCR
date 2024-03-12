cmake_minimum_required(VERSION 3.20)

add_subdirectory(googletest)


ADD_EXECUTABLE(testPManagement
    playerManagementTest.cpp
)

target_link_libraries(testPManagement gmock gtest gtest_main)