//
// Created by ivenpoker on 7/11/22.
//

#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include "main.h"

double retrieveRadius(string_t inputMessage);

int main(int argc, string_pt argv) {

    double radius = retrieveRadius("Enter circle's radius: ");

    fprintf(stdout, "\nResults...\n");
    fprintf(stdout, "Area of circle: %.2lf\n", areaOfCircle(radius));
    fprintf(stdout, "Perimeter of circle: %.2f\n", perimeterOfCircle(radius));

    exit(EXIT_SUCCESS);
}

double retrieveRadius(string_t inputMessage) {
    double radius = 0.0;
    fprintf(stdout, inputMessage);
    fscanf(stdin, "%lf", &radius);

    return radius;
}

double areaOfCircle(double radius) {
    return M_PI * radius * radius;
}

double perimeterOfCircle(double radius) {
    return 2 * M_PI * radius;
}
