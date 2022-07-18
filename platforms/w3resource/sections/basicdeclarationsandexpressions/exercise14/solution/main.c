//
// Created by ivenpoker on 7/18/22.
//

#include <stdio.h>
#include "utils/utils.h"

double averageConsumption(double distance, double litres);

int main(int argc, string_t * argv) {
    double distanceCovered = retrieveInput("Enter total distance in km: ");
    double totalFuelSpent = retrieveInput("Enter total fuel spent: ");

    fprintf(stdout, "Average consumption (km/lt): %.2lf\n",
            averageConsumption(distanceCovered, totalFuelSpent));
}

double averageConsumption(double distance, double litres) {
    return (double) distance / litres;
}