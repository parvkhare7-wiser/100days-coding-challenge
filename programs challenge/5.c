#include <stdio.h>
int main(){
float celcius;
float farenhite;
printf("enter celcius");
scanf("%f", &celcius);
farenhite=(celcius*1.8) +32.0;
printf("temperature in farenheite:%f\n",farenhite);
return 0;
}