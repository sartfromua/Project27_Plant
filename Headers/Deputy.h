#ifndef _DEPUTY_H_
#define _DEPUTY_H_
#include "Person.h"

typedef struct {
    Person person;
    char head[50];
} Deputy;

Deputy inputDeputy();
void printDeputy(Deputy deputy);
Deputy finDeputy(const char* fname);
int foutDeputy(const char* fname, Deputy deputy);

#endif // _DEPUTY_H_
