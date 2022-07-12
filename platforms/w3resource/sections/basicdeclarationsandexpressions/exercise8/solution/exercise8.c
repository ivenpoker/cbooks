//
// Created by ivenpoker on 7/12/22.
//

#include <stdlib.h>
#include <stdio.h>
#include "exercise8.h"

int retrieveUserInput(string_ct message) {
    int userInput = 0;
    fprintf(stdout, "%s: ", message);
    fscanf(stdin, "%d", &userInput);

    return userInput;
}

int toYears(int days) {
    int yearsCnt = 0;
    while (days >= 365) {
        yearsCnt += 1;
        days -= 365;
    }
    return yearsCnt;
}

int toWeeks(int days) {
    int weeksCnt = 0;
    while (days >= 7) {
        weeksCnt += 1;
        days -= 7;
    }
    return weeksCnt;
}