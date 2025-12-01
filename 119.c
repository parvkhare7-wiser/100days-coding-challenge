#include <stdio.h>

int main() {
    int size, i;
    printf("Enter size of array: ");
    scanf("%d", &size);

    int arr[size];
    for(i = 0; i < size; i++) scanf("%d", &arr[i]);

    int repeated = -1;
    int freq[size];
    for(i = 0; i < size; i++) freq[i] = 0;

    for(i = 0; i < size; i++){
        if(freq[arr[i]] == 1){
            repeated = arr[i];
            break;
        } else freq[arr[i]] = 1;
    }

    printf("%d\n", repeated);
    return 0;
}
