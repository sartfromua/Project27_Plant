#ifndef _DATE_H_
#define _DATE_H_


typedef struct {
    int day, month, year;
} date;


date inputDate();
void printDate(date date1);
int foutDate(const char* fname, date date1);
date finDate(const char* fname);
#endif // _DATE_H_
