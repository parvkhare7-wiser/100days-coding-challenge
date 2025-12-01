#include<stdio.h>
int main(){
int unit;
printf("enter units consumed =");
scanf("%d", &unit);
if(unit<=100)
{
    printf("bill=%d", 3*unit);
}
else if(unit>=100 && unit<=200){
    printf("bill is=%d", 5*unit);
}
else{
    printf("bill is %d", 7*unit);
}
return 0 ;
}