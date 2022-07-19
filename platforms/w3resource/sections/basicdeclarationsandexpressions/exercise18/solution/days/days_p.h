//
// Created by ivenpoker on 7/18/22.
//

#ifndef PLATFORM_W3RESOURCE_BASIC_DECLARATIONS_AND_EXPRESSIONS_EXERCISE_19_DAYS_P_H
#define PLATFORM_W3RESOURCE_BASIC_DECLARATIONS_AND_EXPRESSIONS_EXERCISE_19_DAYS_P_H

#include "days.h"

#define isNull(val)                                             ((val) == NULL)
#define isNotNull(val)                                          ((val) != NULL)

#define GENERIC_DISPLAY_ERROR_MESSAGE                           "An issue occurred while trying to display days"

#define MAX_DISPLAY_LINE_LEN                                    30
#define MAX_DISPLAY_STR_LEN                                     20

#define APPROXIMATE_NUMBER_OF_DAYS_IN_YEAR                      365
#define APPROXIMATE_NUMBER_OF_DAYS_IN_MONTH                     30

typedef struct DaysUnits {
    size_t years;
    size_t months;
    size_t days;
} DaysUnits_t;

typedef struct Days {
    size_t totalDays;
    DaysUnits_t units;
};
typedef struct Days Days_t;
typedef struct Days * Days_pt;

size_t numberOfYearsFrom(size_t totalDays);

size_t numberOfMonthsFrom(size_t totalDays);

size_t reducedDaysFrom(size_t totalDays);

int tenPercentOf(size_t number);


#endif //PLATFORM_W3RESOURCE_BASIC_DECLARATIONS_AND_EXPRESSIONS_EXERCISE_19_DAYS_P_H
