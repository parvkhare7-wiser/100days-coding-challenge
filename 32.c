#include<stdio.h>
int main(){
int n,z,r=0,k;
printf("enter a number");
scanf("%d", &n);
z=n;
while (n!=0)
{
k=n%10;
r=r*10+k;
n=n/10;
}
if(r==z)
printf("palindrome number");
else
printf("not a palindrome number");
return 0 ;
}