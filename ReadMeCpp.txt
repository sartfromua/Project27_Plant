There are classes: Date, Person, Product, Profession, Equipment, Head, Deputy, Employee. All of them have same methods: fin, fout, input, print.

.input() - to input class from console
.print() - to print class in console
.fin(fname) - to import data of class from file
@args fname - const char* - name of file
.fout(fname) - to excport data of class to file
@args fname - const char* - name of file

There is extra method in class Head: addEmployee
.addEmployee(emp) - to add employee to head
@args emp - Employee - employee to add


You can see methods of class DataBase from documentation:

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
int addDeputy(Deputy deputy);
*/
int addDeputy(Deputy deputy);

Adds data of all people to list;
@return number of added people in case of success, number of error otherwise
int getPeople(Person** people);

/**
Counts price of equipment used by employees under head from base
@arg head - Head
*/
double getEquipmentPriceOfEmployeesUnderHead(Head head);

/**
Read data and fills all lists
@return 1 in case of success
*/
int readData();

void setFname(const char* fname){this->fname = fname;}; // sets fname
*/
