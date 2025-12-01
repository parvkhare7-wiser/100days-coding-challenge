#include <stdio.h>

int main() {
    char date[20], day[3], month[3], year[5];

    printf("Enter date (DD/MM/YYYY): ");
    gets(date);

    day[0] = date[0]; day[1] = date[1]; day[2] = '\0';
    month[0] = date[3]; month[1] = date[4]; month[2] = '\0';
    year[0] = date[6]; year[1] = date[7]; year[2] = date[8]; year[3] = date[9]; year[4] = '\0';

    printf("Date in MM-DD-YYYY format: %s-%s-%s\n", month, day, year);
    return 0;
}
