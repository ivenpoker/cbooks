//
// Created by ivenpoker on 7/18/22.
//

#include <stdlib.h>
#include <stdio.h>
#include "point/point.h"
#include "input/input.h"

Point_pt createPoint(string_ct preMessage);

int main(int argc, char **argv) {
    Point_pt point1 = createPoint("Point1 (pt1) details...");
    Point_pt point2 = createPoint("\nPoint2 (pt2) details...");

    fprintf(stdout, "\nDistance between (pt1) and (pt2) is -> %.4f\n",
            PT_distanceBetweenPoints(point1, point2));

    PT_freePoint(point1);
    PT_freePoint(point2);

    exit(EXIT_SUCCESS);
}

Point_pt createPoint(string_ct preMessage) {
    fprintf(stdout, "%s\n", preMessage);

    double pt1x = retrieveInput("Enter point x-cord: ");
    double pt1y = retrieveInput("Enter point y-cord: ");

    return PT_newPoint(pt1x, pt1y);
}