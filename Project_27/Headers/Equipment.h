#ifndef _EQUIPMENT_H_
#define _EQUIPMENT_H_

typedef struct {
    char name[255];
    double price;
} Equipment;

void printEquipment();
Equipment inputEquipment();

#endif // _EQUIPMENT_H_
