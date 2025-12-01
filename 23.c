#include<stdio.h>
const 
int main(){
int days;
int fine=0;
printf("enter delay days: ");
scanf("%d", &days);
if (days <= 0){
    fine =0;
}
    else if(days<=5){
fine=days*2;
    }
    else if(days<=10){
        fine=(5*2)+(days-5)*4;
    }
    printf("library fine=%d\n", fine);

return 0 ;
}