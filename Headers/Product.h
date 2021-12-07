#ifndef _PRODUCT_H_
#define _PRODUCT_H_
#include "Equipment.h"

typedef struct {
    char name[255];
    double price;
    Equipment equipment;
} Product;

Product inputProduct();
void printProduct(Product product);
Product finProduct(const char* fname);
int foutProduct(const char* fname, Product product);

#endif // _PRODUCT_H_
