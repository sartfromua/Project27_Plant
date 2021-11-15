#include "../Headers/Employee.h"
#include "../Headers/Date.h"
#include "../Headers/Profession.h"
#include "../Headers/Person.h"
#include <stdio.h>

void printEmployee(Employee employee) {
    printf("\n*****Employee*****");
    printPerson(employee.person);
    printProfession(employee.profession);
    printf("\nEmployed: ");
    printDate(employee.employed);
    printf(";  Experience: %g;  Product-rate: %g;  Salary: %g", employee.experience, employee.product_rate, employee.salary);
}


Employee inputEmployee() {
    Employee employee;
    printf("\n*****Employee*****");
    employee.person = inputPerson();
    employee.profession = inputProfession();
    printf("Employed date: ");
    employee.employed = inputDate();
    printf("Work experience: ");
    scanf("%lf", &employee.experience);
    printf("Product-rate: ");
    scanf("%lf", &employee.product_rate);

    double a = 1, b = 1, c = 1;
    employee.salary = (a*employee.experience)*(b*employee.product_rate)*(c*employee.profession.wage_rate); // formula ???

    return employee;
}


int finEmployee(const char* fname, Employee employee) {
    FILE *file = fopen(fname, "w");
    int res = fprintf(file, "%d %d %d %s %s %s %s %lf %s %lf %lf %d %d %d %lf %lf", employee.person.birthday.day, \
                      employee.person.birthday.month, \
                      employee.person.birthday.year, employee.person.name, employee.person.surname, employee.person.sex, \
                      employee.profession.name, employee.profession.wage_rate, employee.profession.equipment.name, \
                      employee.profession.equipment.price, employee.salary, employee.employed.day, employee.employed.month, \
                      employee.employed.year, employee.experience, employee.product_rate);
    fclose(file);
    return res;
}


Employee foutEmployee(const char* fname) {
    FILE *file = fopen(fname, "r");
    Employee employee;
    int res = fscanf(file, "%d %d %d %s %s %s %s %lf %s %lf %lf %d %d %d %lf %lf", &employee.person.birthday.day, \
                      &employee.person.birthday.month, \
                      &employee.person.birthday.year, &employee.person.name, &employee.person.surname, &employee.person.sex, \
                      &employee.profession.name, &employee.profession.wage_rate, &employee.profession.equipment.name, \
                      &employee.profession.equipment.price, &employee.salary, &employee.employed.day, &employee.employed.month, \
                      &employee.employed.year, &employee.experience, &employee.product_rate);
    fclose(file);
    return employee;
}
