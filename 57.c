#include<stdio.h>
int main(){
int a[5];
int i,s=0;
for (i=0;i<5;i++)
{
    printf("enter element");
    scanf("%d", &a[i]);
}
for(i=0;i<5;i++)
{
    printf("%d",a[i]);
    s=s+a[i];
}
printf("the sum is %d",s);
return 0 ;
}