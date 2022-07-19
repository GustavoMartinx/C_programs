#include <stdio.h>

int main() {
    printf("IS PAIR OR ODD?\n\n");

    int x;
    printf("Enter a integer: ");
    scanf(" %d", &x);

    // If the remainder of division by two is zero, then is pair, else, odd
    // Se o resto da divisão por dois for zero, então eh par, se não, ímpar
    int rest = x % 2;
    if(rest == 0) {
        printf(" %d is pair!", x);
    } else {
        printf(" %d is odd!", x);
    }

    return 0;
}