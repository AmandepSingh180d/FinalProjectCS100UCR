cmake_minimum_required(VERSION 3.20)

add_subdirectory(googletest)


ADD_EXECUTABLE(choiceTests
    tests/testChoiceInput.cpp
    choiceClass/Choice.cpp

)



target_link_libraries(choiceTests gmock gtest gtest_main)