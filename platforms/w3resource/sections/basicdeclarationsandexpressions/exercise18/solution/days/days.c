//
// Created by ivenpoker on 7/18/22.
//

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "../utils/utils.h"
#include "days_p.h"

Days_pt DA_createDays(size_t totalDays) {
    totalDays = totalDays > 0 ? totalDays : 0;
    Days_pt newDays = (Days_pt) malloc(sizeof(Days_t));

    if (isNull(newDays)) {
        return NULL;
    }
    newDays->totalDays    = totalDays;
    newDays->units.years  = numberOfYearsFrom(totalDays);
    newDays->units.months = numberOfMonthsFrom(totalDays);
    newDays->units.days   = reducedDaysFrom(totalDays);

    return newDays;
}

void DA_freeDays(Days_pt daysPtr) {
    if (isNotNull(daysPtr)) {
        free(daysPtr);
    }
}

size_t numberOfYearsFrom(size_t totalDays) {
    return totalDays / APPROXIMATE_NUMBER_OF_DAYS_IN_YEAR;
}

size_t numberOfMonthsFrom(size_t totalDays) {
    return (totalDays - (numberOfYearsFrom(totalDays) * APPROXIMATE_NUMBER_OF_DAYS_IN_YEAR)) / APPROXIMATE_NUMBER_OF_DAYS_IN_MONTH;
}

size_t reducedDaysFrom(size_t totalDays) {
    size_t years = numberOfYearsFrom(totalDays);
    size_t months = numberOfMonthsFrom(totalDays);

    totalDays -= ((years * APPROXIMATE_NUMBER_OF_DAYS_IN_YEAR) + (months * APPROXIMATE_NUMBER_OF_DAYS_IN_MONTH));
    return totalDays;
}

int tenPercentOf(size_t number) {
    return (int) (0.1 *  (double) number);
}

void DA_displayDays(Days_pt daysPtr) {
    if (isNull(daysPtr)) {
        fprintf(stderr, GENERIC_DISPLAY_ERROR_MESSAGE);
        return;
    }
    char *daysFragmentStr = (char *) malloc(sizeof(char) * MAX_DISPLAY_STR_LEN);
    if (isNull(daysFragmentStr)) {
        fprintf(stderr, GENERIC_DISPLAY_ERROR_MESSAGE);
        return;
    }
    sprintf(daysFragmentStr, "%zu", daysPtr->totalDays);
    size_t maxLen = MAX_DISPLAY_LINE_LEN + tenPercentOf(strlen(daysFragmentStr));

    sprintf(daysFragmentStr, "Total seconds: %zu", daysPtr->totalDays);

    // display header
    displayLine(false, '+', '-', "", 1, '+', true, maxLen);
    displayLine(false, '|', ' ', daysFragmentStr, 2, '|', true, maxLen);
    displayLine(false, '+', '-', "", 1, '+', true, maxLen);

    // display body - number of years
    sprintf(daysFragmentStr, "Number of years: %zu", daysPtr->units.years);
    displayLine(false, '|', ' ', daysFragmentStr, 2, '|', true, maxLen);

    // display body - number of months
    sprintf(daysFragmentStr, "Number of months: %zu", daysPtr->units.months);
    displayLine(false, '|', ' ', daysFragmentStr, 2, '|', true, maxLen);

    // display body - number of days
    sprintf(daysFragmentStr, "Number of days: %zu", daysPtr->units.days);
    displayLine(false, '|', ' ', daysFragmentStr, 2, '|', true, maxLen);

    // display last line
    displayLine(false, '+', '-', "", 1, '+', true, maxLen);
}