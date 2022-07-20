//
// Created by ivenpoker on 7/20/22.
//

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include "input_p.h"

Input_pt IP_createInput(size_t inputSize) {
    Input_pt newInput = (Input_pt) malloc(sizeof(Input_t));
    if (isNull(newInput)) {
        fprintf(stdout, INPUT_MEMORY_ALLOCATION_ERROR_MESSAGE);
        return NULL;
    }
    newInput->array = (int *) malloc(sizeof(int) * inputSize);
    if (isNull(newInput->array)) {
        fprintf(stdout, INPUT_MEMORY_ALLOCATION_ERROR_MESSAGE);
        return NULL;
    }
    newInput->size = inputSize;
    // initialization

    for (int i = 0; i < newInput->size; i++) {
        *(newInput->array + i) = 0;
    }
    return newInput;
}

void IP_retrieveInputFromStdin(Input_pt inputPt, string_ct preInputMessage, PredicateFunc_pt predicateFunc) {
    if (isNull(inputPt) || isNull(inputPt->array) || inputPt->size == 0) {
        return;
    }
    for (int i = 0; i < inputPt->size; i++) {
        fprintf(stdout, "(#%d) %s", (i + 1), preInputMessage);
        fscanf(stdin, "%d", inputPt->array + i);

        if (isNotNull(predicateFunc)) {
            while (!predicateFunc(*(inputPt->array + i))) {
                fprintf(stderr, "(InvalidInput) ");
                fprintf(stdout, "(#%d) %s", (i + 1), preInputMessage);

                fscanf(stdin, "%d", inputPt->array + i);
            }
        } else {
            fscanf(stdin, "%d", inputPt->array + i);;
        }
    }
}

void IP_displayInput(Input_pt inputPt) {
    if (isNull(inputPt)) {
        return;
    }
    fprintf(stdout, "(size: %zu) -> [", inputPt->size);
    for (int i = 0; i < inputPt->size; i++) {
        if (i == inputPt->size - 1) {
            fprintf(stdout, "%d]\n", *(inputPt->array + i));
        } else {
            fprintf(stdout, "%d, ", *(inputPt->array + i));
        }
    }
}

int IP_sumOfAllOdds(Input_pt inputPt) {
    if (isNull(inputPt)) {
        return 0;
    }
    int totalSumOfOdds = 0;
    for (int i = 0; i < inputPt->size; i++) {
        int tmpCurr = *(inputPt->array + i);
        if (isOdd(tmpCurr)) {
            totalSumOfOdds += tmpCurr;
        }
    }
    return totalSumOfOdds;
}

void IP_freeInput(Input_pt inputPt) {
    if (isNotNull(inputPt)) {
        if (isNotNull(inputPt->array)) {
            free(inputPt->array);
        }
        free(inputPt);
    }
}

bool isOdd(int value) {
    return value % 2 == 1;
}