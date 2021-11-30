#ifndef HEAD_H
#define HEAD_H
#include <iostream>
#include <cstdlib>
#include <string>
#include "Person.h"
#include "Employee.h"
using namespace std;


/**
 @class Deputy, inheritance from @class Person
 saves data of employee: name, surname, sex, birthday date, deputy, employees
 input, print methods to work with class in console
 methods fin/fout takes data from/to file
 can be constructed empty
*/
class Head: public Person {
    public:
        int emp_number; /// < Number of employees 0..999
        string deputy; /// < Assisting deputy surname
        string employees[999]; /// Array of surnames and names of subordinates

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

        /**
        Adding employee to array
        @arg emp_surname - string - name and surname of employee ex. "Ivan Ivanov"
        @return 1 in the case of success, of error otherwise
        **/
        int addEmployee(string name_surname);
//
//        /** @arg emp - Employee - employee data */
//        int addEmployee(Employee emp);

        Head();
        Head(string name, string surname, string sex, unsigned d, unsigned m, unsigned y, string deputy_surname, \
             int emp_number, string* employees);
        ~Head();

};

#endif // HEAD_H
