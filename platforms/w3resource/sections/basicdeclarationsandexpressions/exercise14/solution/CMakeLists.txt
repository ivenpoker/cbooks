cmake_minimum_required(VERSION 3.22)
project(w3resource-exercise C)

set(CMAKE_C_STANDARD 23)

add_executable(
        program
        utils/input/input.c utils/input/input.h main.c utils/utils.h)