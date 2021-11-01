#include <stdio.h>
#include <stdlib.h>


typedef struct Date {
    int day, month, year;
} Date;


typedef struct Person {
    char name[255], surname[255];
    char sex[255];
    Date birthday;
} Person;


typedef struct Product {
    char product_name[255];
    double price;
} Product;


typedef struct Equipment {
    char equipment_name[255];
    Product product;
} Equipment;


typedef struct Profession {
    char profession_name[255];
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
