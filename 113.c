#include <stdio.h>

int main() {
    int size, k, i, j, temp;
    printf("Enter size of array: ");
    scanf("%d", &size);

    int arr[size];
    for(i = 0; i < size; i++) scanf("%d", &arr[i]);

    printf("Enter k: ");
    scanf("%d", &k);

    for(i = 0; i < size-1; i++){
        for(j = i+1; j < size; j++){
            if(arr[i] > arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("%d\n", arr[k-1]);
    return 0;
}
