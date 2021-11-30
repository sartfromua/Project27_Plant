#ifndef __PRODUCT_H__
#define __PRODUCT_H__
#include <iostream>
#include <string>
using namespace std;


/**
 @class Product
 saves data of product: name, price
 input, print methods to work with class in console
 methods fin/fout takes data from/to file
 can be constructed empty or with (name, price)
*/
class Product
{
    public:
        string name; /// < name ex. Chair
        double price; /// < price 0..999999

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

        Product();
        Product(string name, double price);
        ~Product();

};

#endif // __PRODUCT_H__
