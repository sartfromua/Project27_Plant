#include "../Headers/deputy.h"
#include "../Headers/employee.h"
#include <stdio.h>


Deputy inputDeputy() {
    Deputy deputy;
    printf("\n*****Deputy*****");
    deputy.employee = inputEmployee();

    return deputy;
}


void printDeputy(Deputy deputy) {
    printf("\n*****Deputy*****");
    printEmployee(deputy.employee);
}


int finDeputy(const char* fname, Deputy deputy) {
    FILE *file = fopen(fname, "w");
    int res = fprintf(file, "%d %d %d %s %s %s %s %lf %s %lf %lf %d %d %d %lf %lf", deputy.employee.person.birthday.day, \
                      deputy.employee.person.birthday.month, deputy.employee.person.birthday.year, \
                      deputy.employee.person.name, deputy.employee.person.surname, deputy.employee.person.sex, \
                      deputy.employee.profession.name, deputy.employee.profession.wage_rate, \
                      deputy.employee.profession.equipment.name, deputy.employee.profession.equipment.price, \
                      deputy.employee.salary, deputy.employee.employed.day, deputy.employee.employed.month, \
                      deputy.employee.employed.year, deputy.employee.experience, deputy.employee.product_rate);
    fclose(file);
    return res;
}


Deputy foutDeputy(const char* fname) {
//    FILE *file = fopen(fname, "r");
//    Deputy deputy;
//    int res = fscanf(file, "%d %d %d %s %s %s %s %lf %s %lf %lf %d %d %d %lf %lf", &deputy.employee.person.birthday.day, \
//                      &deputy.employee.person.birthday.month, &deputy.employee.person.birthday.year, \
//                      &deputy.employee.person.name, &deputy.employee.person.surname, &deputy.employee.person.sex, \
//                      &deputy.employee.profession.name, &deputy.employee.profession.wage_rate, \
//                      &deputy.employee.profession.equipment.name, &deputy.employee.profession.equipment.price, \
//                      &deputy.employee.salary, &deputy.employee.employed.day, &deputy.employee.employed.month, \
//                      &deputy.employee.employed.year, &deputy.employee.experience, &deputy.employee.product_rate);
//    fclose(file);
    Deputy deputy;
    deputy.employee = foutEmployee(fname);
    return deputy;
}
