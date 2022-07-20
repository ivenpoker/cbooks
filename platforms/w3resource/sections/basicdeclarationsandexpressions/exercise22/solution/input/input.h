//
// Created by ivenpoker on 7/20/22.
//

#ifndef PLATFORM_W3RESOURCE_BASIC_DECLARATIONS_AND_EXPRESSIONS_EXERCISE_22_INPUT_H
#define PLATFORM_W3RESOURCE_BASIC_DECLARATIONS_AND_EXPRESSIONS_EXERCISE_22_INPUT_H

#include <stdbool.h>
#include <stddef.h>

typedef char * string_t;
typedef const char * string_ct;

typedef struct Input;
typedef struct Input Input_t;
typedef struct Input * Input_pt;

typedef bool (PredicateFunc)(int);
typedef PredicateFunc * PredicateFunc_pt;

Input_pt IP_createInput(size_t inputSize);

void IP_retrieveInputFromStdin(Input_pt inputPt, string_ct preInputMessage, PredicateFunc_pt predicateFunc);

int IP_sumOfAllOdds(Input_pt inputPt);

void IP_displayInput(Input_pt inputPt);

void IP_freeInput(Input_pt inputPt);

#endif //PLATFORM_W3RESOURCE_BASIC_DECLARATIONS_AND_EXPRESSIONS_EXERCISE_22_INPUT_H
