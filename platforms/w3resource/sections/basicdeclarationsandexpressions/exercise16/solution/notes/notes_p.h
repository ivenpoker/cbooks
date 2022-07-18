//
// Created by ivenpoker on 7/18/22.
//

#ifndef PLATFORM_W3RESOURCE_BASIC_DECLARATIONS_AND_EXPRESSIONS_EXERCISE_16_NOTES_P_H
#define PLATFORM_W3RESOURCE_BASIC_DECLARATIONS_AND_EXPRESSIONS_EXERCISE_16_NOTES_P_H

#include "notes.h"

#define isNull(val)                         ((val) == NULL)
#define isNotNull(val)                      ((val) != NULL)

#define DEFAULT_DISPLAY_ERROR_MESSAGE       "Failed to display notes to stdin"

#define MAX_DISPLAY_LINE_LEN                50
#define MAX_AMOUNTS_STR_LEN                 20
#define MAX_NOTE_FIELDS_LEN                 30

typedef struct Fields {
    size_t note100Cnt;
    size_t note50Cnt;
    size_t note20Cnt;
    size_t note10Cnt;
    size_t note5Cnt;
    size_t note2Cnt;
    size_t note1Cnt;
} Field_t;

typedef struct Notes {
    size_t amount;
    Field_t fields
};
typedef struct Notes Notes_t;
typedef struct Notes * Notes_pt;

size_t numberOfXs(size_t amount, size_t target);

#endif //PLATFORM_W3RESOURCE_BASIC_DECLARATIONS_AND_EXPRESSIONS_EXERCISE_16_NOTES_P_H
