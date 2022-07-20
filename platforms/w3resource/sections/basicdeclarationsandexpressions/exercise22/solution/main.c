//
// Created by ivenpoker on 7/20/22.
//

#include <stdlib.h>
#include <stdio.h>
#include "input/input.h"

bool isValidNumber(int value);

int main(int argc, string_t * argv) {

    Input_pt newInput = IP_createInput(5);
    IP_displayInput(newInput);

    // retrieve and display inputs
    IP_retrieveInputFromStdin(newInput, "Enter a number: ", isValidNumber);
    IP_displayInput(newInput);

    int sumOfAllOdds = IP_sumOfAllOdds(newInput);

    fprintf(stdout, "Sum of odds in array -> %d\n", sumOfAllOdds);

    IP_freeInput(newInput);

    exit(EXIT_SUCCESS);
}

bool isValidNumber(int value) {
    return true;
}