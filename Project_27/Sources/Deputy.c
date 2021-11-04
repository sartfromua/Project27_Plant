#include "../Headers/deputy.h"
#include "../Headers/employee.h"
#include <stdio.h>


Deputy inputDeputy() {
    Deputy deputy;
    printf("/n*****Deputy*****");
    deputy.employee = inputEmployee();

    return deputy;
}


void printDeputy(Deputy deputy) {
    printf("\n*****Deputy*****");
    printEmployee(deputy.employee);
}


int finDeputy(const char* fname, Deputy deputy) {

}
