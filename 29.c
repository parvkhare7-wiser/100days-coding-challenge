#include<stdio.h>
int main(){
int i,f=1,a;
printf("enter number");
scanf("%d", &a);
for(i=1;i<=a;i++)
{
    f=f*i;
}
printf("factorial is %d", f);
}