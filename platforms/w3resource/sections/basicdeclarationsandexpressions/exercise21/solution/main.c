//
// Created by ivenpoker on 7/20/22.
//

#include <stdlib.h>
#include <stdio.h>
#include "input/input.h"

#define POSSIBLE_LOWER_BOUND                 0
#define POSSIBLE_UPPER_BOUND                 80

bool isInBounds(int value);
bool isInBounds0To20(int value);
bool isInBounds21To40(int value);
bool isInBounds41To60(int value);
bool isInBounds61To80(int value);


int main(int argc, string_t *argv) {

    int userInput = retrieveInput("Enter an integer: ", isInBounds, "Not in bounds!");

    if (isInBounds0To20(userInput)) {
        fprintf(stdout, "In Range [0, 20]\n");

    } else if (isInBounds21To40(userInput)) {
        fprintf(stdout, "In Range [21, 40]\n");

    } else if (isInBounds41To60(userInput)) {
        fprintf(stdout, "In Range [41, 60]\n");

    } else if (isInBounds61To80(userInput)) {
        fprintf(stdout, "In Range [61, 80]\n");
    }

    exit(EXIT_SUCCESS);
}

bool isInBounds(int value) {
    return isInRange(POSSIBLE_LOWER_BOUND, value, POSSIBLE_UPPER_BOUND);
}

bool isInBounds0To20(int value) {
    return isInRange(0, value, 20);
}

bool isInBounds21To40(int value) {
    return isInRange(21, value, 40);
}

bool isInBounds41To60(int value) {
    return isInRange(41, value, 60);
}

bool isInBounds61To80(int value) {
    return isInRange(61, value, 80);
}

