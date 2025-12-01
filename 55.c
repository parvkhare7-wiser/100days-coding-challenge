#include<stdio.h>
int prime(int a)
{
    for(int i=2;i<a;i++)
    {
        if(a%i==0)
        {
        return 1;
    }
}
return 0;
}
int main()
{
    static int n;
    printf("Enter number");
    scanf("%d",&n);
    for(int i=2;i<=n;i++)
    {
    if(prime(i))
    {
    printf("%d \n", i);
    }
    }
    return 0;
}