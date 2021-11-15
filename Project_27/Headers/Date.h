#ifndef _DATE_H_
#define _DATE_H_


typedef struct {
    int day, month, year;
} date;


date inputDate();
void printDate();
int finDate(const char* fname, date date1);
date foutDate(const char* fname);
#endif // _DATE_H_
