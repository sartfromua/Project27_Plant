#include "Equipment.h"
#include <iostream>
#include <string>
#include <fstream>
using namespace std;


void Equipment::input() {
    cout << "\n*****Equipment*****\n";
    cout << "Name: ";
    cin >> name;
    cout << "Price: ";
    cin >> price;
}


void Equipment::print() {
    cout << "\n*****Equipment*****\n";
    cout << name << " - " << price << "$";
}


int Equipment::fin(const char* fname) {
    ifstream fin(fname);
    if (!fin.is_open()) {
        fin.close();
        return -1;
    }
    fin >> name >> price;
    fin.close();
    return 1;
}



int Equipment::fout(const char* fname) {
    ofstream fout(fname);
    if (!fout.is_open()) {
        fout.close();
        return -1;
    }
    fout << name << " " << price << " ";
    fout.close();
    return 1;
}


Equipment::Equipment(string name, double price) {
    this->name = name;
    this->price = price;
}


Equipment::Equipment() {}

Equipment::~Equipment(){}
