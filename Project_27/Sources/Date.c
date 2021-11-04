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
    FILE *file = fopen(fname, "wb");
    int items[3];
    items[0] = date1.day;
    items[1] = date1.month;
    items[2] = date1.year;
    int res = fwrite(items, sizeof(int), 3, file);
    fclose(file);
    return res;
}


date foutDate(const char* fname) {
    FILE *file = fopen(fname, "rb");
    int items[3];
    int res = fread(&items, sizeof(int), 3, file);
    if (res != 3) printf("FOUTDATE FREAD_RES = %d", res);
    fclose(file);
    date date1;
    date1.day = items[0];
    date1.month = items[1];
    date1.year = items[2];
    return date1;
}
