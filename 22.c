#include <stdio.h>
int main() 
{
    float profit,loss,cp,sp;
    printf("enter the cost price = ");
    scanf("%f",&cp);
    printf("enter the sellig price = ");
    scanf("%f",&sp);
    if(sp>cp)
    {
        profit=((sp-cp)/cp)*100;
        printf("profit=%f", profit);}
        else {
            loss=((cp-sp)/cp)*100;
            printf("loss=%f", loss);
        }
        return 0;
    }
