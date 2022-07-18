//
// Created by ivenpoker on 7/18/22.
//

#ifndef PLATFORM_W3RESOURCE_BASIC_DECLARATIONS_AND_EXPRESSIONS_EXERCISE_15_POINT_P_H
#define PLATFORM_W3RESOURCE_BASIC_DECLARATIONS_AND_EXPRESSIONS_EXERCISE_15_POINT_P_H

#include "point.h"

#define isNull(val)                             ((val) == NULL)
#define isNotNull(val)                          ((val) != NULL)

typedef struct Point {
    double xCord;
    double yCord;
};
typedef struct Point Point_t;
typedef struct Point * Point_pt;

#endif //PLATFORM_W3RESOURCE_BASIC_DECLARATIONS_AND_EXPRESSIONS_EXERCISE_15_POINT_P_H
