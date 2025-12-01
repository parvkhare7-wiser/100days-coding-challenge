#include <stdio.h>

int main() {
    int size, i;
    printf("Enter size of array: ");
    scanf("%d", &size);

    int arr[size];
    for(i = 0; i < size; i++) scanf("%d", &arr[i]);

    int total = size*(size+1)/2, sum = 0;
    for(i = 0; i < size; i++) sum += arr[i];

    printf("%d\n", total - sum);
    return 0;
}
