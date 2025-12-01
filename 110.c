#include <stdio.h>

int main() {
    int size, k, i, j, maxElement;
    printf("Enter size of array: ");
    scanf("%d", &size);

    int arr[size];
    for(i = 0; i < size; i++) scanf("%d", &arr[i]);

    printf("Enter window size k: ");
    scanf("%d", &k);

    for(i = 0; i <= size - k; i++){
        maxElement = arr[i];
        for(j = i+1; j < i+k; j++){
            if(arr[j] > maxElement)
                maxElement = arr[j];
        }
        if(i>0) printf(" ");
        printf("%d", maxElement);
    }
    printf("\n");
    return 0;
}
