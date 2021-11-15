#include "../Headers/Head.h"
#include "../Headers/Employee.h"
#include <stdio.h>

void printHead(Head head) {
    printf("\n*****Head*****");
    printEmployee(head.employee);
}


Head inputHead() {
    Head head;
    printf("\n*****Head*****");
    head.employee = inputEmployee();
    return head;
}


int finHead(const char* fname, Head head) {
    FILE *file = fopen(fname, "w");
    int res = fprintf(file, "%d %d %d %s %s %s %s %lf %s %lf %lf %d %d %d %lf %lf", head.employee.person.birthday.day, \
                      head.employee.person.birthday.month, head.employee.person.birthday.year, \
                      head.employee.person.name, head.employee.person.surname, head.employee.person.sex, \
                      head.employee.profession.name, head.employee.profession.wage_rate, \
                      head.employee.profession.equipment.name, head.employee.profession.equipment.price, \
                      head.employee.salary, head.employee.employed.day, head.employee.employed.month, \
                      head.employee.employed.year, head.employee.experience, head.employee.product_rate);
    fclose(file);
    return res;
}


Head foutHead(const char* fname) {
//    FILE *file = fopen(fname, "r");
//    Head head;
//    int res = fscanf(file, "%d %d %d %s %s %s %s %lf %s %lf %lf %d %d %d %lf %lf", &head.employee.person.birthday.day, \
//                      &head.employee.person.birthday.month, &head.employee.person.birthday.year, \
//                      &head.employee.person.name, &head.employee.person.surname, &head.employee.person.sex, \
//                      &head.employee.profession.name, &head.employee.profession.wage_rate, \
//                      &head.employee.profession.equipment.name, &head.employee.profession.equipment.price, \
//                      &head.employee.salary, &head.employee.employed.day, &head.employee.employed.month, \
//                      &head.employee.employed.year, &head.employee.experience, &head.employee.product_rate);
//    fclose(file);
    Head head;
    head.employee = foutEmployee(fname);
    return head;
}
