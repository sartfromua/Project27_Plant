#include <stdio.h>
#include "Headers/Date.h"
#include "Headers/Person.h"
#include "Headers/Product.h"
#include "Headers/Equipment.h"
#include "Headers/Profession.h"
#include "Headers/Employee.h"
#include "Headers/Deputy.h"
#include "Headers/Head.h"


int main() {
    date date1, date2;
    date1.day = 21;
    date1.month = 5;
    date1.year = 2003;
    finDate("date_test", date1);
    date2 = foutDate("date_test");
    printDate(date2);
}
