#include <stdio.h>

int main() {
    int size, i, j, count, majority = -1;
    printf("Enter size of array: ");
    scanf("%d", &size);

    int nums[size];
    for(i = 0; i < size; i++) scanf("%d", &nums[i]);

    for(i = 0; i < size; i++){
        count = 0;
        for(j = 0; j < size; j++){
            if(nums[i] == nums[j]) count++;
        }
        if(count > size/2){
            majority = nums[i];
            break;
        }
    }

    printf("%d\n", majority);
    return 0;
}
