#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <iostream>
#include <string>
#include "Profession.h"
#include "Person.h"
#include "Date.h"
using namespace std;


/**
 @class Employee, inheritance from @class Person
 saves data of employee: name, surname, sex, birthday date, profession, salary, employed date, experience, product-rate
 input, print methods to work with class in console
 methods fin/fout takes data from/to file
 can be constructed empty
*/
class Employee: public Person {
    public:

        Profession profession; /// < Profession data
        double salary; /// < Salary 0..999999
        Date employed; /// < Employed date (day, month, year)
        double experience; /// < Experience 0..999999
        double product_rate; /// < Product-rate 0..999999

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

        Employee();

        Employee(string name, string surname, string sex, unsigned d, unsigned m, unsigned y, string prof_name, \
                 double wage_rate, string eq_name, double eq_price, string prod_name, double prod_price, \
                 unsigned emp_day, unsigned emp_month, unsigned emp_year, double experience, double prod_rate, \
                 double salary);

        ~Employee();

};

#endif // EMPLOYEE_H
