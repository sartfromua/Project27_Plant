#ifndef _PROFESSION_H_
#define _PROFESSION_H_
#include "Profession.h"
#include "Equipment.h"

typedef struct {
    char name[255];
    double wage_rate;
    Equipment equipment;
} Profession;

Profession inputProfession();
void printProfession(Profession prof);
Profession finProfession(const char* fname);
int foutProfession(const char* fname, Profession profession);

#endif // _PROFESSION_H_
