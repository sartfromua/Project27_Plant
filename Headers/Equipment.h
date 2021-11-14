#ifndef EQUIPMENT_H
#define EQUIPMENT_H
#include <iostream>
#include <string>
#include "Product.h"
using namespace std;

class Equipment {
    public:
        string name;
        double price;

        void input();
        void print();
        int fin(const char* fname);
        int fout(const char* fname);

        Equipment(string name, double price);
        Equipment();
        ~Equipment();
};

#endif // EQUIPMENT_H
