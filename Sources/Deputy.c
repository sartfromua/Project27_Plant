#include "../Headers/deputy.h"
#include "../Headers/Person.h"
#include <stdio.h>


Deputy inputDeputy() {
    Deputy deputy;
    printf("\n*****Deputy*****");
    deputy.person = inputPerson();
    printf("Head: ");
    scanf("%s", &deputy.head);
    return deputy;
}


void printDeputy(Deputy deputy) {
    printf("\n*****Deputy*****");
    printPerson(deputy.person);
    printf("Head: %s", deputy.head);
}


int foutDeputy(const char* fname, Deputy deputy) {
    FILE *file = fopen(fname, "w");
    int res = fprintf(file, "%d %d %d %s %s %s %s", deputy.person.birthday.day, \
                      deputy.person.birthday.month, deputy.person.birthday.year, \
                      deputy.person.name, deputy.person.surname, deputy.person.sex, deputy.head);
    fclose(file);
    return res;
}


Deputy finDeputy(const char* fname) {
    FILE *file = fopen(fname, "r");
    Deputy deputy;
    int res = fscanf(file, "%d %d %d %s %s %s %s", &deputy.person.birthday.day, \
                      &deputy.person.birthday.month, &deputy.person.birthday.year, \
                      &deputy.person.name, &deputy.person.surname, &deputy.person.sex, &deputy.head);
    fclose(file);
    return deputy;
}
