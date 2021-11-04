#include "../Headers/Head.h"
#include "../Headers/Employee.h"

void printHead(Head head) {
    printf("\n*****Head*****");
    printEmployee(head.employee);
}


Head inputHead() {
    Head head;
    printf("\n*****Head*****");
    head.employee = inputEmployee();

    return head;
}
