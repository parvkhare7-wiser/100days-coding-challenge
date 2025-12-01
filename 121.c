#include <stdio.h>

int main() {
    char name[100];
    int age;
    FILE *file = fopen("info.txt", "w");

    printf("Enter name: ");
    gets(name);
    printf("Enter age: ");
    scanf("%d", &age);

    fprintf(file, "Name: %s\nAge: %d\n", name, age);
    fclose(file);

    printf("Data saved successfully\n");
    return 0;
}
