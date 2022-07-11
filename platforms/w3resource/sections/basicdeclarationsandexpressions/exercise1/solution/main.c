//
// Created by ivenpoker on 7/11/22.
//

#include <stdio.h>
#include <stdlib.h>

typedef char *string_t;
typedef string_t *string_pt;

int main(int argc, string_pt argv) {

    string_t myName = "ivenpoker";
    string_t dateOfBirth = "July 14, 1975";
    string_t mobile = "99-9999999999";

    fprintf(stdout, "  Name: %s\n", myName);
    fprintf(stdout, "   DOB: %s\n", dateOfBirth);
    fprintf(stdout, "Mobile: %s\n", mobile);

    exit(EXIT_SUCCESS);

}