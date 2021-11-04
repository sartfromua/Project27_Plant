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
void printProfession();

#endif // _PROFESSION_H_
