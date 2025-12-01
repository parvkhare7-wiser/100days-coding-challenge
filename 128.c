#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;
    int vowels = 0, consonants = 0;
    FILE *file = fopen("input.txt", "r");

    while((ch = fgetc(file)) != EOF){
        ch = tolower(ch);
        if(ch >= 'a' && ch <= 'z'){
            if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u') vowels++;
            else consonants++;
        }
    }

    fclose(file);
    printf("Vowels: %d\nConsonants: %d\n", vowels, consonants);
    return 0;
}
