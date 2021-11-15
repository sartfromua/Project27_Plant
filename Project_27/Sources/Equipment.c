#include "../Headers/Equipment.h"
#include <stdio.h>

Equipment inputEquipment() {
    Equipment equipment;
    printf("\n*****Equipment*****");
    printf("\nName: ");
    scanf("%s", &equipment.name);
    printf("Price: ");
    scanf("%lf", &equipment.price);
    return equipment;
}


void printEquipment(Equipment equip) {
    printf("\n%s - %g$", equip.name, equip.price);
}


int finEquipment(const char* fname, Equipment equipment) {
    FILE *file = fopen(fname, "w");
    int res = fprintf(file, "%s %lf", equipment.name, equipment.price);
    fclose(file);
    return res;
}


Equipment foutEquipment(const char* fname) {
    FILE *file = fopen(fname, "r");
    Equipment equipment;
    int res = fscanf(file, "%s %lf", &equipment.name, &equipment.price);
    fclose(file);
    return equipment;
}
