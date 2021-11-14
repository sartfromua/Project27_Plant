#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <iostream>
#include <string>
#include "Profession.h"
#include "Person.h"
#include "Date.h"
using namespace std;


class Employee: public Person {
    public:

        Profession profession;
        double salary;
        Date employed;
        double experience;
        double product_rate;

        void input();
        void print();
        int fin(const char* fname);
        int fout(const char* fname);

        Employee();
        ~Employee();

};

#endif // EMPLOYEE_H
