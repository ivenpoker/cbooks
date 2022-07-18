//
// Created by ivenpoker on 7/12/22.
//

#ifndef PLATFORM_W3RESOURCE_BASIC_DECLARATIONS_AND_EXPRESSIONS_EXERCISE_9_H
#define PLATFORM_W3RESOURCE_BASIC_DECLARATIONS_AND_EXPRESSIONS_EXERCISE_9_H

typedef char * string_t;
typedef string_t * string_pt;
typedef const char * string_ct;

/**
 * Retrieve integer input from user.
 * @param message Message to associate with input retrieval.
 * @return integer input from stdin.
 */
int retrieveUserInput(string_ct message);

/**
 * Compute sum of two integer values
 * @param val1 First integer value.
 * @param val2 Second integer value.
 * @return Sum of the two integer values.
 */
int sumOf(int val1, int val2);

#endif //PLATFORM_W3RESOURCE_BASIC_DECLARATIONS_AND_EXPRESSIONS_EXERCISE_9_H
