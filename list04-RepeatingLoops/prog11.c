#include <stdio.h>

int main() {
    int n;
    int res = 0;
    int odd = 1;
    printf("Enter a natural value: ");
    scanf(" %d", &n);

    for(int i = 0; i < n; i++) {
        res += odd;
        odd += 2;
    }

    printf("\n%d squared is: %d", n, res);

    return 0;
}