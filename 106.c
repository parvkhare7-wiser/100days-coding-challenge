#include <stdio.h>

int main() {
    int size, i, j;
    printf("Enter size of array: ");
    scanf("%d", &size);

    int array[size], nextGreater[size];
    for(i = 0; i < size; i++) scanf("%d", &array[i]);

    for(i = 0; i < size; i++){
        nextGreater[i] = -1;
        for(j = i+1; j < size; j++){
            if(array[j] > array[i]){
                nextGreater[i] = array[j];
                break;
            }
        }
    }

    for(i = 0; i < size; i++){
        if(i>0) printf(",");
        printf("%d", nextGreater[i]);
    }
    printf("\n");
    return 0;
}
