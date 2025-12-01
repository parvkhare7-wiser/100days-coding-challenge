#include<stdio.h>
int main(){
int hcf=0,n,n2,i;
printf("enter a number");
scanf("%d", &n);
printf("enter second number");
scanf("%d", &n2);
for(i=1;i<=n;i++)
{
    if(n%i==0 & n2%i==0)
    {
        hcf=i;
    }
}
printf("hcf : %d", hcf);
return 0 ;
}