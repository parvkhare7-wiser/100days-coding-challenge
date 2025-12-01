#include <stdio.h>
#include <string.h>

int main() {
    char str[100], word[100];
    int i = 0, len = 0, count = 0;

    printf("Enter full name: ");
    gets(str);

    while (1) {
        if (str[i] != ' ' && str[i] != '\0') {
            word[len++] = str[i];
        } else {
            word[len] = '\0';
            if (str[i] == '\0') {
                printf("%s", word);
                break;
            }
            if (count == 0)
                printf("%c. ", word[0]);
            else
                printf("%c. ", word[0]);
            count++;
            len = 0;
        }
        i++;
    }

    printf("\n");
    return 0;
}
