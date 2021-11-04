#include "../Headers/Profession.h"
#include "../Headers/Equipment.h"

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
