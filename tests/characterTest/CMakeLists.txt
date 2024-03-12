cmake_minimum_required(VERSION 3.20)

add_subdirectory(/home/csmajs/clope265/final-project-asing241-clope265-btaqu001-schen568/tests/googletest googletest_build)


ADD_EXECUTABLE(characterTests
    characterTest.cpp
    ../../characterTypes/Archer.cpp
    ../../characterTypes/Knight.cpp
    ../../characterTypes/Mage.cpp
    ../../characterTypes/Thief.cpp
    ../../character/character.cpp

)

target_link_libraries(characterTests gmock gtest gtest_main)