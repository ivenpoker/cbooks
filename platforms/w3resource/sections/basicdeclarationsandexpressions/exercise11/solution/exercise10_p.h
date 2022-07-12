//
// Created by ivenpoker on 7/12/22.
//

#ifndef W3RESOURCE_EXERCISE_EXERCISE10_P_H
#define W3RESOURCE_EXERCISE_EXERCISE10_P_H

#include "exercise10.h"

#define isNull(val)                                 (val) == NULL
#define isNotNull(val)                              (val) != NULL

#define ITEM_MEMORY_ALLOCATION_ERROR                "Failed to allocate memory for item."

typedef struct Item {
    double weight;
    int numberOfPurchases
};
typedef struct Item Item_t;
typedef struct Item *Item_pt;

Item_pt createItem();

void terminateProgram(string_ct message);

double totalOf(Item_pt item);

#endif //W3RESOURCE_EXERCISE_EXERCISE10_P_H
