#include "../Headers/Product.h"
#include "../Headers/Equipment.h"

void printProduct(Product product) {
    printf("\n%s - %g$, produced on %s", product.name, product.price, product.equipment.name);
}


Product inputProduct() {
    Product product;
    printf("\n*****Product*****");
    printf("\nName: ");
    scanf("%s", &product.name);
    printf("Price: ");
    scanf("%s", &product.price);
    product.equipment = inputEquipment();

    return product;
}

