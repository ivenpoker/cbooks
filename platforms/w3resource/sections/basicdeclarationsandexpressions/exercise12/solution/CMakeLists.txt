cmake_minimum_required(VERSION 3.22)
project(w3resource-exercise C)

set(CMAKE_C_STANDARD 23)

add_executable(
    program
    main.c

    employee/employee.c
    employee/employee.h
    employee/employee_p.h

    stdinput/stdinput.c
    stdinput/stdinput.h
    stdinput/stdinput_p.h

    line/util/line.util.c
    line/util/line.util.h
    line/util/line.util_p.h
)