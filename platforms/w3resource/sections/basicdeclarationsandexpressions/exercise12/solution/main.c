//
// Created by ivenpoker on 7/12/22.
//

#include <stdlib.h>
#include "employee/employee.h"

int main(int argc, string_pt argv) {

    // Create employees (structures)
    Employee_pt employee1 = EM_newEmployee("99862eff-9132-40f9-95c1-0ec30cfe1946", 0, 4.50);
    Employee_pt employee2 = EM_newEmployee("fa66e231-7abb-4716-a0bb-5f1fe0f4dbc2", 70, 14.50);

    // Display employees information
    EM_displayEmployee(employee1);
    EM_displayEmployee(employee2);

    // Destroy employee information (reclaim memory)
    EM_freeEmployee(employee1);
    EM_freeEmployee(employee2);

    return EXIT_FAILURE;
}