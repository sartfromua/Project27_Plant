#include <iostream>
#include "Headers/Date.h"
#include "Headers/Person.h"
#include "Headers/Product.h"
#include "Headers/Equipment.h"
#include "Headers/Profession.h"
#include "Headers/Employee.h"
#include "Headers/Head.h"
#include "Headers/data_base.h"

using namespace std;


void test() {
//    Date date, date1;
//    date.input();
//    date.fout("date_test.txt");
//    date1.fin("date_test.txt");
//    date1.print();
//
//    Person p, p1;
//    p.input();
//    p.fout("person_test.txt");
//    p1.fin("person_test.txt");
//    p1.print();
//
//    Product pr, pr1;
//    pr.input();
//    pr.fout("product_test.txt");
//    pr1.fin("product_test.txt");
//    pr1.print();
//
//    Equipment eq, eq1;
//    eq.print();
//    eq.input();
//    eq.fout("equipment_test.txt");
//    eq1.fin("equipment_test.txt");
//    eq1.print();
//
//    Profession prof, prof1("IT-spec", 3000, "PC", 15000, "program", 500);
//    prof1.print();
//    prof.input();
//    prof.fout("profession_test.txt");
//    prof1.fin("profession_test.txt");
//    prof1.print();
//
//    Employee emp, emp1;
//    emp.input();
//    emp.fout("employee_test.txt");
//    emp1.fin("employee_test.txt");
//    emp1.print();
//
//    Head h, h1;
//    h.input();
//    h.print();
//    h.addEmployee("Petrov");
//    h.print();
//    h.fout("head_test.txt");
//    h1.fin("head_test.txt");
//    h1.print();
//
//    Employee emp;
//    emp.fin("employee_test.txt");
//    emp.print();
//    addEmployeeToBase("base.txt", emp);
}


int main() {
//    test();
    const char* fname = "base.txt";
    DataBase base(fname);
//    cout << base.emp_number << endl;
//    for (int i=0; i<base.emp_number; i++) {
//        base.employees[i].print();
//    }
//    for (int i=0; i<base.head_number; i++) {
//        base.heads[i].print();
//    }
//    for (int i=0; i<base.deputy_number; i++) {
//        base.deputies[i].print();
//    }
    Person** people = new Person*;
    base.getPeople(people);
    for (int i=0; i<6; i++) {
        people[i]->print();
        cout << endl;
    }
    cout << "\n\nEquipment price: " << base.getEquipmentPriceOfEmployeesUnderHead(base.heads[0]);
}
