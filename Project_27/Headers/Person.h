#ifndef _PERSON_H_
#define _PERSON_H_
#include "Date.h"
typedef struct {
    char name[255], surname[255];
    char sex[255];
    date birthday;
} Person;


Person inputPerson();
void printPerson();
int finPerson(const char* fname, Person person);
Person foutPerson(const char* fname);

#endif // _PERSON_H_
