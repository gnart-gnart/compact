cmake_minimum_required(VERSION 4.2)
project(compact C)

set(CMAKE_C_STANDARD 23)

add_executable(compact main.c)

find_package(raylib CONFIG REQUIRED)
target_link_libraries(compact PRIVATE raylib)
