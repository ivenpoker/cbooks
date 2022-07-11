//
// Created by ivenpoker on 7/11/22.
//

#include <stdlib.h>
#include <stdio.h>
#include "main.h"

int main(int argc, string_pt argv) {

    double height = 0.0;
    double weight = 0.0;

    fprintf(stdout, "Enter height in inches: ");
    fscanf(stdin, "%lf", &height);

    fprintf(stdout, "Enter weight in inches: ");
    fscanf(stdin, "%lf", &weight);

    fprintf(stdout, "\nResults...");
    fprintf(stdout, "\nArea: %.2f", areaOf(height, weight));
    fprintf(stdout, "\nPerimeter: %.2f\n", perimeterOf(height, weight));

    exit(EXIT_SUCCESS);
}

double areaOf(double height, double width) {
    return height * width;
}

double perimeterOf(double height, double width) {
    return 2 * (height + width);
}
