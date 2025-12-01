#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    int i, j, maxLength = 0, currentLength;
    printf("Enter a string: ");
    gets(str);

    int n = strlen(str);

    for(i = 0; i < n; i++){
        int visited[256] = {0};
        currentLength = 0;
        for(j = i; j < n; j++){
            if(visited[(int)str[j]]) break;
            visited[(int)str[j]] = 1;
            currentLength++;
        }
        if(currentLength > maxLength) maxLength = currentLength;
    }

    printf("%d\n", maxLength);
    return 0;
}
