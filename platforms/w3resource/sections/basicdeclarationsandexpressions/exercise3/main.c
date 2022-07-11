//
// Created by ivenpoker on 7/11/22.
//

#include <stdlib.h>
#include <stdio.h>
#include "main.h"

int main(int argc, string_pt argv) {

    displayF('#');

    fprintf(stdout, "\n");

    displayC();

    exit(EXIT_FAILURE);

}

void displayF(char displayChar) {
    int maxHeight = 7;
    int horizontalCount = 6;
    for (int i = 0; i < maxHeight; i++) {
        if (i == 0 || i == maxHeight / 2) {
            for (int j = 0; j < horizontalCount; j++) {
                fprintf(stdout, "%c", displayChar);
            }
            horizontalCount -= 1;
            fprintf(stdout, "\n");
            continue;
        }
        fprintf(stdout, "%c\n", displayChar);
    }
}

void displayC() {
    fprintf(stdout, "  #######\n");
    fprintf(stdout, " ##    ##\n");
    fprintf(stdout, "#        \n");
    fprintf(stdout, "#        \n");
    fprintf(stdout, "#        \n");
    fprintf(stdout, "#        \n");
    fprintf(stdout, "#        \n");
    fprintf(stdout, " ##    ##\n");
    fprintf(stdout, "  #######\n");
}