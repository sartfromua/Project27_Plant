#include "Product.h"
#include <iostream>
#include <string>
#include <fstream>
using namespace std;


void Product::input() {
    cout << "*****Product*****" << endl;
    cout << "Name: ";
    getline(cin, name);
    cout << "Price: ";
    cin >> price;
}


void Product::print() {
    cout << "*****Product*****" << endl;
    cout << name << " - " << price;
}


int Product::fin(const char* fname) {
    ifstream fin(fname);
    if (!fin.is_open()) {
        fin.close();
        return -1;
    }
    fin >> name >> price;
    fin.close();
    return 1;
}


int Product::fout(const char* fname) {
    ofstream fout(fname);
    if (!fout.is_open()) {
        fout.close();
        return -1;
    }
    fout << name << " " << price << "$";
    fout.close();
    return 1;
}


Product::Product(){}


Product::Product(string name, double price) {
    this->name = name;
    this->price = price;
}


Product::~Product()
{
    //dtor
}
