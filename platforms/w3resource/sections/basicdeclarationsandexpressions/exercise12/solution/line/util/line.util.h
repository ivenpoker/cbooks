//
// Created by ivenpoker on 7/15/22.
//

#ifndef W3RESOURCE_EXERCISE_LINE_UTIL_H
#define W3RESOURCE_EXERCISE_LINE_UTIL_H

#include <stdbool.h>
#include <stddef.h>

void displayLine(bool startNewLine, char startChar, char emptyChar, const char *inBetweenStr, size_t startIdx,
                 char endChar, bool endNewLine, size_t maxLen);

#endif //W3RESOURCE_EXERCISE_LINE_UTIL_H
