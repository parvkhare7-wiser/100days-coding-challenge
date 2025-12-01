#include <stdio.h>

int main() {
    int size, target, i, j;
    printf("Enter size of array: ");
    scanf("%d", &size);

    int nums[size];
    for(i = 0; i < size; i++) scanf("%d", &nums[i]);

    printf("Enter target: ");
    scanf("%d", &target);

    for(i = 0; i < size; i++){
        for(j = i+1; j < size; j++){
            if(nums[i] + nums[j] == target){
                printf("%d %d\n", i, j);
                return 0;
            }
        }
    }

    printf("-1 -1\n");
    return 0;
}
