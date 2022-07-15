//
// Created by ivenpoker on 7/12/22.
//

#ifndef W3RESOURCE_EXERCISE_EMPLOYEE_H
#define W3RESOURCE_EXERCISE_EMPLOYEE_H

typedef char *string_t;
typedef const char *string_ct;
typedef string_t *string_pt;

typedef struct Employee;
typedef struct Employee Employee_t;
typedef struct Employee *Employee_pt;

/**
 * Create new employee with associated details.
 * @param employeeId Employee's ID.
 * @param workingHours Number of working hours for employee.
 * @param hourlySalary Hourly
 * @return Pointer to newly created employee.
 */
Employee_pt EM_newEmployee(string_ct employeeId, int workingHours, double hourlySalary);

/**
 * Display an employee information to the stdin.
 * @param employee Display employee information.
 */
void EM_displayEmployee(Employee_pt employee);

/**
 * Release employee resources
 * @param employee Employee to relinquish its resources.
 */
void EM_freeEmployee(Employee_pt employee);

#endif //W3RESOURCE_EXERCISE_EMPLOYEE_H
