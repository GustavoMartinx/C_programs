#include <stdio.h>

int main() {
    int n = 1;

    printf("Enter a number: ");
    scanf("%d", &n);
    printf("The digits used to whrite this number was:\n");

    while(n > 0) {
        int rest = n % 10;
        printf(" %d ", rest);
        n = n / 10;
    }

    return 0;
}