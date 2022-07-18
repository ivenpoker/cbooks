//
// Created by ivenpoker on 7/15/22.
//

#include <stdio.h>
#include "input.h"

int retrieveInput(string_ct message) {
    int input = 0;
    fprintf(stdout, "%s", message);
    fscanf(stdin, "%d", &input);

    return input;
}