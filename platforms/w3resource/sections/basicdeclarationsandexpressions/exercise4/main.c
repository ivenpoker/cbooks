//
// Created by ivenpoker on 7/11/22.
//

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "main.h"

int main(int argc, string_pt argv) {

    displayReverseOf("XML");

    exit(EXIT_SUCCESS);
}

void displayReverseOf(string_t chars) {
    fprintf(stdout, "Given string chars -> ");
    for (char *tmp = chars; isNotEndOfStr(*tmp); tmp++) {
        fprintf(stdout, "%c ", *tmp);
    }
    fprintf(stdout, "\nReverse is -> ");
    int strLen = (int) strlen(chars);

    for (int i = strLen - 1; i >= 0; i--) {
        fprintf(stdout, "%c ", *(chars + i));
    }
    fprintf(stdout, "\n");
}
