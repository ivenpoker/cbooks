//
// Created by ivenpoker on 7/19/22.
//

#include <stdio.h>
#include "input_p.h"

long retrieveUserInput(string_ct message, PredicateFunc_fpt isValid, string_ct errorMessage) {
    long userInput = 0;
    fprintf(stdout, "%s", message);
    fscanf(stdin, "%ld", &userInput);

    while (!isValid(userInput)) {
        fprintf(stderr, "%s", errorMessage);
        fprintf(stdout, "%s", message);
        fscanf(stdin, "%ld", &userInput);
    }
    return userInput;
}

