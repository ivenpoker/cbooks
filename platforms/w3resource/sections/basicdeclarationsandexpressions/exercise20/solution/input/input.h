//
// Created by ivenpoker on 7/20/22.
//

#ifndef PLATFORM_W3RESOURCE_BASIC_DECLARATIONS_AND_EXPRESSIONS_EXERCISE_19_INPUT_H
#define PLATFORM_W3RESOURCE_BASIC_DECLARATIONS_AND_EXPRESSIONS_EXERCISE_19_INPUT_H

#include <stdbool.h>

typedef char * string_t;
typedef const char * string_ct;

typedef bool (PredicateFunc)(long );
typedef PredicateFunc * PredicateFunc_pt;

long retrieveUserInput(string_ct inputImessage, PredicateFunc_pt predicateFunc, string_ct errorMessage);

#endif //PLATFORM_W3RESOURCE_BASIC_DECLARATIONS_AND_EXPRESSIONS_EXERCISE_19_INPUT_H
