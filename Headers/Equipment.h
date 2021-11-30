#ifndef EQUIPMENT_H
#define EQUIPMENT_H
#include <iostream>
#include <string>
#include "Product.h"
using namespace std;


/**
 @class Equipment
 saves data of equipment: name, price
 input, print methods to work with class in console
 methods fin/fout takes data from/to file
 can be constructed empty or with arguments (name, price)
*/
class Equipment {
    public:
        string name; /// < Equipment name ex. Welding machine
        double price; /// < Price 0..999999

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

        Equipment(string name, double price);
        Equipment();
        ~Equipment();
};

#endif // EQUIPMENT_H
