#include <stdio.h>

int main() {
    int a;
    int b;

    printf("ENTER TWO VALUES: ");
    scanf(" %d %d", &a, &b);

    // Multiplication
    int product = a * b;
    printf("\nThe product of %d by %d is: %d", a, b, product);

    // Integer Division
    int res1 = a / b;
    printf("\nThe integer division of %d by %d results in: %d", a, b, res1);

    return 0;
}