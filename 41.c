#include<stdio.h>
int main(){
int a,i,s=0;
printf("enter a number");
scanf("%d", &a);
for(i=1;i<a;i++)
{
    if(a%i==0)
    s=s+i;
}
if(s==a)
printf("perfect number");
else 
printf("not perfect number");    
return 0 ;
}