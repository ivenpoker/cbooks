//
// Created by ivenpoker on 7/12/22.
//

#ifndef W3RESOURCE_EXERCISE_EXERCISE10_H
#define W3RESOURCE_EXERCISE_EXERCISE10_H

typedef struct Item;
typedef struct Item *Item_pt;

typedef char * string_t;
typedef const char * string_ct;
typedef string_t * string_pt;

/**
 * Creates new item with specified weight and number of purchases.
 * @param weight Item's weight.
 * @param numberOfPurchases Item's number of purchases.
 * @return A new item
 */
Item_pt IT_newItem(double weight, int numberOfPurchases);


/**
 * Computes the average of two items.
 * @param item1 First item.
 * @param item2 Second item.
 * @return Average of the two items.
 */
double IT_averageOf(Item_pt item1, Item_pt item2);

/**
 * Retrieve double input from stdin with associated message.
 * @param message Message to associate with input retrieval.
 * @return Some double input from stdin
 */
double IT_retrieveDoubleInput(string_ct message);

/**
 * Release/Free/Destroy an item from allocated resources.
 * @param item Item whose resources need to be freed
 */
void IT_freeItem(Item_pt item);

#endif //W3RESOURCE_EXERCISE_EXERCISE10_H
