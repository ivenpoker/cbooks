//
// Created by ivenpoker on 7/18/22.
//

#include <stdio.h>
#include "input.h"

double retrieveInput(string_ct message) {
    double input = 0;
    fprintf(stdout, "%s", message);
    fscanf(stdin, "%lf", &input);

    return input;
}