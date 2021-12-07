#include "../Headers/Head.h"
#include "../Headers/Person.h"
#include "../Headers/Employee.h"
#include <stdio.h>
#include <string.h>

void printHead(Head head) {
    printf("\n*****Head*****");
    printPerson(head.person);
    printf("\nEmployees:");
    for (int i=0; i<head.emp_number; i++) {
        printf(" %s", head.employees[i]);
    }
}


Head inputHead() {
    Head head;
    printf("\n*****Head*****");
    head.person = inputPerson();
    return head;
}


int foutHead(const char* fname, Head head) {
    FILE *file = fopen(fname, "w");
    int res = fprintf(file, "%d %d %d %s %s %s %d", head.person.birthday.day, head.person.birthday.month, \
                      head.person.birthday.year, head.person.name, head.person.surname, head.person.sex, head.emp_number);
    for (int i=0; i<head.emp_number; i++) fprintf(file, " %s", head.employees[i]);
    fclose(file);
    return res;
}


Head finHead(const char* fname) {
    FILE *file = fopen(fname, "r");
    Head head;
    int res = fscanf(file, "%d %d %d %s %s %s %d", &head.person.birthday.day, &head.person.birthday.month, \
                      &head.person.birthday.year, &head.person.name, &head.person.surname, &head.person.sex, &head.emp_number);
    for (int i=0; i<head.emp_number; i++) fscanf(file, " %s", &head.employees[i]);
    fclose(file);
    return head;
}


void addEmployeeToHead(Head *head, Employee emp) {
    strcpy(head->employees[head->emp_number], emp.person.surname);
    head->emp_number += 1;
}
