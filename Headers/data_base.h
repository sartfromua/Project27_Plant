#ifndef __DATA_BASE_H__
#define __DATA_BASE_H__
#include "Employee.h"
#include "Head.h"
#include "Deputy.h"

typedef struct {
    const char* fname;
} DataBase;


int addEmployeeToDataBase(DataBase db, Employee emp);

int addHeadToDataBase(DataBase db, Head head);

int addDeputyToDataBase(DataBase db, Deputy dep);

void printAllPeople(DataBase db);

double getPriceOfEquipmentUnderHead(DataBase db, Head head);


#endif // __DATA_BASE_H__
