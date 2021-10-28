#include <stdio.h>
#include <stdlib.h>


typedef struct Date {
    int day, month, year;
} Date;


typedef struct Person {
    char name[], surname[];
    char sex[];
    Date birthday;
} Person;


typedef struct Product {
    char product_name[];
    double price;
} Product;


typedef struct Equipment {
    char equipment_name[];
    Product product;
} Equipment;


typedef struct Profession {
    char profession_name[];
    double wage_rate;
    Equipment equipment;
} Profession;


typedef struct Employee {
    struct Person;
    struct Profession;
    double salary;
    Date employed;
    Profession profession;
} Employee;


typedef struct Deputy {

} Deputy;


typedef struct Head {

} Head;


int main() {
    Employee *emp;
    emp.Person.sex = "male";
    printf("%s", emp.Person.sex);
//    emp.sex = "male";       ??? What example is right? How is it supposed to be?
//    printf("%s", empsex);   ???
}
