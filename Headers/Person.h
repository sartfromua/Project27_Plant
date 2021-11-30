#ifndef __PERSON_H__
#define __PERSON_H__
#include "Date.h"
#include <iostream>
#include <string>
using namespace std;

/**
 @class Person, inheritance from @class Date
 saves data of person: name, surname, sex, birthday date
 input, print methods to work with class in console
 methods fin/fout takes data from/to file
 can be constructed empty or with arguments (name, surname, sex, day, month, year)
*/
class Person: public Date{
    public:
        string name, surname, sex; /// < Name Bogdan, Surname Bakun, sex Male for example

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

        Person();
        Person(string name, string surname, string sex, unsigned d, unsigned m, unsigned y);
        Person(string name, string surname, string sex);
        ~Person();

};

#endif // PERSON_H
