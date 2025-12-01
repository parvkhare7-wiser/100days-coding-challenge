#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    int i = 0, start, end;

    printf("Enter a sentence: ");
    gets(str);

    start = 0;
    while (1) {
        if (str[i] == ' ' || str[i] == '\0') {
            end = i - 1;
            int s = start, e = end;
            while (s < e) {
                char temp = str[s];
                str[s] = str[e];
                str[e] = temp;
                s++;
                e--;
            }
            start = i + 1;
        }
        if (str[i] == '\0') break;
        i++;
    }

    printf("Sentence with reversed words: %s\n", str);
    return 0;
}
