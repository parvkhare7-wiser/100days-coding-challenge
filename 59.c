#include <stdio.h>

int main() {
    int arr[5];
    int e = 0, o = 0,i;
    for(i=0;i<5;i++)
    {
        printf("enter elemnts");
        scanf("%d",&arr[i]);
    }
    for (int i = 0; i < 5; i++) {
        if (arr[i] % 2 == 0)
            e++;
        else
            o++;
    }

    printf("Even numbers: %d\n", e);
    printf("Odd numbers: %d\n", o);

    return 0;
}
