//
// Created by ivenpoker on 7/12/22.
//

#include <stdlib.h>
#include <stdio.h>
#include "exercise8.h"

int main(int argc, string_pt argv) {

    int userInput = retrieveUserInput("Enter number of days");
    int years = toYears(userInput);
    int weeks = toWeeks(userInput - (years * 365));
    int daysLeft = userInput - ((years * 365) + (weeks * 7));

    fprintf(stdout, "Results...\n");
    fprintf(stdout, "Years: %d\n", years);
    fprintf(stdout, "Weeks: %d\n", weeks);
    fprintf(stdout, " Days: %d\n", daysLeft);

    exit(EXIT_SUCCESS);

}