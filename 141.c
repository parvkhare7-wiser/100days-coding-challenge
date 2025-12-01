#include <stdio.h>

int main() {
    struct Student {char name[50]; int roll; int marks;};
    struct Student s;

    printf("Enter name: ");
    scanf("%s", s.name);
    printf("Enter roll: ");
    scanf("%d", &s.roll);
    printf("Enter marks: ");
    scanf("%d", &s.marks);

    printf("%s %d %d\n", s.name, s.roll, s.marks);
    return 0;
}
