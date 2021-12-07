#include "../Headers/Profession.h"
#include "../Headers/Equipment.h"
#include <stdio.h>

void printProfession(Profession prof) {
    printf("\n%s using %s, wage-rate: %g", prof.name, prof.equipment.name, prof.wage_rate);
}


Profession inputProfession() {
    Profession profession;
    printf("\n*****Profession*****");
    printf("\nName: ");
    scanf("%s", &profession.name);
    printf("Wage-rate: ");
    scanf("%lf", &profession.wage_rate);
    profession.equipment = inputEquipment();
    return profession;
}


int foutProfession(const char* fname, Profession profession) {
    FILE *file = fopen(fname, "w");
    int res = fprintf(file, "%s %lf %s %lf", profession.name, profession.wage_rate, profession.equipment.name, \
                      profession.equipment.price);
    fclose(file);
    return res;
}


Profession finProfession(const char* fname) {
    FILE *file = fopen(fname, "r");
    Profession profession;
    int res = fscanf(file, "%s %lf %s %lf", &profession.name, &profession.wage_rate, &profession.equipment.name, \
                      &profession.equipment.price);
    fclose(file);
    return profession;
}
