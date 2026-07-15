cmake_minimum_required(VERSION 4.2)
project(compact C)

set(CMAKE_C_STANDARD 23)

add_executable(compact main.c
        core/window.c
        core/window.h
        core/game.c
        core/game.h)

find_package(raylib CONFIG REQUIRED)
find_package(glfw3 CONFIG REQUIRED)
target_link_libraries(compact PRIVATE raylib glfw)

if(APPLE)
    target_link_libraries(compact PRIVATE
            "-framework Cocoa"
            "-framework IOKit"
            "-framework CoreVideo"
            "-framework OpenGL"
    )
endif()
