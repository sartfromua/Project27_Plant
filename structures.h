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
    Employee employee;
} Deputy;


typedef struct {
    Employee employee;
} Head;




date inputDate();
Person inputPerson();
Product inputProduct();
Equipment inputEquipment();
Profession inputProfession();
Employee inputEmployee();
Deputy inputDeputy();
Head inputHead();


void printDate(date date1);
void printPerson(Person person);
void printProduct(Product product);
void printEquipment(Equipment equip);
void printProfession(Profession prof);
void printEmployee(Employee employee);
void printDeputy(Deputy deputy);
void printHead(Head head);


