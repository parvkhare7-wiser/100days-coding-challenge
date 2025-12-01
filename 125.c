#include <stdio.h>

int main() {
    char fileName[100], line[200];
    printf("Enter filename: ");
    gets(fileName);

    FILE *file = fopen(fileName, "a");
    printf("Enter text to append: ");
    gets(line);

    fprintf(file, "%s\n", line);
    fclose(file);

    printf("Text appended successfully\n");
    return 0;
}
