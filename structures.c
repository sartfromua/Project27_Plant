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
