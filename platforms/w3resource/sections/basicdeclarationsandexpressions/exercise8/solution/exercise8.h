//
// Created by ivenpoker on 7/12/22.
//

#ifndef W3RESOURCE_EXERCISE_EXERCISE8_H
#define W3RESOURCE_EXERCISE_EXERCISE8_H

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

#endif //W3RESOURCE_EXERCISE_EXERCISE8_H
