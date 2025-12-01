#include <stdio.h>
#include <ctype.h>

int main() {
    char str[200];
    int i;
    printf("Enter a string: ");
    gets(str);

    if(str[0] != '\0') str[0] = toupper(str[0]);

    for(i = 1; str[i] != '\0'; i++){
        if(str[i-1] == ' ' && str[i] != ' ') str[i] = toupper(str[i]);
        else str[i] = tolower(str[i]);
    }

    printf("%s\n", str);
    return 0;
}
