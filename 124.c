#include <stdio.h>

int main() {
    char srcName[100], destName[100], ch;
    printf("Enter source filename: ");
    gets(srcName);
    printf("Enter destination filename: ");
    gets(destName);

    FILE *src = fopen(srcName, "r");
    FILE *dest = fopen(destName, "w");

    while((ch = fgetc(src)) != EOF)
        fputc(ch, dest);

    fclose(src);
    fclose(dest);

    printf("File copied successfully\n");
    return 0;
}
