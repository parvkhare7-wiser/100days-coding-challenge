#include <stdio.h>

int main() {
    int n, i, pivot = -1;
    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++){
        int leftSum = i*(i+1)/2;
        int rightSum = (n*(n+1))/2 - ((i-1)*i)/2;
        if(leftSum == rightSum){
            pivot = i;
            break;
        }
    }

    printf("%d\n", pivot);
    return 0;
}
