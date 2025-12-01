#include <stdio.h>

int main() {
    enum Result {SUCCESS, FAILURE, TIMEOUT};
    enum Result r = TIMEOUT;

    if(r == SUCCESS) printf("Operation Successful\n");
    else if(r == FAILURE) printf("Operation Failed\n");
    else printf("Operation Timed Out\n");

    return 0;
}
