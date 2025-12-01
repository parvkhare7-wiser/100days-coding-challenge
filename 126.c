#include <stdio.h>

int main() {
    char fileName[100], line[200];
    printf("Enter filename: ");
    gets(fileName);

    FILE *file = fopen(fileName, "r");
    if(file == NULL){
        printf("File does not exist\n");
        return 0;
    }

    while(fgets(line, sizeof(line), file) != NULL)
        printf("%s", line);

    fclose(file);
    return 0;
}
