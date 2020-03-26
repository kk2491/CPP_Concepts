cmake_minimum_required(VERSION 3.5)

set(TARGET_NAME sample_prog)

file(GLOB SOURCES "src/*.cc")
add_executable(${TARGET_NAME} ${SOURCES})

project(${TARGET_NAME})

target_include_directories(${TARGET_NAME} PRIVATE include)