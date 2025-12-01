#include <stdio.h>

int main() {
    struct Student {char name[50]; int roll; int marks;};
    struct Student s[5];
    int i, maxIndex = 0;

    for(i = 0; i < 5; i++)
        scanf("%s %d %d", s[i].name, &s[i].roll, &s[i].marks);

    for(i = 1; i < 5; i++)
        if(s[i].marks > s[maxIndex].marks)
            maxIndex = i;

    printf("%s %d %d\n", s[maxIndex].name, s[maxIndex].roll, s[maxIndex].marks);
    return 0;
}
