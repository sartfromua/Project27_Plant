#ifndef _HEAD_H_
#define _HEAD_H_
#include "Employee.h"

typedef struct {
    Employee employee;
} Head;

Head inputHead();
void printHead();
int intHead(const char* fname, Head head);
Head foutHead(const char* fname);

#endif // _HEAD_H_
