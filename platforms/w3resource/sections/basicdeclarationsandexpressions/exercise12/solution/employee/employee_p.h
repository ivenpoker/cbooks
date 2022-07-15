//
// Created by ivenpoker on 7/12/22.
//

#ifndef W3RESOURCE_EXERCISE_EMPLOYEE_P_H
#define W3RESOURCE_EXERCISE_EMPLOYEE_P_H

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

#endif //W3RESOURCE_EXERCISE_EMPLOYEE_P_H
