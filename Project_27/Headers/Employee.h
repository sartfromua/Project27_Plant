#ifndef _EMPLOYEE_H_
#define _EMPLOYEE_H_
#include "Date.h"
#include "Profession.h"
#include "Person.h"

typedef struct {
    Person person;
    Profession profession;
    double salary;
    date employed;
    double experience;
    double product_rate;
} Employee;

Employee inputEmployee();
void printEmployee();

#endif // _EMPLOYEE_H_
