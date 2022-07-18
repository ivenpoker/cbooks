//
// Created by ivenpoker on 7/12/22.
//

#ifndef PLATFORM_W3RESOURCE_BASIC_DECLARATIONS_AND_EXPRESSIONS_EXERCISE_12_EMPLOYEE_P_H
#define PLATFORM_W3RESOURCE_BASIC_DECLARATIONS_AND_EXPRESSIONS_EXERCISE_12_EMPLOYEE_P_H

#include "employee.h"

#define isNull(val)                                 (val) == NULL
#define isNotNull(val)                              (val) != NULL

#define EMPLOYEE_MEMORY_ALLOCATION_ERROR            "Encountered memory allocation issues while processing employee."

typedef struct Employee {
    string_ct id;
    int totalWorkedHours;
    double hourlySalary;
};

typedef struct Employee Employee_t;
typedef struct Employee * Employee_pt;

Employee_pt newEmployee();

#endif //PLATFORM_W3RESOURCE_BASIC_DECLARATIONS_AND_EXPRESSIONS_EXERCISE_12_EMPLOYEE_P_H
