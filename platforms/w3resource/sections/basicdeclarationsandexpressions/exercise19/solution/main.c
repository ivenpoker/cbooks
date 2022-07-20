//
// Created by ivenpoker on 7/19/22.
//

#include <stdlib.h>
#include <stdio.h>
#include "input/input.h"

bool isEven(long value);
bool isPositive(long value);
bool passesCondition(long p, long q, long r, long s);

int main(int argc, char **argv) {

    long p = retrieveUserInput("Enter p value: ", isPositive, "Invalid input. Must be a positive number!");
    long q = retrieveUserInput("Enter q value: ", isPositive, "Invalid input. Must be a positive number!");
    long r = retrieveUserInput("Enter r value: ", isPositive, "Invalid input. Must be a positive number!");
    long s = retrieveUserInput("Enter s value: ", isEven, "Invalid input. Must be an even number!");

    fprintf(stdout, "Results: %s\n", passesCondition(p, q, r, s) ? "Correct values" : "Wrong values");

    exit(EXIT_SUCCESS);
}

bool isEven(long value) {
    return value % 2 == 0;
}

bool isPositive(long value) {
    return value > 0;
}

bool passesCondition(long p, long q, long r, long s) {
    return (q > r) && (s > p) && ((r + s) > (p + q));
}