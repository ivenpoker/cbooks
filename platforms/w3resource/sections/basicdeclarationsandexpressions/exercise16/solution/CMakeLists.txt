cmake_minimum_required(VERSION 3.22)
project(w3resource-exercise C)

set(CMAKE_C_STANDARD 23)

add_executable(
        program
        main.c
        notes/notes.c notes/notes.h notes/notes_p.h utils/utils.h utils/utils_p.h utils/utils.c)
target_link_libraries(program m)
