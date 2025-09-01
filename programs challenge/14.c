#include<stdio.h>
int main(){
char alpha;
printf("enter alphabet");
scanf("%c", &alpha);
if(alpha>= 'a'&& alpha<= 'z' ){
}
    if(alpha== 'a' || alpha== 'e' || alpha== 'i' || alpha== 'o' || alpha== 'u'){
    printf("%c is a vowel. \alpha ");
    }
else{
    printf("%c is not a vowel. \alpha");
}
return 0 ;
}