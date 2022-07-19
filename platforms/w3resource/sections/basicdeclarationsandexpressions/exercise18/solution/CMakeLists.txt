cmake_minimum_required(VERSION 3.22)
project(w3resource-exercise C)

set(CMAKE_C_STANDARD 23)

add_executable(
        program
        main.c

        utils/utils.c
        utils/utils.h
        utils/utils_p.h
        days/days.c days/days.h days/days_p.h)
target_link_libraries(program m)
