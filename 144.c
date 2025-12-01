#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};

void show(struct Student s) {
    printf("%s %d %d\n", s.name, s.roll, s.marks);
}

int main() {
    struct Student a = {"Ravi", 10, 85};
    show(a);
    return 0;
}
