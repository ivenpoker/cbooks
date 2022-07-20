//
// Created by ivenpoker on 7/19/22.
//

#ifndef PLATFORM_W3RESOURCE_BASIC_DECLARATIONS_AND_EXPRESSIONS_EXERCISE_18_INPUT_H
#define PLATFORM_W3RESOURCE_BASIC_DECLARATIONS_AND_EXPRESSIONS_EXERCISE_18_INPUT_H

#include <stdbool.h>

typedef char * string_t;
typedef const char * string_ct;

typedef bool (PredicateFunc)(long );
typedef PredicateFunc * PredicateFunc_fpt;

long retrieveUserInput(string_ct message, PredicateFunc_fpt isValid, string_ct errorMessage);

#endif //PLATFORM_W3RESOURCE_BASIC_DECLARATIONS_AND_EXPRESSIONS_EXERCISE_18_INPUT_H
