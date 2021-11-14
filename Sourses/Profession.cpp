#include "../Headers/Profession.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;


void Profession::input() {
    cout << "\n*****Profession*****\n";
    cout << "Name: ";
    cin >> name;
    cout << "Wage-rate: ";
    cin >> wage_rate;
    cout << "Equipment name: ";
    cin >> equipment.name;
    cout << "Equipment price: ";
    cin >> equipment.price;
    cout << "Product name: ";
    cin >> product.name;
    cout << "Product price: ";
    cin >> product.price;
}


void Profession::print() {
    cout << "\n*****Profession*****\n";
    cout << name << " (" << wage_rate << "$) using " << equipment.name << " (" << equipment.price << "$) to make " \
    << product.name << " (" << product.price << "$)";
}


int Profession::fin(const char* fname) {
    ifstream fin(fname);
    if (!fin.is_open()) {
        return -1;
        fin.close();
    }
    fin >> name >> wage_rate >> equipment.name >> equipment.price >> product.name >> product.price;
    fin.close();
    return 1;
}


int Profession::fout(const char* fname) {
    ofstream fout(fname);
    if (!fout.is_open()) {
        return -1;
        fout.close();
    }
    fout << name << " " << wage_rate << " " << equipment.name << " " << equipment.price << " " << product.name << " " \
    << product.price;
    fout.close();
    return 1;
}



Profession::Profession(string name, double wage_rate, string eq_name, double eq_price, string prod_name, double prod_price) {
    this->name = name;
    this->wage_rate = wage_rate;
    equipment.name = eq_name;
    equipment.price = eq_price;
    product.name = prod_name;
    product.price = prod_price;
}


Profession::Profession() {}


Profession::~Profession() {}
