This are examples how to use functions with struct Person, but it works similar with all other structures.

finPerson(fname) - allows you to import person from file. 
@return object of type Person, 
@args fname - const char* - name of file

foutPerson(fname, person) - allows you to export your person to file.
@return integer>1 in case of success, 
@args fname - const char* - name of file 
@args person - Person - your person

inputPerson() - allows you to use console to get data of person.
@return object of type Person

printPerson(person) - prints your person in console
@args person - Person - your person

There is one extra fucntion for struct Head:
addEmployeeToHead(&head, emp) - adds employee to your head
@args head - Head - your head
@args emp - employee - employee to add

Functions to use in database.h:

db.fname = filename
filename - object of type const char* - name of your database

@args db - DataBase - your database
int addEmployeeToDataBase(db, emp)
@args emp - Employee - employee to add to database

int addHeadToDataBase(db, head)
@args head - Head - head to add to database

int addDeputyToDataBase(db, dep)
@args dep - Deputy - deputy to add to database



void printAllPeople(db) - prints all people from databse to console


double getPriceOfEquipmentUnderHead(db, head) - return price of all employees who are under the direction of head
@args head - Head
@return - double
