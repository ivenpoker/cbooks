cmake_minimum_required(VERSION 3.22)
project(w3resource-exercise C)

set(CMAKE_C_STANDARD 23)

add_executable(
        program
        main.c

        time/time.c
        time/time.h
        time/time_p.h

        utils/utils.c
        utils/utils.h
        utils/utils_p.h
)
target_link_libraries(program m)
