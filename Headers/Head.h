#ifndef _HEAD_H_
#define _HEAD_H_
#include "Person.h"
#include "Employee.h"

typedef struct {
    Person person;
    int emp_number;
    char employees[5][15];
} Head;

Head inputHead();
void printHead(Head head);
Head finHead(const char* fname);
int foutHead(const char* fname, Head head);

void addEmployeeToHead(Head *head, Employee emp);

#endif // _HEAD_H_
