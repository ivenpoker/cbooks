#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdio.h>

#define arraySize(arr)          (sizeof((arr)) / sizeof(*(arr)))
#define isNull(val)             ((val) == NULL)
#define isNotNull(val)          (!isNull((val)))
#define isEOF(val)              ((val) == EOF)
#define isStrEnd(val)           ((val) == '\0')
#define isStrEmpty(str)         (strlen((str)) == 0)
#define isZero(val)             ((val) == 0)
#define isNewLine(val)          ((val) == '\n')

struct item {
    int id;
    char *name;
    float price;
    struct item *next;
};

typedef struct item Item_t;
typedef struct item *Item_pt;

Item_pt createItem(int id, const char *name, float price);

int main() {


    exit(EXIT_SUCCESS);
}

Item_pt createItem(int id, const char *name, float price) {
    Item_pt newItem = (Item_pt) malloc(sizeof (Item_t));
    if (isNull(newItem)) {
        fprintf(stderr, "Memory allocation error");
        exit(EXIT_FAILURE);
    }
    newItem->name = (char *) malloc(sizeof (char) * (strlen(name) + 1));
    if (isNull(newItem->name)) {
        fprintf(stderr, "Memory allocation error");
        exit(EXIT_FAILURE);
    }
    strcpy(newItem->name, name);
    newItem->id = id;
    newItem->price = price;
    newItem->next = NULL;

    return newItem;
}