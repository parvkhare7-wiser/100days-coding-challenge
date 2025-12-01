#include <stdio.h>
#include <string.h>

int main() {
    char s[100], t[100];
    int i, freq1[256] = {0}, freq2[256] = {0};

    printf("Enter first string: ");
    gets(s);
    printf("Enter second string: ");
    gets(t);

    for(i = 0; s[i] != '\0'; i++) freq1[(int)s[i]]++;
    for(i = 0; t[i] != '\0'; i++) freq2[(int)t[i]]++;

    for(i = 0; i < 256; i++){
        if(freq1[i] != freq2[i]){
            printf("Not Anagram\n");
            return 0;
        }
    }

    printf("Anagram\n");
    return 0;
}
