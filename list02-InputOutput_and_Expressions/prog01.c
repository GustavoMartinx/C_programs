#include <stdio.h>

int main() {
    int a;
    int b;

    printf("ENTER TWO VALUES: ");
    scanf(" %d %d", &a, &b);

    // Addition
    int res1 = a + b;
    printf("\nAdding %d and %d results in: %d", a, b, res1);

    // Subtraction
    int res2 = a - b;
    printf("\nSubtracting %d and %d results in: %d", a, b, res2);

    return 0;
}