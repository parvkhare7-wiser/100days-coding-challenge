#include <stdio.h>

int main() {
    struct Car {char model[50]; int year;};
    struct Car c = {"kia", 2020};

    struct Car *p = &c;
    p->year = 2024;

    printf("%s %d\n", p->model, p->year);
    return 0;
}
