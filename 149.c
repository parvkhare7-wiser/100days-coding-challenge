#include <stdio.h>
#include <stdlib.h>

int main() {
    struct Student {char name[50]; int roll;};
    struct Student *p = malloc(sizeof(struct Student));

    scanf("%s %d", p->name, &p->roll);
    printf("%s %d\n", p->name, p->roll);

    free(p);
    return 0;
}
