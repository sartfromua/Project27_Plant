#include "../Headers/Person.h"
#include "../Headers/Date.h"
#include <stdio.h>


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


void printPerson(Person person) {
    printf("\n%s %s %s", person.name, person.surname, person.sex);
    printDate(person.birthday);
}


int finPerson(const char* fname, Person person){
    FILE *file = fopen(fname, "w");
    int res = fprintf(file, "%d %d %d %s %s %s", person.birthday.day, person.birthday.month, person.birthday.year, \
                       person.name, person.surname, person.sex);
    fclose(file);
    return res;
}


Person foutPerson(const char* fname) {
    FILE *file = fopen(fname, "rb");
    Person person;
    int res = fscanf(file, "%d %d %d %s %s %s", &person.birthday.day, &person.birthday.month, &person.birthday.year, \
                       &person.name, &person.surname, &person.sex);
    fclose(file);
    return person;
}

