#include <fstream>
#include <iostream>
#include <string>
#include "Deputy.h"
#include "Person.h"
using namespace std;


void Deputy::input() {
    cout << "\n*****Deputy*****\n";
    Person::input();
    cout << "Head surname: ";
    cin >> head;
}


void Deputy::print() {
    cout << "\n*****Deputy*****\n";
    Person::print();
    cout << "\nDeputy of" << head;
}


int Deputy::fin(const char* fname) {
    ifstream fin(fname);
    if (!fin.is_open()) return -1;
    fin >> name >> surname >> sex >> day >> month >> year >> head;
    fin.close();
    return 1;
}


int Deputy::fout(const char* fname) {
    ofstream fout(fname);
    if (!fout.is_open()) return -1;
    fout << name << " " << surname << " " << sex << " " << day << " " << month << " " << year << " " << head;
    fout.close();
    return 1;
}


Deputy::Deputy() {}

Deputy::Deputy(string name, string surname, string sex, unsigned d, unsigned m, unsigned y, string head_surname) {
    this->name = name;
    this->surname = surname;
    this->sex = sex;
    day = d;
    month = m;
    year = y;
    head = head_surname;
}

Deputy::~Deputy() {}
