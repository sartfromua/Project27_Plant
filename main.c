#include <stdio.h>
#include "structures.h"

int main() {
    Employee emp;
    emp.person.birthday.day = 10;
    printf("%d", emp.person.birthday.day);
    emp = inputEmployee();
    printEmployee(emp);
}
