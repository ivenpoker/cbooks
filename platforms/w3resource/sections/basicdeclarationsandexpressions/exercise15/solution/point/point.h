//
// Created by ivenpoker on 7/18/22.
//

#ifndef PLATFORM_W3RESOURCE_BASIC_DECLARATIONS_AND_EXPRESSIONS_EXERCISE_15_POINT_H
#define PLATFORM_W3RESOURCE_BASIC_DECLARATIONS_AND_EXPRESSIONS_EXERCISE_15_POINT_H

typedef struct Point;
typedef struct Point Point_t;
typedef struct Point * Point_pt;

Point_pt PT_newPoint(double xCord, double yCord);

double PT_distanceBetweenPoints(Point_pt pt1, Point_pt pt2);

void PT_freePoint(Point_pt point);

#endif //PLATFORM_W3RESOURCE_BASIC_DECLARATIONS_AND_EXPRESSIONS_EXERCISE_15_POINT_H
