cmake_minimum_required(VERSION 3.22)
project(w3resource-exercise C)

set(CMAKE_C_STANDARD 23)

add_executable(
        program

        input/input.c input/input.h input/input_p.h main.c)
target_link_libraries(program m)
