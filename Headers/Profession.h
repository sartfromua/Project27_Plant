#ifndef PROFESSION_H
#define PROFESSION_H
#include <iostream>
#include <string>
#include "Equipment.h"
#include "Product.h"
using namespace std;


/**
 @class Equipment
 saves data of equipment: name, wage-rate, equipment, producing product
 input, print methods to work with class in console
 methods fin/fout takes data from/to file
 can be constructed empty or with arguments (name, wage-rate, equipment name, equipment price, product name, product price)
*/
class Profession{
    public:
        string name; /// < Name of profession ex. FrontEnd developer
        double wage_rate; /// < Wage-rate 0..999999
        Equipment equipment; /// < Equipment data (name, price)
        Product product; /// < Product data (name, price)

        virtual void input(); /// Input data from console
        virtual void print(); /// Print data to console

        /**
        Input data from file
        @arg fname - const char* - name of the input file
        @return 1 in the case of success, of error otherwise
        **/
        virtual int fin(const char* fname);

        /**
        Write data to file
        @arg fname - const char* - name of the file to write
        @return 1 in the case of success, of error otherwise
        **/
        virtual int fout(const char* fname);

        Profession(string name, double wage_rate, string eq_name, double eq_price, string prod_name, double prod_price);
        Profession();
        ~Profession();
};

#endif // PROFESSION_H
