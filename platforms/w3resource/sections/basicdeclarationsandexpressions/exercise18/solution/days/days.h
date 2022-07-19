//
// Created by ivenpoker on 7/18/22.
//

#ifndef PLATFORM_W3RESOURCE_BASIC_DECLARATIONS_AND_EXPRESSIONS_EXERCISE_19_DAYS_H
#define PLATFORM_W3RESOURCE_BASIC_DECLARATIONS_AND_EXPRESSIONS_EXERCISE_19_DAYS_H

#include <stddef.h>

typedef struct Days;
typedef struct Days Days_t;
typedef struct Days * Days_pt;

/**
 * Create a new Days structure.
 * @param totalDays Number of days associated with new days structure
 * @return Pointer to a new Days structure.
 */
Days_pt DA_createDays(size_t totalDays);

/**
 * Display Days structure in a tabular format.
 * @param daysPtr Pointer to a new Days structure.
 */
void DA_displayDays(Days_pt daysPtr);

/**
 * Release Days memory resources
 * @param daysPtr Pointer to a Days structure.
 */
void DA_freeDays(Days_pt daysPtr);



#endif //PLATFORM_W3RESOURCE_BASIC_DECLARATIONS_AND_EXPRESSIONS_EXERCISE_19_DAYS_H
