#include <stdio.h>
int main(){
int n;
int sum=0;
int i;
printf("enter a number");
scanf("%d", &n);
for(i=1; i<=n; i++){
    sum+=i;
}
printf("sum of first %d natural numbers=%d\n" , n, sum);
return 0;
}