#include <stdio.h>

int main() {
    int size, k, i, j, currentSum, maxSum;
    printf("Enter size of array: ");
    scanf("%d", &size);

    int arr[size];
    for(i = 0; i < size; i++) scanf("%d", &arr[i]);

    printf("Enter subarray size k: ");
    scanf("%d", &k);

    maxSum = 0;
    for(i = 0; i <= size - k; i++){
        currentSum = 0;
        for(j = i; j < i + k; j++)
            currentSum += arr[j];
        if(i == 0 || currentSum > maxSum)
            maxSum = currentSum;
    }

    printf("%d\n", maxSum);
    return 0;
}
