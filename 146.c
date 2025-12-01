#include <stdio.h>

int main() {
    struct Date {int d; int m; int y;};
    struct Employee {char name[50]; int id; struct Date join;};

    struct Employee e = {"Rohan", 101, {12, 5, 2020}};
    printf("%s %d %d-%d-%d\n", e.name, e.id, e.join.d, e.join.m, e.join.y);

    return 0;
}
