#include <stdio.h>
int main(){
float area;
float perimeter;
float length,breath;
printf("enter length");
scanf("%d", &length);
printf("enter breath");
scanf("%d", &breath );
area = length*breath;
perimeter = 2 *(length+breath);
printf("area of rectangle: %.2f\n", area);
printf("perimeter of rectangle: %.2f\n", perimeter);
return 0;
}    