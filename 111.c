#include <stdio.h>

int main() {
    int size, k, i, j, found;
    printf("Enter size of array: ");
    scanf("%d", &size);

    int arr[size];
    for(i = 0; i < size; i++) scanf("%d", &arr[i]);

    printf("Enter window size k: ");
    scanf("%d", &k);

    for(i = 0; i <= size - k; i++){
        found = 0;
        for(j = i; j < i+k; j++){
            if(arr[j] < 0){
                printf("%d ", arr[j]);
                found = 1;
                break;
            }
        }
        if(!found) printf("0 ");
    }
    printf("\n");
    return 0;
}
