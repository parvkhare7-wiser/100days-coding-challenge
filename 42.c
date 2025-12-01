#include<stdio.h>
int main(){
int n,s=0,i,z;
printf("enter a number");
scanf("%d",&n);
z=n;
for(i=1;i<n;i++)
{
    if(n%i==0)
    s=s+i;
}
if(n==s)
printf("it is a perfect number");
else
printf("not a perfect number");    
return 0 ;
}