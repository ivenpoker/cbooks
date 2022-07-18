cmake_minimum_required(VERSION 3.22)
project(w3resource-exercise C)

set(CMAKE_C_STANDARD 23)

add_executable(
        program
        main.c

        point/point.c
        point/point.h
        point/point_p.h

        input/input.c
        input/input.h
        input/input_p.h

        utils/string/string.h
        utils/utils.h
)
target_link_libraries(program m)
