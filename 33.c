#include<stdio.h>
int main(){
int a,n,z,k,s=0;
printf("enter a number");
scanf("%d", &a);
z=a;
while(a!=0)
{
    k=a%10;
    s=s+k*k*k;
    a=a/10;
}
if(s==z)
printf("armstrong number");
else 
printf("not a armstrong number");
return 0 ;
}