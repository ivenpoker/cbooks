//
// Created by ivenpoker on 7/18/22.
//

#include <stdlib.h>
#include "days/days.h"

int main(int argc, char **argv) {

    Days_pt newDays = DA_createDays(2535);

    DA_displayDays(newDays);

    exit(EXIT_SUCCESS);
}