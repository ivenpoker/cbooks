//
// Created by ivenpoker on 7/18/22.
//

#include <math.h>
#include <stdlib.h>
#include "point_p.h"

Point_pt PT_newPoint(double xCord, double yCord) {
    Point_pt newPoint = (Point_pt) malloc(sizeof(Point_t));
    if (isNull(newPoint)) {
        return NULL;
    }
    newPoint->xCord = xCord;
    newPoint->yCord = yCord;
}

double PT_distanceBetweenPoints(Point_pt pt1, Point_pt pt2) {
    if (isNull(pt1) || isNull(pt1)) {
        return 0.0;
    }
    return sqrt(pow(pt2->xCord - pt1->xCord, 2) + pow(pt2->yCord - pt1->yCord, 2));
}

void PT_freePoint(Point_pt point) {
    if (isNotNull(point)) {
        free(point);
    }
}