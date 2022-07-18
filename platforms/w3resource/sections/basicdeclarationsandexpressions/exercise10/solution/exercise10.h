//
// Created by ivenpoker on 7/12/22.
//

#ifndef PLATFORM_W3RESOURCE_BASIC_DECLARATIONS_AND_EXPRESSIONS_EXERCISE_10_H
#define PLATFORM_W3RESOURCE_BASIC_DECLARATIONS_AND_EXPRESSIONS_EXERCISE_10_H

typedef char * string_t;
typedef const char * string_ct;
typedef string_t * string_pt;

/**
 * Retrieve an integer input from the stdin.
 * @param message Message associated with user input.
 * @return Retrieve input from stdin
 */
int retrieveIntInput(string_ct message);

/**
 * Compute the product of two numbers.
 * @param val1 First number.
 * @param val2 Second number.
 * @return Product of the two numbers.
 */
int productOf(int val1, int val2);

#endif //PLATFORM_W3RESOURCE_BASIC_DECLARATIONS_AND_EXPRESSIONS_EXERCISE_10_H
