//
// Created by ivenpoker on 7/12/22.
//

#include <stdio.h>
#include <stdlib.h>
#include "exercise10.h"

int main(int argc, string_pt argv) {

    fprintf(stdout, "Retrieving Item1 details...\n");
    double item1Weight = IT_retrieveDoubleInput("Enter item1's weight: ");
    int item1Number = (int) IT_retrieveDoubleInput("Enter item1's purchase count: ");

    Item_pt item1 = IT_newItem(item1Weight, item1Number);

    fprintf(stdout, "\nRetrieving Item1 details...\n");
    double item2Weight = IT_retrieveDoubleInput("Enter item2's weight: ");
    int item2Number = (int) IT_retrieveDoubleInput("Enter item2's purchase count: ");

    Item_pt item2 = IT_newItem(item2Weight, item2Number);

    fprintf(stdout, "\nResults...\n");
    fprintf(stdout, "Average value of items: %.6lf\n", IT_averageOf(item1, item2));

    // Reclaim resources

    IT_freeItem(item1);
    IT_freeItem(item2);






    exit(EXIT_SUCCESS);
}