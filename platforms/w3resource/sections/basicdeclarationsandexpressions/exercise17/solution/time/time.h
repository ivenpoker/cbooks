//
// Created by ivenpoker on 7/18/22.
//

#ifndef PLATFORM_W3RESOURCE_BASIC_DECLARATIONS_AND_EXPRESSIONS_EXERCISE_17_TIME_H
#define PLATFORM_W3RESOURCE_BASIC_DECLARATIONS_AND_EXPRESSIONS_EXERCISE_17_TIME_H

#include <stddef.h>


typedef struct Time;
typedef struct Time Time_t;
typedef struct Time * Time_pt;

/**
 * Create new time structure from time's total seconds
 * @param totalSeconds Total seconds associated with time
 * @return
 */
Time_pt TM_newTime(size_t totalSeconds);

/**
 * Display time using the time structure.
 * @param timePtr Time structure to display it's time
 */
void TM_displayTime(Time_pt timePtr);

/**
 * Release memory resources associated with time.
 * @param timePtr Pointer to time structure.
 */
void TM_freeTime(Time_pt timePtr);

#endif //PLATFORM_W3RESOURCE_BASIC_DECLARATIONS_AND_EXPRESSIONS_EXERCISE_17_TIME_H
