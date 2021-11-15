#include "../Headers/Product.h"
#include "../Headers/Equipment.h"
#include <stdio.h>

void printProduct(Product product) {
    printf("\n%s - %g$, produced on %s (%g)", product.name, product.price, product.equipment.name, product.equipment.price);
}


Product inputProduct() {
    Product product;
    printf("\n*****Product*****");
    printf("\nName: ");
    scanf("%s", &product.name);
    printf("Price: ");
    scanf("%lf", &product.price);
    product.equipment = inputEquipment();

    return product;
}


int finProduct(const char* fname, Product product) {
    FILE *file = fopen(fname, "w");
    int res = fprintf(file, "%s %lf %s %lf", product.name, product.price, product.equipment.name, product.equipment.price);
    fclose(file);
    return res;
}


Product foutProduct(const char* fname) {
    FILE *file = fopen(fname, "r");
    Product product;
    int res = fscanf(file, "%s %lf %s %lf", &product.name, &product.price, &product.equipment.name, &product.equipment.price);
    fclose(file);
    return product;
}
