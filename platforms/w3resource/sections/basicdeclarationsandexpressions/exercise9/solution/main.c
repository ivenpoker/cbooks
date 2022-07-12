//
// Created by ivenpoker on 7/12/22.
//

#include <stdlib.h>
#include <stdio.h>
#include "exercise9.h"

int main(int argc, string_pt argv) {

    int val1 = retrieveUserInput(" Enter the first integer: ");
    int val2 = retrieveUserInput("Enter the second integer: ");

    fprintf(stdout, "Sum of above two integers: %d\n", sumOf(val1, val2));

    exit(EXIT_SUCCESS);

}