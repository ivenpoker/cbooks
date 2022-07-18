//
// Created by ivenpoker on 7/12/22.
//

#ifndef PLATFORM_W3RESOURCE_BASIC_DECLARATIONS_AND_EXPRESSIONS_EXERCISE_8_H
#define PLATFORM_W3RESOURCE_BASIC_DECLARATIONS_AND_EXPRESSIONS_EXERCISE_8_H

typedef char * string_t;
typedef string_t * string_pt;
typedef const char * string_ct;

/**
 * Retrieve integer input from stdin.
 * @param message Message to associate with input retrieval
 * @return
 */
int retrieveUserInput(string_ct message);

/**
 * Convert day(s) to year(s)
 * @param days Day(s) to convert
 * @return Year(s) equivalent of day(s)
 */
int toYears(int days);

/**
 * Convert days to weeks
 * @param days days to convert
 * @return Week(s) equivalent of days(s).
 */
int toWeeks(int days);

#endif //PLATFORM_W3RESOURCE_BASIC_DECLARATIONS_AND_EXPRESSIONS_EXERCISE_8_H
