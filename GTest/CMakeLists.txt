cmake_minimum_required(VERSION 2.6)

find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

add_executable(sqrtexe sqrt_test.cpp)
target_link_libraries(sqrtexe ${GTEST_LIBRARIES} pthread)