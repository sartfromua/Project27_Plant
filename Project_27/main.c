#include <stdio.h>
#include "Headers/Date.h"
#include "Headers/Person.h"
#include "Headers/Product.h"
#include "Headers/Equipment.h"
#include "Headers/Profession.h"
#include "Headers/Employee.h"
#include "Headers/Deputy.h"
#include "Headers/Head.h"


int test() {
    date date1 = inputDate();
    finDate("date_test.txt", date1);
    date date2 = foutDate("date_test.txt");
    printDate(date2);

    Person person = inputPerson();
    finPerson("person_test.txt", person);
    Person person1 = foutPerson("person_test.txt");
    printPerson(person1);

    Product product = inputProduct();
    finProduct("product_test.txt", product);
    Product product1 = foutProduct("product_test.txt");
    printProduct(product1);

    Equipment equipment = inputEquipment();
    finEquipment("equipment_test.txt", equipment);
    Equipment equipment1 = foutEquipment("equipment_test.txt");
    printEquipment(equipment1);

    Profession profession = inputProfession();
    finProfession("profession_test.txt", profession);
    Profession profession1 = foutProfession("profession_test.txt");
    printProfession(profession1);

    Employee employee = inputEmployee();
    finEmployee("employee_test.txt", employee);
    Employee employee1 = foutEmployee("employee_test.txt");
    printEmployee(employee1);

    Head head = inputHead();
    finHead("head_test.txt", head);
    Head head1 = foutHead("head_test.txt");
    printHead(head1);

    Deputy deputy = inputDeputy();
    finDeputy("deputy_test.txt", deputy);
    Deputy deputy1 = foutDeputy("deputy_test.txt");
    printDeputy(deputy1);
}


int main() {
//    test();
}
