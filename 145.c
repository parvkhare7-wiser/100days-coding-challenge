#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};

struct Student top(struct Student s[], int n) {
    int i, best = 0;
    for(i = 1; i < n; i++)
        if(s[i].marks > s[best].marks)
            best = i;
    return s[best];
}

int main() {
    struct Student s[3] = {
        {"A", 1, 50},
        {"B", 2, 90},
        {"C", 3, 70}
    };

    struct Student t = top(s, 3);
    printf("%s %d %d\n", t.name, t.roll, t.marks);

    return 0;
}
