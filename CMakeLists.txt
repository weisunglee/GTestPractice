cmake_minimum_required(VERSION 3.20)
project(GTestPractice)

set(CMAKE_CXX_STANDARD 17)

include_directories(src)

# GTest
find_package(GTest CONFIG REQUIRED)

# Sub directories
add_subdirectory(src)

add_executable(${CMAKE_PROJECT_NAME} main.cpp)
target_link_libraries(${CMAKE_PROJECT_NAME} PRIVATE
    GTest::gtest
    GTest::gtest_main
    src)