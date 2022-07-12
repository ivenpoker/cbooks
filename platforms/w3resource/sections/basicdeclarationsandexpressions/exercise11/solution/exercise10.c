//
// Created by ivenpoker on 7/12/22.
//

#include <stdlib.h>
#include <stdio.h>
#include "exercise10_p.h"

Item_pt IT_newItem(double weight, int numberOfPurchases) {
    Item_pt newItem = createItem();
    newItem->weight = weight;
    newItem->numberOfPurchases = numberOfPurchases;

    return newItem;
}

Item_pt createItem() {
    Item_pt newItem = (Item_pt) malloc(sizeof(Item_t));
    if (isNull(newItem)) {
        terminateProgram(ITEM_MEMORY_ALLOCATION_ERROR);
    }
    return newItem;
}

double IT_averageOf(Item_pt item1, Item_pt item2) {
    return (totalOf(item1) + totalOf(item2)) / (item1->numberOfPurchases + item2->numberOfPurchases);
}

void IT_freeItem(Item_pt item) {
    if (isNotNull(item)) {
        free(item);
    }
}

void terminateProgram(string_ct message) {
    fprintf(stderr, "%s. Terminating program...", message);
    exit(EXIT_FAILURE);
}

double IT_retrieveDoubleInput(string_ct message) {
    double input = 0.0;
    fprintf(stdout, "%s", message);
    fscanf(stdin, "%lf", &input);

    return input;
}

double totalOf(Item_pt item) {
    if (isNull(item)) {
        return 0.0;
    }
    return item->weight * item->numberOfPurchases;
}

