#include <stdio.h>

int main() {
    int n, i, search;
    
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d sorted elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &search);

    int low = 0, high = n - 1, mid, found = 0;

    while (low <= high) {
        mid = (low + high) / 2;

        if (arr[mid] == search) {
            found = 1;
            break;
        }
        else if (search < arr[mid]) {
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }

    if (found == 1)
        printf("Element %d found at position %d\n", search, mid + 1);
    else
        printf("Element %d not found\n", search);

    return 0;
}
