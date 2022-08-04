#include <stdio.h>

int main() {
    int t;

    printf("What number do you want table of? ");
    scanf(" %d", &t);

    for(int i = 1; i < 11; i++) {
        int product = t * i;
        printf(" %d x %d = %d\n", t, i, product);
    }

    return 0;
}