//
// Created by ivenpoker on 7/18/22.
//

#include <stdlib.h>
#include <stdio.h>
#include "notes_p.h"
#include "../utils/utils.h"

Notes_pt NT_createNotes(size_t amount) {
    Notes_pt newNotes = (Notes_pt) malloc(sizeof (Notes_t));
    if (isNull(newNotes)) {
        return NULL;
    }
    newNotes->amount = amount;
    newNotes->fields.note100Cnt = numberOfXs(amount, 100);
    amount -= (newNotes->fields.note100Cnt * 100);

    newNotes->fields.note50Cnt = numberOfXs(amount, 50);
    amount -= (newNotes->fields.note50Cnt * 50);

    newNotes->fields.note20Cnt = numberOfXs(amount, 20);
    amount -= (newNotes->fields.note20Cnt * 20);

    newNotes->fields.note10Cnt = numberOfXs(amount, 10);
    amount -= (newNotes->fields.note10Cnt * 10);

    newNotes->fields.note5Cnt = numberOfXs(amount, 5);
    amount -= (newNotes->fields.note5Cnt * 5);

    newNotes->fields.note2Cnt = numberOfXs(amount, 2);
    amount -= (newNotes->fields.note2Cnt * 2);

    newNotes->fields.note1Cnt = numberOfXs(amount, 1);

    return newNotes;
}

void NT_displayNotes(Notes_pt notesPtr) {
    char *amountStr = (char *) malloc(sizeof (char) * MAX_AMOUNTS_STR_LEN);
    if (isNull(amountStr)) {
        fprintf(stderr, DEFAULT_DISPLAY_ERROR_MESSAGE);
        return;
    }
    sprintf(amountStr, "Amount: %zu", notesPtr->amount);

    displayLine(false, '+', '-', "", 1, '+', true, MAX_DISPLAY_LINE_LEN);
    displayLine(false, '|', ' ', amountStr, 2, '|', true, MAX_DISPLAY_LINE_LEN);
    displayLine(false, '+', '-', "", 1, '+', true, MAX_DISPLAY_LINE_LEN);

    char *notesStr = (char *) malloc(sizeof(char) * MAX_NOTE_FIELDS_LEN);
    if (isNull(notesStr)) {
        fprintf(stderr, DEFAULT_DISPLAY_ERROR_MESSAGE);
        return;
    }
    sprintf(notesStr, "Number of 100 notes: %zu", notesPtr->fields.note100Cnt);
    displayLine(false, '|', ' ', notesStr, 2, '|', true, MAX_DISPLAY_LINE_LEN);

    sprintf(notesStr, "Number of 50 notes: %zu", notesPtr->fields.note50Cnt);
    displayLine(false, '|', ' ', notesStr, 2, '|', true, MAX_DISPLAY_LINE_LEN);

    sprintf(notesStr, "Number of 20 notes: %zu", notesPtr->fields.note20Cnt);
    displayLine(false, '|', ' ', notesStr, 2, '|', true, MAX_DISPLAY_LINE_LEN);

    sprintf(notesStr, "Number of 10 notes: %zu", notesPtr->fields.note10Cnt);
    displayLine(false, '|', ' ', notesStr, 2, '|', true, MAX_DISPLAY_LINE_LEN);

    sprintf(notesStr, "Number of 5 notes: %zu", notesPtr->fields.note5Cnt);
    displayLine(false, '|', ' ', notesStr, 2, '|', true, MAX_DISPLAY_LINE_LEN);

    sprintf(notesStr, "Number of 2 notes: %zu", notesPtr->fields.note5Cnt);
    displayLine(false, '|', ' ', notesStr, 2, '|', true, MAX_DISPLAY_LINE_LEN);

    sprintf(notesStr, "Number of 1 notes: %zu", notesPtr->fields.note1Cnt);
    displayLine(false, '|', ' ', notesStr, 2, '|', true, MAX_DISPLAY_LINE_LEN);

    displayLine(false, '+', '-', "", 1, '+', true, MAX_DISPLAY_LINE_LEN);

    free(amountStr);
    free(notesStr);
}

void NT_freeNotes(Notes_pt notesPtr) {
    if (isNotNull(notesPtr)) {
        free(notesPtr);
    }
}

size_t numberOfXs(size_t amount, size_t target) {
    size_t count = 0;
    while (amount >= target) {
        count += 1;
        amount -= target;
    }
    return count;
}

size_t NT_get100Notes(Notes_pt notes) {
    if (isNull(notes)) {
        return 0;
    }
    return notes->fields.note100Cnt;
}

size_t NT_get50Notes(Notes_pt notes) {
    if (isNull(notes)) {
        return 0;
    }
    return notes->fields.note50Cnt;
}

size_t NT_get20Notes(Notes_pt notes) {
    if (isNull(notes)) {
        return 0;
    }
    return notes->fields.note20Cnt;
}

size_t NT_get10Notes(Notes_pt notes) {
    if (isNull(notes)) {
        return 0;
    }
    return notes->fields.note10Cnt;
}

size_t NT_get5Notes(Notes_pt notes) {
    if (isNull(notes)) {
        return 0;
    }
    return notes->fields.note5Cnt;
}

size_t NT_get2Notes(Notes_pt notes) {
    if (isNull(notes)) {
        return 0;
    }
    return notes->fields.note2Cnt;
}

size_t NT_get1Notes(Notes_pt notes) {
    if (isNull(notes)) {
        return 0;
    }
    return notes->fields.note1Cnt;
}
