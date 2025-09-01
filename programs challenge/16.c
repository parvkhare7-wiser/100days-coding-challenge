#include<stdio.h>
int main(){
int n1,n2,n3;
printf("enter  three number");
scanf("%d %d %d", &n1,&n2,&n3);
if(n1>n2){
    printf("%d n1 is greater \n\t");
}
else if(n2>n3){
    printf("%d n2 is greater \n\t");
    }
    else{
        printf("%d n3 is greater \n\t");
    }


return 0 ;
}