#include <stdio.h>
#include <stdlib.h>
#include "structures.h"

int main() {
    Employee emp;
    emp.profession.equipment.product.price = 100;
    printf("%lf", emp.profession.equipment.product.price);
}
