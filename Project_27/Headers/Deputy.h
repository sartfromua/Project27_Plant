#ifndef _DEPUTY_H_
#define _DEPUTY_H_
#include "Employee.h"

typedef struct {
    Employee employee;
} Deputy;

Deputy inputDeputy();
void printDeputy();
int finDeputy(const char* fname, Deputy deputy);
Deputy foutDeputy(const char* fname);

#endif // _DEPUTY_H_
