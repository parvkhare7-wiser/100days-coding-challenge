#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *file = fopen("input.txt", "r");
    char ch;
    int characters = 0, words = 0, lines = 0;
    int inWord = 0;

    while((ch = fgetc(file)) != EOF){
        characters++;
        if(ch == '\n') lines++;
        if(isspace(ch)) inWord = 0;
        else if(inWord == 0){
            words++;
            inWord = 1;
        }
    }

    fclose(file);
    printf("Characters: %d\nWords: %d\nLines: %d\n", characters, words, lines);
    return 0;
}
