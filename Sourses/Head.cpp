#include "../Headers/Head.h"
#include <iostream>
#include <string>
#include <fstream>
using namespace std;


void Head::input() {
    cout << "\n*****Head*****\n";
    Person::input();
}


void Head::print() {
    cout << "\n*****Head*****\n";
    Person::print();
}

int Head::fin(const char* fname) {
    return Person::fin(fname);
}


int Head::fout(const char* fname) {
    return Person::fout(fname);
}


Head::Head() {}

Head::~Head() {}
