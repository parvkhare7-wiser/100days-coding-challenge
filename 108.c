#include <stdio.h>

int main() {
    int size, i, j;
    printf("Enter size of array: ");
    scanf("%d", &size);

    int nums[size], result[size];
    for(i = 0; i < size; i++) scanf("%d", &nums[i]);

    for(i = 0; i < size; i++){
        int product = 1;
        for(j = 0; j < size; j++){
            if(i != j) product *= nums[j];
        }
        result[i] = product;
    }

    for(i = 0; i < size; i++){
        if(i>0) printf(",");
        printf("%d", result[i]);
    }
    printf("\n");
    return 0;
}
