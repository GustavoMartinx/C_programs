#include <stdio.h>

int main() {
    int a;
    int b;

    printf("ENTER TWO VALUES: ");
    scanf(" %d %d", &a, &b);

    // Rest of Division
    float rest = a % b;
    printf("\nThe rest of the division of %d by %d is: %f", a, b, rest);

    return 0;
}