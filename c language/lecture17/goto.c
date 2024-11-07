#include <stdio.h>

int main() {
    int i = 0;

    printf("Loop starts\n");

start_loop:
    if (i < 5) {
        printf("i = %d\n", i);
        i++;
        goto start_loop; // Jump back to the start_loop label
    }

    printf("Loop ends\n");

    return 0;
}
