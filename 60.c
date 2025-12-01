#include <stdio.h>

int main() {
    int arr[7] = {3, -1, 0, 5, -6, 0, 2};
    int positive = 0, negative = 0, zero = 0;

    for (int i = 0; i < 7; i++) {
        if (arr[i] > 0)
            positive++;
        else if (arr[i] < 0)
            negative++;
        else
            zero++;
    }

    printf("Positive numbers: %d\n", positive);
    printf("Negative numbers: %d\n", negative);
    printf("Zeroes: %d\n", zero);

    return 0;
}
