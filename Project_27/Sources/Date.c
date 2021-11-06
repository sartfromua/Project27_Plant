#include "../Headers/Date.h"
#include <stdio.h>


void printDate(date date1) {
    printf(" %d.%d.%d", date1.day, date1.month, date1.year);
}


date inputDate() {
    date date1;
    printf("\nday month year: ");
    scanf("%d %d %d", &date1.day, &date1.month, &date1.year);
    return date1;
}


int finDate(const char* fname, date date1) {
    FILE *file = fopen(fname, "w");
    int res = fprintf(file, "%d %d %d", date1.day, date1.month, date1.year);
    fclose(file);
    return res;
}


date foutDate(const char* fname) {
    FILE *file = fopen(fname, "r");
    int items[3];
    date date1;
    int res = fscanf(file, "%d %d %d", &date1.day, &date1.month, &date1.year);
    fclose(file);
    return date1;
}
