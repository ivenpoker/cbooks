//
// Created by ivenpoker on 7/12/22.
//

#include <stdio.h>
#include "exercise9.h"

int retrieveUserInput(string_ct message) {
    int userInput = 0;
    fprintf(stdout, "%s", message);
    fscanf(stdin, "%d", &userInput);

    return userInput;
}

int sumOf(int val1, int val2) {
    return val1 + val2;
}