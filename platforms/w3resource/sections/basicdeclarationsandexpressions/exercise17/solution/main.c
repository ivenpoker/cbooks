//
// Created by ivenpoker on 7/18/22.
//

#include <stdlib.h>
#include "time/time.h"
#include "utils/utils.h"

int main(int argc, string_t *argv) {

    Time_pt newTime = TM_newTime(6712000);

    TM_displayTime(newTime);

    TM_freeTime(newTime);

    exit(EXIT_SUCCESS);
}