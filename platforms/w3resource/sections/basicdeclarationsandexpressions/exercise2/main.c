//
// Created by ivenpoker on 7/11/22.
//

#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int main(int argc, string_pt argv) {

#if __STDC_VERSION__ >= 201710L
    fprintf(stdout, "We're using C18!\n");

#elif __STDC_VERSION__ >= 201112L
    fprintf(stdout, "We are using C11!\\n")

#elif __STDC_VERSION__ >= 199901L
    fprintf(stdout, "We're using C89/C90\n");
#endif

    exit(EXIT_SUCCESS);
}