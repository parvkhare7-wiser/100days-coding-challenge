#include <stdio.h>

int main() {
    enum Days {SUN, MON, TUE, WED, THU, FRI, SAT};
    enum Days i;
    for(i = SUN; i <= SAT; i++)
        printf("%d\n", i);
    return 0;
}
