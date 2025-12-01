#include <stdio.h>

int main() {
    enum Days {SUNDAY, MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY};
    enum Days day;

    for(day = SUNDAY; day <= SATURDAY; day++)
        printf("%d %d\n", day, day);

    return 0;
}
