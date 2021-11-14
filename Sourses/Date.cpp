#include <iostream>
#include <fstream>
#include "../Headers/Date.h"
using namespace std;


void Date::input() {
    cout << "Day: ";
    cin  >> day;
    cout << "Month: ";
    cin >> month;
    cout << "Year: ";
    cin  >> year;
}


void Date::print() {
    cout << day << "." << month << "." << year;
}


int Date::fin(const char* fname) {
    ifstream fin(fname);
    if (!fin.is_open()) {
        fin.close();
        return -1;
    }
    fin >> day >> month >> year;
    fin.close();
    return 1;
}


int Date::fout(const char* fname) {
    ofstream fout(fname);
    if (!fout.is_open()) {
        fout.close();
        return -1;
    }
    fout << day << " " << month << " " << year;
    fout.close();
    return 1;
}


Date::Date(){}


Date::Date(unsigned d, unsigned m , unsigned y) {
    day = d;
    month = m;
    year = y;
}


Date::~Date() {}
