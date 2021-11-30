#ifndef __DATA_BASE_H__
#define __DATA_BASE_H__
#include "Employee.h"
#include "Head.h"
#include "Deputy.h"


/**
 @class DataBase
 contains data of people from file
 can be constructed empty or with name of database file
*/
class DataBase {

    public:

        const char* fname;
        Employee employees[50];
        Head heads[50];
        Deputy deputies[50];
        int emp_number;
        int head_number;
        int deputy_number;

        /**
        Adds data of employee to base
        @arg emp - Employee - employee data
        @return 1 in case of success, number of error otherwise
        */
        int addEmployee(Employee emp);


        /**
        Adds data of head to base
        @arg head - Head - head data
        @return 1 in case of success, number of error otherwise
        */
        int addHead(Head head);


        /**
        Adds data of deputy to base
        @arg deputy - Deputy - deputy data
        @return 1 in case of success, number of error otherwise
        */
        int addDeputy(Deputy deputy);


        /**
        Adds data of all people to list;
        @arg people - Person* - list
        @return number of added people in case of success, number of error otherwise
        */
        int getPeople(Person** people);


        /**
        Counts price of equipment used by employees under head from base
        @arg head - Head
        @return price of equipment
        */
        double getEquipmentPriceOfEmployeesUnderHead(Head head);


        /**
        Read data and fills all lists
        @return 1 in case of success
        */
        int readData();


        void setFname(const char* fname){this->fname = fname;}; // sets fname


        DataBase(const char* fname): fname(fname) {emp_number = 0; deputy_number = 0; head_number = 0; readData();};
        DataBase(){emp_number = 0; deputy_number = 0; head_number = 0;};
        ~DataBase(){};

};

#endif // DATA_BASE_H
