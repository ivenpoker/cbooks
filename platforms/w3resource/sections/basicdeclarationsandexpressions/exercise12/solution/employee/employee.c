//
// Created by ivenpoker on 7/12/22.
//

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "employee_p.h"
#include "../line/util/line.util.h"

Employee_pt EM_newEmployee(string_ct employeeId, int workingHours, double hourlySalary) {

    Employee_pt employee = newEmployee();
    if (isNull(employee)) {
        return NULL;
    }
    employee->id = (string_t) malloc(sizeof (char) * (strlen(employeeId) + 1));
    if (isNull(employee->id)) {
        return NULL;
    }
    strcpy((string_t) employee->id, employeeId);
    employee->totalWorkedHours = workingHours;
    employee->hourlySalary = hourlySalary;

    return employee;
}

void EM_displayEmployee(Employee_pt employee) {

    size_t maxLineLength = 8 + 15 + strlen(employee->id);
    size_t employeIdLength = 41;
    size_t employeeWorkingHoursStrLength = 25;
    size_t employeeHourlySalaryStrLength = 30;
    size_t employeeTotalEarnedStrLength = 30;

    char * employeeIdStr = (char *) malloc(sizeof(char) * employeIdLength);
    sprintf(employeeIdStr, "Employee (ID: %s)", employee->id);

    char * employeeTotalWorkingHoursStr = (char *) malloc(sizeof (char) * employeeWorkingHoursStrLength);
    sprintf(employeeTotalWorkingHoursStr, "Total working hours: %d", employee->totalWorkedHours);

    char * employeeHourlySalaryStr = (char *) malloc(sizeof (char) * employeeHourlySalaryStrLength);
    sprintf( employeeHourlySalaryStr, "Hourly Salary: $%.2f", employee->hourlySalary);

    char * employeeTotalEarnedStr = (char *) malloc(sizeof (char) * employeeTotalEarnedStrLength);
    sprintf(employeeTotalEarnedStr, "Total earned: $%.2f", employee->hourlySalary * employee->totalWorkedHours);


    displayLine(false, '+', '-', "", 2, '+', true, maxLineLength);
    displayLine(false, '|', ' ', employeeIdStr, 2, '|', true, maxLineLength);
    displayLine(false, '+', '-', "", 1, '+', true, maxLineLength);
    displayLine(false, '|', ' ', employeeTotalWorkingHoursStr, 2, '|', true, maxLineLength);
    displayLine(false, '|', ' ', employeeHourlySalaryStr, 2, '|', true, maxLineLength);
    displayLine(false, '|', ' ', employeeTotalEarnedStr, 2, '|', true, maxLineLength);
    displayLine(false, '+', '-', "", 1, '+', true, maxLineLength);

    free(employeeIdStr);
    free(employeeTotalWorkingHoursStr);
    free(employeeHourlySalaryStr);
    free(employeeTotalEarnedStr);

}

void EM_freeEmployee(Employee_pt employee) {
    if (isNotNull(employee)) {
        if (isNotNull(employee->id)) {
            free((void *) employee->id);
        }
        free(employee);
    }
}

Employee_pt newEmployee() {
    Employee_pt newEmployee = (Employee_pt) malloc(sizeof(Employee_t));
    return newEmployee;
}
