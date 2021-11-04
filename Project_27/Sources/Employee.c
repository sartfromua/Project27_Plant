#include "../Headers/Employee.h"
#include "../Headers/Date.h"
#include "../Headers/Profession.h"
#include "../Headers/Person.h"

void printEmployee(Employee employee) {
    printf("\n*****Employee*****");
    printPerson(employee.person);
    printProfession(employee.profession);
    printf("\nEmployed: ");
    printDate(employee.employed);
    printf(";  Experience: %g;  Product-rate: %g;  Salary: %g", employee.experience, employee.product_rate, employee.salary);
}


Employee inputEmployee() {
    Employee employee;
    printf("\n*****Employee*****");
    employee.person = inputPerson();
    employee.profession = inputProfession();
    printf("Employed date: ");
    employee.employed = inputDate();
    printf("Work experience: ");
    scanf("%lf", &employee.experience);
    printf("Product-rate: ");
    scanf("%lf", &employee.product_rate);

    double a = 1, b = 1, c = 1;
    employee.salary = (a*employee.experience)*(b*employee.product_rate)*(c*employee.profession.wage_rate); // formula ???

    return employee;
}
