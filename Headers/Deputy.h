#ifndef DEPUTY_H
#define DEPUTY_H
#include "Person.h"
#include <iostream>
#include <string>
using namespace std;


class Deputy: public Person {
    public:


        void input();
        void print();
        int fin(const char* fname);
        int fout(const char* fname);

        Deputy();
        ~Deputy();
};

#endif // DEPUTY_H
