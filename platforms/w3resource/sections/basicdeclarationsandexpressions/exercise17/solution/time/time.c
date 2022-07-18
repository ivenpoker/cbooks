//
// Created by ivenpoker on 7/18/22.
//

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "time_p.h"
#include "../utils/utils.h"

Time_pt TM_newTime(size_t totalSeconds) {
    totalSeconds = totalSeconds > 0 ? totalSeconds : 0;
    Time_pt newTime = (Time_pt) malloc(sizeof(Time_t));

    if (isNull(newTime)) {
        return NULL;
    }
    newTime->totalSeconds = totalSeconds;
    newTime->units.hours = numberOfHoursIn(totalSeconds);
    newTime->units.minutes = numberOfMinutesIn(totalSeconds);
    newTime->units.seconds = reducedSecondsOf(totalSeconds);

    return newTime;
}

void TM_displayTime(Time_pt timePtr) {
    if (isNull(timePtr)) {
        fprintf(stderr, GENERIC_DISPLAY_ERROR_MESSAGE);
        return;
    }
    char *timeFragmentStr = (char *) malloc(sizeof (char) * MAX_DISPLAY_STR_LEN);
    if (isNull(timeFragmentStr)) {
        fprintf(stderr, GENERIC_DISPLAY_ERROR_MESSAGE);
    }
    sprintf(timeFragmentStr, "%zu", timePtr->totalSeconds);
    size_t maxLen = MAX_DISPLAY_LINE_LEN + tenPercentOf(strlen(timeFragmentStr));

    sprintf(timeFragmentStr, "Total seconds: %zu", timePtr->totalSeconds);

    displayLine(false, '+', '-', "", 1, '+', true, maxLen);
    displayLine(false, '|', ' ', timeFragmentStr, 2, '|', true, maxLen);
    displayLine(false, '+', '-', "", 1, '+', true, maxLen);

    sprintf(timeFragmentStr, "Number of hour(s): %zu", timePtr->units.hours);
    displayLine(false, '|', ' ', timeFragmentStr, 2, '|', true, maxLen);

    sprintf(timeFragmentStr, "Number of minute(s): %zu", timePtr->units.minutes);
    displayLine(false, '|', ' ', timeFragmentStr, 2, '|', true, maxLen);

    sprintf(timeFragmentStr, "Number of seconds(s): %zu", timePtr->units.seconds);
    displayLine(false, '|', ' ', timeFragmentStr, 2, '|', true, maxLen);

    displayLine(false, '+', '-', "", 1, '+', true, maxLen);

    sprintf(timeFragmentStr, "HH:MM:SS -> %02zu:%02zu:%02zu", timePtr->units.hours, timePtr->units.minutes, timePtr->units.seconds);
    displayLine(false, '|',' ', timeFragmentStr, 2, '|', true, maxLen);

    displayLine(false, '+', '-', "", 1, '+', true, maxLen);

    // release allocated memory
    free(timeFragmentStr);
}

int tenPercentOf(size_t number) {
    return (int) (0.1 *  (double) number);
}

void TM_freeTime(Time_pt timePtr) {
    if (isNotNull(timePtr)) {
        free(timePtr);
    }
}

size_t numberOfHoursIn(size_t seconds) {
    return seconds / TOTAL_SECONDS_IN_AN_HOUR;
}

size_t numberOfMinutesIn(size_t seconds) {
    size_t hours = numberOfHoursIn(seconds);
    return (seconds - (TOTAL_SECONDS_IN_AN_HOUR * hours)) / 60;
}

size_t reducedSecondsOf(size_t seconds) {
    size_t hours = numberOfHoursIn(seconds);
    size_t minutes = numberOfMinutesIn(seconds);

    return (seconds - (TOTAL_SECONDS_IN_AN_HOUR * hours) - (minutes * 60));
}

