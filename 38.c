#include<stdio.h>
int main(){
int n,k,s=0;
printf("enter number");
scanf("%d", &n);
while(n!=0)
{
    k=n%10;
    printf("%d\n", k);
    n=n/10;
    s=s+k;
}
printf("the sum of digits is %d", s);
return 0 ;
}