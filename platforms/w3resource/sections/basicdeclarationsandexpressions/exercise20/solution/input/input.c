//
// Created by ivenpoker on 7/20/22.
//

#include <stdio.h>
#include "input_p.h"

long retrieveUserInput(string_ct inputMessage, PredicateFunc_pt predicateFunc, string_ct errorMessage) {
    long userInput = 0;
    fprintf(stdout, inputMessage);
    fscanf(stdin, "%ld", &userInput);

    while (!predicateFunc(userInput)) {
        fprintf(stderr, "%s\n", errorMessage);
        fprintf(stdout, inputMessage);
        fscanf(stdin, "%ld", &userInput);
    }

    return userInput;
}