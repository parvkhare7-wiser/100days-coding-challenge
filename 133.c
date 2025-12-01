#include <stdio.h>

int main() {
    enum Month {JAN=1, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC};
    enum Month m = FEB;

    if(m==JAN||m==MAR||m==MAY||m==JUL||m==AUG||m==OCT||m==DEC)
        printf("31 days\n");
    else if(m==APR||m==JUN||m==SEP||m==NOV)
        printf("30 days\n");
    else
        printf("28 or 29 days\n");

    return 0;
}
