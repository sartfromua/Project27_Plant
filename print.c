#include <stdio.h>
#include "structures.h"


void printDate(date date1) {
    printf(" %d.%d.%d", date1.day, date1.month, date1.year);
}


void printPerson(Person person) {
    printf("\n%s %s %s", person.name, person.surname, person.sex);
    printDate(person.birthday);
}


void printEquipment(Equipment equip) {
    printf("\n%s - %g$", equip.name, equip.price);
}


void printProduct(Product product) {
    printf("\n%s - %g$, produced on %s", product.name, product.price, product.equipment.name);
}


void printProfession(Profession prof) {
    printf("\n%s using %s, wage-rate: %g", prof.name, prof.equipment.name, prof.wage_rate);
}


void printEmployee(Employee employee) {
    printf("\n*****Employee*****");
    printPerson(employee.person);
    printProfession(employee.profession);
    printf("\nEmployed: ");
    printDate(employee.employed);
    printf(";  Experience: %g;  Product-rate: %g;  Salary: %g", employee.experience, employee.product_rate, employee.salary);
}


void printHead(Head head) {
    printf("\n*****Head*****");
    printEmployee(head.employee);
}


void printDeputy(Deputy deputy) {
    printf("\n*****Deputy*****");
    printEmployee(deputy.employee);
}
