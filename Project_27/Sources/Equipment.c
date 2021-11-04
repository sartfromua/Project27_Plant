#include "../Headers/Equipment.h"

Equipment inputEquipment() {
    Equipment equipment;
    printf("\n*****Equipment*****");
    printf("\nName: ");
    scanf("%s", &equipment.name);
    printf("Price: ");
    scanf("%s", &equipment.price);
    // product?
    //
    return equipment;
}


void printEquipment(Equipment equip) {
    printf("\n%s - %g$", equip.name, equip.price);
}
