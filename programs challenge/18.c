#include<stdio.h>
int main(){
int marks;
printf("enter marks");
scanf("%d", &marks);
if(marks >= 40 && marks <=60){
    printf("%d average. \n");}
    else if(marks >= 60 && marks <=80){
        printf("%d good. \n");
    }
    else if (marks >=80 && marks <=100){
        printf("%d very good. \n");
    }
    else{
        printf("%d not good. \n");
    }

return 0 ;
}