#include <stdio.h>
int main(){
int a,b,c;
printf("enter two numbers");
scanf("%d %d", &a,&b);
printf("before swap:a= %d, b=%d\n", a,b);
c=a;
a=b;
b=c;
printf("after swap: a=%d,b=%d\n", a,b);
return 0;
}