#include <stdio.h>

int main() {
    int size, i;
    printf("Enter size of array: ");
    scanf("%d", &size);

    int arr[size];
    for(i = 0; i < size; i++) scanf("%d", &arr[i]);

    int currentSum = arr[0], maxSum = arr[0];
    for(i = 1; i < size; i++){
        if(currentSum < 0) currentSum = arr[i];
        else currentSum += arr[i];

        if(currentSum > maxSum) maxSum = currentSum;
    }

    printf("%d\n", maxSum);
    return 0;
}
