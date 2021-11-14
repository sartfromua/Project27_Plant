#include "../Headers/Person.h"
#include <iostream>
#include <string>
#include <fstream>
using namespace std;


void Person::print() {
    cout << "*****Person*****" << endl;
    cout << name << " " << surname << " (" << sex << ") ";
    cout << day << "." << month << "." << year;
}


void Person::input() {
    cout << "\n*****Person*****\n";
    cout << "Name: ";
    cin >> name;
    cout << "Surname: ";
    cin >> surname;
    cout << "Sex(Male/Female): ";
    cin >> sex;
    cout << "Birthday: Day: ";
    cin  >> day;
    cout << "Month: ";
    cin >> month;
    cout << "Year: ";
    cin  >> year;
}


int Person::fin(const char* fname) {
    ifstream fin(fname);
    if (!fin.is_open()) {
        fin.close();
        return -1;
    }
    fin >> name >> surname >> sex >> day >> month >> year;
    fin.close();
    return 1;
}


int Person::fout(const char* fname) {
    ofstream fout(fname);
    if (!fout.is_open()) {
        fout.close();
        return -1;
    }
    fout << name << " " << surname << " " << sex << " " << day << " " << month << " " << year;
    fout.close();
    return 1;

}


Person::Person(){}


Person::Person(string name, string surname, string sex, unsigned d, unsigned m, unsigned y) {
    this->name = name;
    this->surname = surname;
    this->sex = sex;
    day = d;
    month = m;
    year = y;
}


Person::Person(string name, string surname, string sex) {
    this->name = name;
    this->surname = surname;
    this->sex = sex;
}


Person::~Person(){}
