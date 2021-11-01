#include <stdio.h>


typedef struct {
    int day, month, year;
} date;


typedef struct {
    char name[255], surname[255];
    char sex[255];
    date birthday;
} Person;


typedef struct {
    char name[255];
    double price;
} Equipment;


typedef struct {
    char name[255];
    double price;
    Equipment equipment; // ??? equipment in product or product in equipment ???
} Product;


typedef struct {
    char name[255];
    double wage_rate;
    Equipment equipment;
} Profession;


typedef struct {
    Person person;
    Profession profession;
    double salary;
    date employed;
    double experience;
    double product_rate;
} Employee;


typedef struct {
    Person person;
    double salary;
    date employed;
    double experience;
} Deputy;


typedef struct {
    Person person;
    double salary;
    date employed;
    double experience;
} Head;


date inputDate() {
    date date1;
    printf("\nday month year: ");
    scanf("%d %d %d", &date1.day, &date1.month, &date1.year);
    return date1;
}


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


Product inputProduct() {
    Product product;
    printf("\n*****Product*****");
    printf("\nName: ");
    scanf("%s", &product.name);
    printf("Price: ");
    scanf("%s", &product.price);
    // equipment?
    //
    return product;
}


Equipment inputEquipment() {
    Equipment equipment;
    printf("\n*****Equipment*****");
    printf("\nName: ");
    scanf("%s", &equipment.name);
    printf("Price: ");
    scanf("%s", &equipment.price);
    // product?
    //
    return equipment;
}


Profession inputProfession() {
    Profession profession;
    printf("\n*****Profession*****");
    printf("\nName: ");
    scanf("%s", &profession.name);
    printf("Wage-rate: ");
    scanf("%lf", &profession.wage_rate);
    profession.equipment = inputEquipment();
    return profession;
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


Deputy inputDeputy() {
    Deputy deputy;
    printf("/n*****Deputy*****");
    deputy.person = inputPerson();
    printf("Employed date: ");
    deputy.employed = inputDate();
    printf("Work experience: ");
    scanf("%lf", &deputy.experience);

    deputy.salary = -1; // formula or input?

    return deputy;
}


Head inputHead() {
    Head head;
    printf("\n*****Head*****");
    head.person = inputPerson();
    printf("Employed date: ");
    head.employed = inputDate();
    printf("Work experience: ");
    scanf("%lf", &head.experience);

    head.salary = -1; // formula or input?

    return head;
}


void printDate(date date1) {
    printf("%d.%d.%d", date1.day, date1.month, date1.year);
}


void printPerson(Person person) {
    printf("\n%s %s %s", person.name, person.surname, person.sex);
    printDate(person.birthday);
}


void printEquipment(Equipment equip) {
    printf("\n%s - %g$", equip.name, equip.price);
}


void printProduct(Product product) {
    printf("\n%s - %g$, produced on %s", product.name, product.price, product.equipment.name);
}


void printProfession(Profession prof) {
    printf("\n%s using %s, wage-rate: %g", prof.name, prof.equipment.name, prof.wage_rate);
}


void printEmployee(Employee employee) {
    printf("\n*****Employee*****");
    printPerson(employee.person);
    printProfession(employee.profession);
    printf("\nEmployed: ");
    printDate(employee.employed);
    printf(";  Experience: %g;  Product-rate: %g;  Salary: %g", employee.experience, employee.product_rate, employee.salary);
}


void printHead(Head head) {
    printf("\n*****Head*****");
    printPerson(head.person);
    printf("\nEmployed: ");
    printDate(head.employed);
    printf(";  Experience: %g;  Salary: %g", head.experience, head.salary);
}


void printDeputy(Deputy deputy) {
    printf("\n*****Deputy*****");
    printPerson(deputy.person);
    printf("\nEmployed: ");
    printDate(deputy.employed);
    printf(";  Experience: %g;  Salary: %g", deputy.experience, deputy.salary);
}
