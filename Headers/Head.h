#ifndef HEAD_H
#define HEAD_H
#include <iostream>
#include <string>
#include "Person.h"
using namespace std;

class Head: public Person {
    public:


        void input();
        void print();
        int fin(const char* fname);
        int fout(const char* fname);

        Head();
        ~Head();

};

#endif // HEAD_H
