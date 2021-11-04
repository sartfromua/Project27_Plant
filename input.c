#include <stdio.h>
#include "structures.h"


date inputDate() {
    date date1;
    printf("\nday month year: ");
    scanf("%d %d %d", &date1.day, &date1.month, &date1.year);
    return date1;
}


Person inputPerson() {
    Person person;
    printf("\n*****Person*****");
    printf("\nBirthday:");
    person.birthday = inputDate();
    printf("Name: ");
    scanf("%s", &person.name);
    printf("Surname: ");
    scanf("%s", &person.surname);
    printf("Sex: ");
    scanf("%s", &person.sex);
    return person;
}


Product inputProduct() {
    Product product;
    printf("\n*****Product*****");
    printf("\nName: ");
    scanf("%s", &product.name);
    printf("Price: ");
    scanf("%s", &product.price);
    // equipment?
    //
    return product;
}


Equipment inputEquipment() {
    Equipment equipment;
    printf("\n*****Equipment*****");
    printf("\nName: ");
    scanf("%s", &equipment.name);
    printf("Price: ");
    scanf("%s", &equipment.price);
    // product?
    //
    return equipment;
}


Profession inputProfession() {
    Profession profession;
    printf("\n*****Profession*****");
    printf("\nName: ");
    scanf("%s", &profession.name);
    printf("Wage-rate: ");
    scanf("%lf", &profession.wage_rate);
    profession.equipment = inputEquipment();
    return profession;
}


Employee inputEmployee() {
    Employee employee;
    printf("\n*****Employee*****");
    employee.person = inputPerson();
    employee.profession = inputProfession();
    printf("Employed date: ");
    employee.employed = inputDate();
    printf("Work experience: ");
    scanf("%lf", &employee.experience);
    printf("Product-rate: ");
    scanf("%lf", &employee.product_rate);

    double a = 1, b = 1, c = 1;
    employee.salary = (a*employee.experience)*(b*employee.product_rate)*(c*employee.profession.wage_rate); // formula ???

    return employee;
}


Deputy inputDeputy() {
    Deputy deputy;
    printf("/n*****Deputy*****");
    deputy.employee = inputEmployee();

    return deputy;
}


Head inputHead() {
    Head head;
    printf("\n*****Head*****");
    head.employee = inputEmployee();

    return head;
}
