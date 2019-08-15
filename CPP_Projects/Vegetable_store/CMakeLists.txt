cmake_minimum_required(VERSION 2.8.3)
project(Vegetable_store)

set(TARGET_NAME store)

#find_package()

include_directories(include/)

add_executable(bin/store src/store.ccp)
target_include_directories(bin/store include)
add_dependencies(bin/store fruits.hpp veggies.hpp)