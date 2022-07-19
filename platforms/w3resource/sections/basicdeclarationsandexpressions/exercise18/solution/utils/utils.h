//
// Created by ivenpoker on 7/18/22.
//

#ifndef PLATFORM_W3RESOURCE_BASIC_DECLARATIONS_AND_EXPRESSIONS_EXERCISE_17_UTILS_H
#define PLATFORM_W3RESOURCE_BASIC_DECLARATIONS_AND_EXPRESSIONS_EXERCISE_17_UTILS_H

#include <stdbool.h>
#include <stddef.h>

typedef char * string_t;

void displayLine(bool startNewLine, char startChar, char emptyChar, const char *inBetweenStr, size_t startIdx,
                 char endChar, bool endNewLine, size_t maxLen);

#endif //PLATFORM_W3RESOURCE_BASIC_DECLARATIONS_AND_EXPRESSIONS_EXERCISE_17_UTILS_H
