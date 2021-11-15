#ifndef _EQUIPMENT_H_
#define _EQUIPMENT_H_

typedef struct {
    char name[255];
    double price;
} Equipment;

void printEquipment();
Equipment inputEquipment();
int finEquipment(const char* fname, Equipment equipment);
Equipment foutEquipment(const char* fname);

#endif // _EQUIPMENT_H_
