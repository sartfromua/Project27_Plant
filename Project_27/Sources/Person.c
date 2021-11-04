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


int finChar(const char* fname, char* name) {
    FILE *file = fopen(fname, "wb+");
    int res = fwrite(&name, sizeof(char), strlen(name), file);
    fclose(file);
    return res;
}


int finPerson(const char* fname, Person person){
    remove(fname); // not so good idea, but may work to clear file
    FILE *file = fopen(fname, "wb+");
    int res = finChar(fname, person.name);
    if (res != strlen(person.name)) return 1;
    res = finChar(fname, person.surname);
    if (res != strlen(person.surname)) return 2;
    res = finChar(fname, person.sex);
    if (res != strlen(person.sex)) return 3;
    int birth[];
    birth[0] = person.birthday.day;
    birth[1] = person.birthday.month;
    birth[2] = person.birthday.year;
    res = fwrite(&birth, sizeof(int), 3, file);
    if (res != 3) return 4;
    fclose(file);
    return 0;
}


Person foutPerson(const char* fname) {
    FILE *file = fopen(fname, "rb");
    Person person;

    // ??? how to execute only one char list, when there are 3 of them in file?

    fclose(file);
    return person;
}

