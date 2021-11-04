#ifndef _HEAD_H_
#define _HEAD_H_
#include "Employee.h"

typedef struct {
    Employee employee;
} Head;

Head inputHead();
void printHead();

#endif // _HEAD_H_
