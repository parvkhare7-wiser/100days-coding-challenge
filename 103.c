#include <stdio.h>

int main() {
    int size, i, j, pivotIndex = -1;
    printf("Enter size of array: ");
    scanf("%d", &size);

    int numbers[size];
    for(i = 0; i < size; i++)
        scanf("%d", &numbers[i]);

    for(i = 0; i < size; i++){
        int leftSum = 0, rightSum = 0;
        for(j = 0; j < i; j++) leftSum += numbers[j];
        for(j = i+1; j < size; j++) rightSum += numbers[j];
        if(leftSum == rightSum){
            pivotIndex = i;
            break;
        }
    }

    printf("%d\n", pivotIndex);
    return 0;
}
