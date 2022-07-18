//
// Created by ivenpoker on 7/18/22.
//

#ifndef PLATFORM_W3RESOURCE_BASIC_DECLARATIONS_AND_EXPRESSIONS_EXERCISE_16_NOTES_H
#define PLATFORM_W3RESOURCE_BASIC_DECLARATIONS_AND_EXPRESSIONS_EXERCISE_16_NOTES_H

#include <stddef.h>

typedef struct Notes;
typedef struct Notes Notes_t;
typedef struct Notes * Notes_pt;

/**
 * Create notes structure for an amount.
 * @param amount Amount associated with structure
 * @return  New notes structure
 */
Notes_pt NT_createNotes(size_t amount);

/**
 * Get number of 100s in structure (in amount).
 * @param notes A pointer to notes structure.
 * @return Number of 100s in structure.
 */
size_t NT_get100Notes(Notes_pt notes);

/**
 * Get number of 50s in structure (in amount).
 * @param notes A pointer to notes structure.
 * @return Number of 100s in structure.
 */
size_t NT_get50Notes(Notes_pt notes);

/**
 * Get number of 20s in structure (in amount).
 * @param notes A pointer to notes structure.
 * @return Number of 20s in structure.
 */
size_t NT_get20Notes(Notes_pt notes);

/**
 * Get number of 10s in structure (in amount).
 * @param notes A pointer to notes structure.
 * @return Number of 10s in structure.
 */
size_t NT_get10Notes(Notes_pt notes);

/**
 * Get number of 5s in structure (in amount)
 * @param notes A pointer to notes structure.
 * @return Number of 5s in structure.
 */
size_t NT_get5Notes(Notes_pt notes);

/**
 * Get number of 2s in structure (in amount)
 * @param notes A pointer to notes structure.
 * @return Number of 2s in structure.
 */
size_t NT_get2Notes(Notes_pt notes);

/**
 * Get number of 1s in structure (in amount)
 * @param notes A pointer to notes structure.
 * @return
 */
size_t NT_get1Notes(Notes_pt notes);

/**
 * Display notesPtr to the stdout
 * @param notesPtr Notes to display
 */
void NT_displayNotes(Notes_pt notesPtr);

/**
 * Reclaim notes resources.
 * @param notesPtr Pointer to notes structure.
 */
void NT_freeNotes(Notes_pt notesPtr);

#endif //PLATFORM_W3RESOURCE_BASIC_DECLARATIONS_AND_EXPRESSIONS_EXERCISE_16_NOTES_H
