#include <stdio.h>

int main() {
    char line[200];
    FILE *file = fopen("info.txt", "r");

    while(fgets(line, sizeof(line), file) != NULL)
        printf("%s", line);

    fclose(file);
    return 0;
}
