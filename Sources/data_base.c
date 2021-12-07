#include "../Headers/data_base.h"
#include <stdio.h>
#include <string.h>


int addEmployeeToDataBase(DataBase db, Employee employee) {
    FILE *file = fopen(db.fname, "a");
    int res = fprintf(file, "\n%s %d %d %d %s %s %s %s %g %s %g %g %d %d %d %g %g", \
                      "Employee", employee.person.birthday.day, employee.person.birthday.month, \
                      employee.person.birthday.year, employee.person.name, employee.person.surname, employee.person.sex, \
                      employee.profession.name, employee.profession.wage_rate, employee.profession.equipment.name, \
                      employee.profession.equipment.price, employee.salary, employee.employed.day, employee.employed.month, \
                      employee.employed.year, employee.experience, employee.product_rate);
    fclose(file);
    return res;
}


int addHeadToDataBase(DataBase db, Head head) {
    FILE *file = fopen(db.fname, "a");
    int res = fprintf(file, "\n%s %d %d %d %s %s %s %d", "Head", head.person.birthday.day, head.person.birthday.month, \
                      head.person.birthday.year, head.person.name, head.person.surname, head.person.sex, head.emp_number);
    for (int i=0; i<head.emp_number; i++) fprintf(file, " %s", head.employees[i]);
    fclose(file);
    return res;
}

int addDeputyToDataBase(DataBase db, Deputy dep) {
    FILE *file = fopen(db.fname, "a");
    int res = fprintf(file, "\n%s %d %d %d %s %s %s %s", "Deputy", dep.person.birthday.day, \
                      dep.person.birthday.month, dep.person.birthday.year, \
                      dep.person.name, dep.person.surname, dep.person.sex, dep.head);
    fclose(file);
    return res;
}


void printAllPeople(DataBase db) {
    FILE *file = fopen(db.fname, "r");
    while (!feof(file)) {
        char* cl_name;
        fscanf(file, "%s", &cl_name);
        if (strcmp(cl_name, "Employee") == 0) {
            Employee employee;
            int res = fscanf(file, "%d %d %d %s %s %s %s %g %s %g %g %d %d %d %g %g", &employee.person.birthday.day, \
                &employee.person.birthday.month, \
                &employee.person.birthday.year, &employee.person.name, &employee.person.surname, &employee.person.sex, \
                &employee.profession.name, &employee.profession.wage_rate, &employee.profession.equipment.name, \
                &employee.profession.equipment.price, &employee.salary, &employee.employed.day, &employee.employed.month, \
                &employee.employed.year, &employee.experience, &employee.product_rate);
            printEmployee(employee);
        }
        if (strcmp(cl_name, "Head") == 0) {
            Head head;
            int res = fscanf(file, "%d %d %d %s %s %s %d", &head.person.birthday.day, &head.person.birthday.month, \
                &head.person.birthday.year, &head.person.name, &head.person.surname, &head.person.sex, &head.emp_number);
            for (int i=0; i<head.emp_number; i++) fprintf(file, "%s", &head.employees[i]);
            printHead(head);
        }
        if (strcmp(cl_name, "Deputy") == 0) {
            Deputy deputy;
            int res = fscanf(file, "%d %d %d %s %s %s %s", &deputy.person.birthday.day, \
                &deputy.person.birthday.month, &deputy.person.birthday.year, \
                &deputy.person.name, &deputy.person.surname, &deputy.person.sex, &deputy.head);
            printDeputy(deputy);
        }
    }
    fclose(file);
}


double getPriceOfEquipmentUnderHead(DataBase db, Head head) {
    FILE *file = fopen(db.fname, "r");
    double res = 0;
    while (!feof(file)) {
        char cl_name[20];
        fscanf(file, "%s", &cl_name);
        if (strcmp(cl_name, "Employee") == 0) {
            Employee employee;
            fscanf(file, "%d %d %d %s %s %s %s %lf %s %lf %lf %d %d %d %lf %lf", &employee.person.birthday.day, \
                &employee.person.birthday.month, \
                &employee.person.birthday.year, &employee.person.name, &employee.person.surname, &employee.person.sex, \
                &employee.profession.name, &employee.profession.wage_rate, &employee.profession.equipment.name, \
                &employee.profession.equipment.price, &employee.salary, &employee.employed.day, &employee.employed.month, \
                &employee.employed.year, &employee.experience, &employee.product_rate);
            for (int i=0; i<head.emp_number; i++) {
                if (strcmp(employee.person.surname, head.employees[i]) == 0) {
                    res += employee.profession.equipment.price;
                    break;
                }
            }
        }
        if (strcmp(cl_name, "Head") == 0) {
            Head head1;
            fscanf(file, "%d %d %d %s %s %s %d", &head1.person.birthday.day, &head1.person.birthday.month, \
                &head1.person.birthday.year, &head1.person.name, &head1.person.surname, &head1.person.sex, &head1.emp_number);
            for (int i=0; i<head1.emp_number; i++) fprintf(file, "%s", &head1.employees[i]);
        }
        if (strcmp(cl_name, "Deputy") == 0) {
            Deputy deputy;
            fscanf(file, "%d %d %d %s %s %s %s", &deputy.person.birthday.day, \
                &deputy.person.birthday.month, &deputy.person.birthday.year, \
                &deputy.person.name, &deputy.person.surname, &deputy.person.sex, &deputy.head);
        }
    }
    fclose(file);
    return res;
}
