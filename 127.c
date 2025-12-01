#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;
    FILE *inFile = fopen("input.txt", "r");
    FILE *outFile = fopen("output.txt", "w");

    while((ch = fgetc(inFile)) != EOF)
        fputc(toupper(ch), outFile);

    fclose(inFile);
    fclose(outFile);

    printf("Conversion to uppercase completed\n");
    return 0;
}
