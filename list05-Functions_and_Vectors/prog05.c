#include <stdio.h>

int summation(int n) {
    int sum = 0;

    for(int i = n; i > 0; i--) {
        sum += i;
        printf(" %d +", i);
    }

    printf("\b=");
    printf(" %d", sum);
}

int main() {
    int n;

    printf("\nDigite um valor para o somatorio: ");
    scanf(" %d", &n);
    printf("\n");
    
    summation(n);

    printf("\n");
    
    return 0;
}