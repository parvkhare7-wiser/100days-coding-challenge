#include<stdio.h>
 
int main()
{
  	int i, num;
 
  	printf("\n Please Enter  Value :  ");
  	scanf("%d", &num);
  
  	printf("\n first n odd numbers are : \n", num);
  	for(i = 1; i <= num; i++)
  	{
    	if ( i % 2 != 0 ) 
    	{
  			printf(" %d\t", i);
    	}
  	}
  	return 0;
}
