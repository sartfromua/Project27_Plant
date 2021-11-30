#include "../Headers/Head.h"
#include "../Headers/Employee.h"
#include <iostream>
#include <cstdlib>
#include <string>
#include <fstream>
using namespace std;


void Head::input() {
    cout << "\n*****Head*****\n";
    Person::input();
    cout << "Deputy surname: ";
    cin >> deputy;
}


void Head::print() {
    cout << "\n*****Head*****\n";
    Person::print();
    cout << "\nDeputy: " << deputy;
    cout << "\nEmployees: ";
    if (emp_number == 0) cout << "no employees";
    for (int i=0; i<emp_number; i++) {
        cout << employees[i] << ", ";
    }
}


int Head::addEmployee(string name_surname) {
    employees[emp_number] = name_surname;
    emp_number++;
    return 1;
}


//int Head::addEmployee(Employee emp) {
//    employees[emp_number] = emp.name + " " + emp.surname;
//    emp_number++;
//    return 1;
//}


int Head::fin(const char* fname) {
    ifstream fin(fname);
    if (!fin.is_open()) return -1;
    fin >> name >> surname >> sex >> day >> month >> year >> deputy;
    fin >> emp_number;
    for (int i=0; i<emp_number; i++) {
        string item;
        fin >> employees[i];
        fin >> item;
        employees[i] += " " + item;
    }
    fin.close();
    return 1;
}


int Head::fout(const char* fname) {
    ofstream fout(fname);
    if (!fout.is_open()) return -1;
    fout << name << " " << surname << " " << sex << " " << day << " " << month << " " << year << " " << deputy;
    fout << " " << emp_number;
    for (int i=0; i<emp_number; i++) {
        fout << " " << employees[i];
    }
    fout.close();
    return 1;
}


Head::Head() {}

Head::Head(string name, string surname, string sex, unsigned d, unsigned m, unsigned y, string deputy_surname, \
             int emp_number, string* employees) {
    this->name = name;
    this->surname = surname;
    this->sex = sex;
    day = d;
    month = m;
    year = y;
    deputy = deputy_surname;
    this->emp_number = emp_number;
    for (int i=0; i<emp_number; i++) {
        this->employees[i] = employees[i];
    }
}

Head::~Head() {}
