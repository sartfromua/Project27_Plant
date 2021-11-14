#include "../Headers/Employee.h"
#include "../Headers/Profession.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;


void Employee::input() {
    cout << "\n*****Employee*****\n";
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
    profession.input();
    cout << "Employed: \n";
    employed.input();
    cout << "Experience: ";
    cin >> experience;
    cout << "Product-rate: ";
    cin >> product_rate;
    salary = experience * profession.wage_rate * product_rate;
}


void Employee::print() {
    cout << "\n*****Employee*****\n";
    cout << "*****Person*****\n";
    cout << name << " " << surname << " (" << sex << ") ";
    cout << day << "." << month << "." << year;
    profession.print();
    cout << "\nEmployed: ";
    employed.print();
    cout << "\nExperience: " << experience << "\nProduct-rate: " << product_rate;
}


int Employee::fin(const char* fname) {
    ifstream fin(fname);
    if (!fin.is_open()) {
        fin.close();
        return -1;
    }
    fin >> name >> surname >> sex >> day >> month >> year;
    fin >> profession.name >> profession.wage_rate >> profession.equipment.name >> profession.equipment.price;
    fin >> profession.product.name >> profession.product.price;
    fin >> employed.day >> employed.month >> employed.year;
    fin >> experience >> product_rate;
    fin.close();
    return 1;
}


int Employee::fout(const char* fname) {
    ofstream fout(fname);
    if (!fout.is_open()) {
        fout.close();
        return -1;
    }
    fout << name << " " << surname << " " << sex << " " << day << " " << month << " " << year;
    fout << " " << profession.name << " " << profession.wage_rate << " " << profession.equipment.name;
    fout << " " << profession.equipment.price << " " << profession.product.name << " " << profession.product.price;
    fout << " " << employed.day << " " << employed.month << " " << employed.year;
    fout << " " << product_rate;
    fout.close();
    return 1;
}


Employee::Employee() {}


Employee::~Employee() {}
