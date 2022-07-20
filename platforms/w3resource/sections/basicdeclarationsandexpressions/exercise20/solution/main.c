//
// Created by ivenpoker on 7/20/22.
//

#include <stdlib.h>
#include <math.h>
#include <stdio.h>
#include "input/input.h"

double discriminantOf(long a, long b, long c);
bool validDiscriminant(double value);
double root1Of(long a, long b, long c);
double root2Of(long a, long b, long c);

bool inputValidator(long value);

int main(int argc, string_t *argv) {

    long a = retrieveUserInput("Enter value for 'a': ", inputValidator, "Invalid input");
    long b = retrieveUserInput("Enter value for 'b': ", inputValidator, "Invalid input");
    long c = retrieveUserInput("Enter value for 'c': ", inputValidator, "Invalid input");

    double discriminant = discriminantOf(a, b, c);
    if (!validDiscriminant(discriminant)) {
        fprintf(stdout, "Can't compute Bhaskara's formula");
        exit(EXIT_SUCCESS);
    }

    fprintf(stdout, "Root1 -> %.5lf\n", root1Of(a, b, c));
    fprintf(stdout, "Root2 -> %.5lf", root2Of(a, b, c));

    exit(EXIT_SUCCESS);
}

bool inputValidator(long value) {
    return true;
}

double discriminantOf(long a, long b, long c) {
    return pow((double) b, 2.0f) - (4.0f * (double) a * (double) c);
}

bool validDiscriminant(double value) {
    return value >= 0;
}

double root1Of(long a, long b, long c) {
    return (- ((double) b) + sqrt(discriminantOf(a, b, c))) / (2 * (double) a);
}

double root2Of(long a, long b, long c) {
    return (- ((double) b) - sqrt(discriminantOf(a, b, c))) / (2 * (double) a);
}