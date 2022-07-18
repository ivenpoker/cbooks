//
// Created by ivenpoker on 7/18/22.
//

#include <stdlib.h>
#include "notes/notes.h"

int main(int argc, char **argv) {

    Notes_pt newNotes = NT_createNotes(375);
    NT_displayNotes(newNotes);

    NT_freeNotes(newNotes);

    exit(EXIT_SUCCESS);
}