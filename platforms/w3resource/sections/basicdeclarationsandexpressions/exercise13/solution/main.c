//
// Created by ivenpoker on 7/15/22.
//

#include <stdlib.h>
#include <stdio.h>
#include "input/input.h"

int maxOf(int int1, int int2);

int main(int argc, char **argv) {

    int firstInt = retrieveInput("Enter the first integer: ");
    int secondInt = retrieveInput("Enter the second integer: ");
    int thirdInt = retrieveInput("Enter the third integer: ");

    fprintf(stdout, "\nMax of %d, %d and %d is -> %d\n",
            firstInt, secondInt, thirdInt, maxOf(maxOf(firstInt, secondInt), thirdInt));

    exit(EXIT_SUCCESS);
}

int maxOf(int int1, int int2) {
    return int1 > int2 ? int1 : int2;
}