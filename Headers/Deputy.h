#ifndef DEPUTY_H
#define DEPUTY_H
#include "Person.h"
#include <iostream>
#include <string>
using namespace std;


/**
 @class Deputy, inheritance from @class Person
 saves data of employee: name, surname, sex, birthday date, head
 input, print methods to work with class in console
 methods fin/fout takes data from/to file
 can be constructed empty
*/
class Deputy: public Person {
    public:
        string head; /// < Head who is assisted by

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

        Deputy();
        Deputy(string name, string surname, string sex, unsigned d, unsigned m, unsigned y, string head_surname);
        ~Deputy();
};

#endif // DEPUTY_H
