#include <stdio.h>

int main() {
    
    int n;
    printf("Summation of a number: ");
    scanf("%d", &n);

    int sum = 0;
    for(int i = 1; i <= n; i++) {
        printf("%d ", i);
        sum += i;
    }
    printf("= %d\n", sum);
    printf("\n\n");

    return 0;
}