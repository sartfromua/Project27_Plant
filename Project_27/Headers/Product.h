#ifndef _PRODUCT_H_
#define _PRODUCT_H_
#include "Equipment.h"

typedef struct {
    char name[255];
    double price;
    Equipment equipment; // ??? equipment in product or product in equipment ???
} Product;

Equipment inputEquipment();
void printEquipment();

#endif // _PRODUCT_H_
