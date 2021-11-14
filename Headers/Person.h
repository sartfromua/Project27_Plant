#ifndef __PERSON_H__
#define __PERSON_H__
#include "Date.h"
#include <iostream>
#include <string>
using namespace std;


class Person: public Date{
    public:
        string name, surname, sex;

        void input();
        void print();
        int fin(const char* fname);
        int fout(const char* fname);

        Person();
        Person(string name, string surname, string sex, unsigned d, unsigned m, unsigned y);
        Person(string name, string surname, string sex);
        ~Person();

};

#endif // PERSON_H
