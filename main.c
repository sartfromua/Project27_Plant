#include <stdio.h>
#include "Headers/Date.h"
#include "Headers/Person.h"
#include "Headers/Product.h"
#include "Headers/Equipment.h"
#include "Headers/Profession.h"
#include "Headers/Employee.h"
#include "Headers/Deputy.h"
#include "Headers/Head.h"
#include "Headers/data_base.h"


int test() {
    date date1 = inputDate();
    foutDate("date_test.txt", date1);
    date date2 = finDate("date_test.txt");
    printDate(date2);

    Person person = inputPerson();
    foutPerson("person_test.txt", person);
    Person person1 = finPerson("person_test.txt");
    printPerson(person1);

    Product product = inputProduct();
    foutProduct("product_test.txt", product);
    Product product1 = finProduct("product_test.txt");
    printProduct(product1);

    Equipment equipment = inputEquipment();
    foutEquipment("equipment_test.txt", equipment);
    Equipment equipment1 = finEquipment("equipment_test.txt");
    printEquipment(equipment1);

    Profession profession = inputProfession();
    foutProfession("profession_test.txt", profession);
    Profession profession1 = finProfession("profession_test.txt");
    printProfession(profession1);

    Employee employee = inputEmployee();
    foutEmployee("employee_test.txt", employee);
    Employee employee1 = finEmployee("employee_test.txt");
    printEmployee(employee1);

    Head head = inputHead();
    foutHead("head_test.txt", head);
    Head head1 = finHead("head_test.txt");
    printHead(head1);

    Deputy deputy = inputDeputy();
    foutDeputy("deputy_test.txt", deputy);
    Deputy deputy1 = finDeputy("deputy_test.txt");
    printDeputy(deputy1);
}


int main() {
//    test();
    Employee emp1, emp2;
    DataBase db;
    Head h;
    emp1 = finEmployee("employee_test.txt");
    emp2 = finEmployee("emp2.txt");
    h = finHead("head_test.txt");
    db.fname = "database.txt";
//    addHeadToDataBase(db, h);
//    addEmployeeToDataBase(db, emp1);
//    addEmployeeToDataBase(db, emp2);
//    addEmployeeToHead(&h, emp1);
//    addEmployeeToHead(&h, emp2);
//    foutHead("head_test.txt", h);
    printHead(h);
    printf("\nPrice of equipment: %g", getPriceOfEquipmentUnderHead(db, h));
}
