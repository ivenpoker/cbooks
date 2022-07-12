//
// Created by ivenpoker on 7/12/22.
//

#include <stdlib.h>
#include <stdio.h>
#include "exercise10.h"

int main(int argc, string_pt argv) {
    int val1 = retrieveIntInput(" Enter first integer: ");
    int val2 = retrieveIntInput("Enter second integer: ");

    fprintf(stdout, "Product of integers: %d\n", productOf(val1, val2));
}