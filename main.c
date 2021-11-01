#include <stdio.h>
#include "structures.h"

int main() {
    Employee emp;
    printf("%d", emp.person.birthday.day);
    emp = inputEmployee();
    printEmployee(emp);
}
