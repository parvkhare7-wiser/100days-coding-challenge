#include <stdio.h>

int main() {
    int num, sum = 0, count = 0;
    FILE *file = fopen("numbers.txt", "r");

    while(fscanf(file, "%d", &num) != EOF){
        sum += num;
        count++;
    }

    fclose(file);
    printf("Sum: %d\nAverage: %.2f\n", sum, (count>0)?(float)sum/count:0);
    return 0;
}
