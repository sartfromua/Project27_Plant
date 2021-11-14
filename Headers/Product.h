#ifndef __PRODUCT_H__
#define __PRODUCT_H__
#include <iostream>
#include <string>
using namespace std;

class Product
{
    public:
        string name;
        double price;

        void input();
        void print();
        int fin(const char* fname);
        int fout(const char* fname);

        Product();
        Product(string name, double price);
        ~Product();

};

#endif // __PRODUCT_H__
