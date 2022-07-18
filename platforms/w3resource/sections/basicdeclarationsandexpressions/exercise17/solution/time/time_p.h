//
// Created by ivenpoker on 7/18/22.
//

#ifndef PLATFORM_W3RESOURCE_BASIC_DECLARATIONS_AND_EXPRESSIONS_EXERCISE_17_TIME_P_H
#define PLATFORM_W3RESOURCE_BASIC_DECLARATIONS_AND_EXPRESSIONS_EXERCISE_17_TIME_P_H

#include "time.h"

#define isNull(var)                             ((var) == NULL)
#define isNotNull(var)                          ((var) != NULL)

#define MAX_DISPLAY_LINE_LEN                    30
#define MAX_DISPLAY_STR_LEN                     20

#define TOTAL_SECONDS_IN_AN_HOUR                3600
#define TOTAL_SECONDS_IN_A_MINUTE               60

#define GENERIC_DISPLAY_ERROR_MESSAGE           "An issue occurred while trying to display time"

typedef struct TimeUnits {
    size_t hours;
    size_t minutes;
    size_t seconds;
} TimeUnits_t;

typedef struct Time {
    size_t totalSeconds;
    TimeUnits_t units;
};

typedef struct Time Time_t;
typedef struct Time * Time_pt;

size_t numberOfHoursIn(size_t seconds);

size_t numberOfMinutesIn(size_t seconds);

size_t reducedSecondsOf(size_t seconds);

int tenPercentOf(size_t number);

#endif //PLATFORM_W3RESOURCE_BASIC_DECLARATIONS_AND_EXPRESSIONS_EXERCISE_17_TIME_P_H
