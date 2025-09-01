#include<stdio.h>
int main(){
char alphabet;
printf("enter alphabet");
scanf("%c", &alphabet);
if(alphabet== 'A' || alphabet=='Z'){
    printf("%c  alphabet is uppercase. \alphabet");
}
else{
    printf("%d alphabet is lowercase. \alphabet");
}

return 0 ;
}