//
// Created by ivenpoker on 7/20/22.
//

#include <stdio.h>
#include "input_p.h"

bool isInRange(int lower, int val, int upper) {
    return lower <= val && val <= upper;
}

int retrieveInput(string_ct inputMessage, PredicateFunc_pt predicateFunc, string_ct errorMessage) {
    int input = 0;
    fprintf(stdout, "%s", inputMessage);
    fscanf(stdin, "%d", &input);

    while (!predicateFunc(input)) {
        fprintf(stderr, "(InputError) %s\n", errorMessage);
        fprintf(stdout, "%s", inputMessage);
        fscanf(stdin, "%d", &input);
    }

    return input;
}