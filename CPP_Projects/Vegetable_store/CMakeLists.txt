#cmake_minimum_required(VERSION 2.8.3)
#project(vegetable_store)
#set(TARGET_NAME vegetable_store)
#file(GLOB SOURCES "src/*.cc")
#add_executable(${TARGET_NAME} ${SOURCES})
#target_include_directories(${TARGET_NAME} PRIVATE include)


cmake_minimum_required(VERSION 3.5)
set(TARGET_NAME sample_prog)
file(GLOB SOURCES "src/*.cpp")
add_executable(${TARGET_NAME} ${SOURCES})
project(${TARGET_NAME})
target_include_directories(${TARGET_NAME} PRIVATE include)