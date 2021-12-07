#ifndef _EQUIPMENT_H_
#define _EQUIPMENT_H_

typedef struct {
    char name[255];
    double price;
} Equipment;

void printEquipment(Equipment equip);
Equipment inputEquipment();
Equipment finEquipment(const char* fname);
int foutEquipment(const char* fname, Equipment equipment);

#endif // _EQUIPMENT_H_
