#include<stdio.h>
int main(){
int n,s=0,k;
printf("enter a number");
scanf("%d", &n);
while(n>0)
{
    k=n%10;
    printf("%d", k);
    n=n/10;
    if(k%2==1)
    {
        s=s+k;
    }
}
printf("the sum is %d", s);
return 0 ;
}