//
// Created by ivenpoker on 7/18/22.
//

#include <stdio.h>
#include <string.h>
#include "utils_p.h"

void displayLine(bool startNewLine, char startChar, char emptyChar, const char *inBetweenStr, size_t startIdx,
                 char endChar, bool endNewLine, size_t maxLen) {
    if (isNotInRange(0, (int) startIdx, (int) maxLen - 1)) {
        return;
    }
    for (size_t i = 0; i < maxLen; i++) {
        if (i == 0) {
            fprintf(stdout, "%c%s", startChar, startNewLine ? "\n" : "");

        } else if (i == maxLen - 1) {
            fprintf(stdout, "%c%s", endChar, endNewLine ? "\n" : "");

        } else if (i == startIdx) {
            size_t strLength = strlen(inBetweenStr);

            if (strLength > 0) {
                fprintf(stdout, "%s", inBetweenStr);
                i += strLength;
            }
        } else {
            fprintf(stdout, "%c", emptyChar);
        }
    }
}

bool isInRange(int lower, int val, int upper) {
    return lower <= val && val <= upper;
}

bool isNotInRange(int lower, int val, int upper) {
    return !isInRange(lower, val, upper);
}