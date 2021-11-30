#include <iostream>
#include <fstream>
#include "../Headers/data_base.h"
#include "../Headers/Employee.h"
#include "../Headers/Deputy.h"
#include "../Headers/Head.h"
#include "../Headers/Person.h"
using namespace std;


int DataBase::addEmployee(Employee emp){

    ofstream fout(fname, ios::app);
    if (!fout.is_open()) return -1;
    fout << "\nEmployee " << emp.name << " " << emp.surname << " " << emp.sex << " " << emp.day << " " << emp.month;
    fout << " " << emp.year << " " << emp.profession.name << " " << emp.profession.wage_rate<< " ";
    fout << emp.profession.equipment.name << " " << emp.profession.equipment.price << " ";
    fout << emp.profession.product.name << " " << emp.profession.product.price << " " << emp.employed.day << " ";
    fout << emp.employed.month << " " << emp.employed.year << " " << emp.product_rate << " " << emp.salary;
    fout.close();
    return 1;
}


int DataBase::addHead(Head head) {
    ofstream fout(fname, ios::app);
    if (!fout.is_open()) return -1;
    fout << "\nHead " << head.name << " " << head.surname << " " << head.sex << " " << head.day << " " << head.month;
    fout << " " << head.year << " " << head.deputy;
    fout << " " << head.emp_number;
    for (int i=0; i<head.emp_number; i++) {
        fout << " " << head.employees[i];
    }
    fout.close();
    return 1;
}


int DataBase::addDeputy(Deputy deputy) {
    ofstream fout(fname, ios::app);
    if (!fout.is_open()) return -1;
    fout << "\nDeputy " << deputy.name << " " << deputy.surname << " " << deputy.sex << " " << deputy.day;
    fout << " " << deputy.month << " " << deputy.year << " " << deputy.head;
    fout.close();
    return 1;
}


int DataBase::readData() {
    ifstream fin(fname);
    if (!fin.is_open()) return -1;
    while (!fin.eof()) {
        string cl_name;
        fin >> cl_name;
        if (cl_name == "Employee") {
            fin >> employees[emp_number].name >> employees[emp_number].surname >> employees[emp_number].sex;
            fin >> employees[emp_number].day >> employees[emp_number].month >> employees[emp_number].year;
            fin >> employees[emp_number].profession.name >> employees[emp_number].profession.wage_rate;
            fin >> employees[emp_number].profession.equipment.name >> employees[emp_number].profession.equipment.price;
            fin >> employees[emp_number].profession.product.name >> employees[emp_number].profession.product.price;
            fin >> employees[emp_number].employed.day >> employees[emp_number].employed.month;
            fin >> employees[emp_number].employed.year >> employees[emp_number].experience >> employees[emp_number].product_rate;
            fin >> employees[emp_number].salary;
            emp_number++;
        }
        if (cl_name == "Head") {
            fin >> heads[head_number].name >> heads[head_number].surname >> heads[head_number].sex >> heads[head_number].day;
            fin >> heads[head_number].month >> heads[head_number].year >> heads[head_number].deputy;
            fin >> heads[head_number].emp_number;
            for (int k=0; k<emp_number; k++) {
                string item;
                fin >> heads[head_number].employees[k];
                fin >> item;
                heads[head_number].employees[k] += " " + item;
            }
            head_number++;
        }
        if (cl_name == "Deputy") {
            fin >> deputies[deputy_number].name >> deputies[deputy_number].surname >> deputies[deputy_number].sex;
            fin >> deputies[deputy_number].day >> deputies[deputy_number].month;
            fin >> deputies[deputy_number].year >> deputies[deputy_number].head;
            deputy_number++;
        }
    }
    fin.close();
    return emp_number + deputy_number + head_number;
}


int DataBase::getPeople(Person** people) {
    ifstream fin(fname);
    if (!fin.is_open()) return -1;
    int i = 0;
    while (!fin.eof()) {
        string cl_name;
        fin >> cl_name;
        if (cl_name == "Employee") {
            string name, surname, sex, p_name, eq_name, prod_name;
            unsigned d, m, y, emp_day, emp_month, emp_year;
            double wage_rate, eq_price, prod_price, experience, prod_rate, salary;
            fin >> name >> surname >> sex;
            fin >> d >> m >> y;
            fin >> p_name >> wage_rate;
            fin >> eq_name >> eq_price;
            fin >> prod_name >> prod_price;
            fin >> emp_day >> emp_month;
            fin >> emp_year >> experience >> prod_rate;
            fin >> salary;
            people[i++] = dynamic_cast<Person*> (new Employee(name, surname, sex, d, m, y, p_name, wage_rate, eq_name, eq_price, prod_name, prod_price, \
                                     emp_day, emp_month, emp_year, experience, prod_rate, salary));
        }
        if (cl_name == "Head") {
            string name, surname, sex, deputy;
            unsigned d, m, y;
            int emp_number;
            string employees[100];
            fin >> name >> surname >> sex >> d>> m >> y >> deputy;
            fin >> emp_number;
            for (int i=0; i<emp_number; i++) {
                string item;
                fin >> employees[i];
                fin >> item;
                employees[i] += " " + item;
            }
            people[i++] = dynamic_cast<Person*> (new Head(name, surname, sex, d, m, y, deputy, emp_number, employees));
        }
        if (cl_name == "Deputy") {
            string name, surname, sex, head;
            unsigned d, m, y;
            int emp_number;
            string employees[100];
            fin >> name >> surname >> sex >> d >> m >> y >> head;
            people[i++] = dynamic_cast<Person*> (new Deputy(name, surname, sex, d, m, y, head));
        }
        cout << cl_name;
    }
    fin.close();
    return i;
}


double DataBase::getEquipmentPriceOfEmployeesUnderHead(Head head) {
    double res;
    for (int k=0; k<emp_number; k++) {
        string subordinate = employees[k].name + " " + employees[k].surname;
        for (int i=0; i<head.emp_number; i++) {
            if (head.employees[i] == subordinate) {
                res += employees[k].profession.equipment.price;
            }
        }
    }
    return res;
}

