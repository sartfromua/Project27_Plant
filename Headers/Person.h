#ifndef _PERSON_H_
#define _PERSON_H_
#include "Date.h"
typedef struct {
    char name[255], surname[255];
    char sex[255];
    date birthday;
} Person;


Person inputPerson();
void printPerson(Person person);
Person finPerson(const char* fname);
int foutPerson(const char* fname, Person person);

#endif // _PERSON_H_
