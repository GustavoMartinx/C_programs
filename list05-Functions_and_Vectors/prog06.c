#include <stdio.h>

int factorial_sum(int n) {
    int sum = 0;
    int fac = 1;

    for(int i = 1; i <= n; i++) {
        fac *= i;
        sum += fac;
        printf(" %d! +", i);
    }   

    printf("\b=");
    printf(" %d", sum);
}

int main() {
    int n;

    printf("\nDigite um valor para o somatorio do fatorial: ");
    scanf(" %d", &n);
    printf("\n");
    
    factorial_sum(n);

    printf("\n");
    
    return 0;
}