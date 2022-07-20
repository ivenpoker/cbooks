//
// Created by ivenpoker on 7/20/22.
//

#ifndef PLATFORM_W3RESOURCE_BASIC_DECLARATIONS_AND_EXPRESSIONS_EXERCISE_22_INPUT_p_H
#define PLATFORM_W3RESOURCE_BASIC_DECLARATIONS_AND_EXPRESSIONS_EXERCISE_22_INPUT_p_H

#include "input.h"

#define isNull(val)                                 ((val) == NULL)
#define isNotNull(val)                              ((val) != NULL)

#define INPUT_MEMORY_ALLOCATION_ERROR_MESSAGE             "A memory related issue occurred while trying to process input"

typedef struct Input {
    int *array;
    size_t size;
};
typedef struct Input Input_t;
typedef struct Input * Input_pt;

bool isOdd(int value);

#endif //PLATFORM_W3RESOURCE_BASIC_DECLARATIONS_AND_EXPRESSIONS_EXERCISE_22_INPUT_p_H
