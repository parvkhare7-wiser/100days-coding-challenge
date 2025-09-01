#include<stdio.h>
int main(){
    printf("Enter no. :");
    int n;
    scanf("%d",&n);
    if (n<=0){
        printf("Number is not positive:");
    }
    else 
    printf("Number is negative");
    return 0 ;
}