#include <stdio.h>

int main() {
    int size, i, j;
    printf("Enter size of array: ");
    scanf("%d", &size);

    int array[size], prevGreater[size];
    for(i = 0; i < size; i++) scanf("%d", &array[i]);

    for(i = 0; i < size; i++){
        prevGreater[i] = -1;
        for(j = i-1; j >= 0; j--){
            if(array[j] > array[i]){
                prevGreater[i] = array[j];
                break;
            }
        }
    }

    for(i = 0; i < size; i++){
        if(i>0) printf(",");
        printf("%d", prevGreater[i]);
    }
    printf("\n");
    return 0;
}
