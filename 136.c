#include <stdio.h>

int main() {
    enum Menu {ADD=1, SUBTRACT, MULTIPLY};
    enum Menu choice = MULTIPLY;
    int x = 4, y = 3;

    switch(choice){
        case ADD: printf("%d\n", x + y); break;
        case SUBTRACT: printf("%d\n", x - y); break;
        case MULTIPLY: printf("%d\n", x * y); break;
    }
    return 0;
}
