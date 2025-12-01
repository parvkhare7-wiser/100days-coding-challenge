#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i = 0;

    printf("Enter full name: ");
    gets(str);

    if (str[0] != ' ')
        printf("%c", str[0]);

    while (str[i] != '\0') {
        if (str[i] == ' ' && str[i+1] != ' ' && str[i+1] != '\0')
            printf("%c", str[i+1]);
        i++;
    }

    printf("\n");
    return 0;
}
