#include "Deputy.h"
#include <iostream>
#include <string>
#include "Person.h"
using namespace std;


void Deputy::input() {
    cout << "\n*****Deputy*****\n";
    Person::input();
}


void Deputy::print() {
    cout << "\n*****Deputy*****\n";
    Person::print();
}


int Deputy::fin(const char* fname) {
    return Person::fin(fname);
}


int Deputy::fout(const char* fname) {
    return Person::fout(fname);
}


Deputy::Deputy() {}

Deputy::~Deputy() {}
