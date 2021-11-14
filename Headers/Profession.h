#ifndef PROFESSION_H
#define PROFESSION_H
#include <iostream>
#include <string>
#include "Equipment.h"
#include "Product.h"
using namespace std;


class Profession{
    public:
        string name;
        double wage_rate;
        Equipment equipment;
        Product product;

        void input();
        void print();
        int fin(const char* fname);
        int fout(const char* fname);

        Profession(string name, double wage_rate, string eq_name, double eq_price, string prod_name, double prod_price);
        Profession();
        ~Profession();
};

#endif // PROFESSION_H
