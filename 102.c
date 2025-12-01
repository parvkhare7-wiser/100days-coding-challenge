#include <stdio.h>

int main() {
    int size, number, i, ceilIndex = -1;
    printf("Enter size of array: ");
    scanf("%d", &size);

    int array[size];
    printf("Enter %d sorted elements:\n", size);
    for(i = 0; i < size; i++)
        scanf("%d", &array[i]);

    printf("Enter the number x: ");
    scanf("%d", &number);

    for(i = 0; i < size; i++){
        if(array[i] >= number){
            ceilIndex = i;
            break;
        }
    }

    printf("%d\n", ceilIndex);
    return 0;
}
