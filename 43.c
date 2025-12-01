#include<stdio.h>
int main(){
int n,s=0,z,i,k,f=1;
printf("enter a number");
scanf("%d", &n);
z=n;
while(n!=0)
{
    k=n%10;
    f=1;
    for(i=k;i>=1;i--)
    {
        f=f*i;
    }
    s=s+f;
    n=n/10;
}
if(s==z)
printf("strong number", s);
else
printf("not a strog number");
return 0 ;
}