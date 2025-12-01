#include <stdio.h>

int main() {
    enum Gender {MALE, FEMALE};
    struct Person {char name[50]; enum Gender g;};

    struct Person p = {"Aman", MALE};

    if(p.g == MALE) printf("Male\n");
    else printf("Female\n");

    return 0;
}
