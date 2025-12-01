#include <stdio.h>

int main() {
    struct Box {int a; int b;};
    struct Box x = {5, 7};
    struct Box y = {5, 7};

    if(x.a == y.a && x.b == y.b) printf("Same\n");
    else printf("Different\n");

    return 0;
}
