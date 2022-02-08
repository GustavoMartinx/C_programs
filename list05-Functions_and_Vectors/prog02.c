#include <stdio.h>

int is_prime(int n) {
    int prime = 1;

    for(int div = 2; div <= (n/2) && prime == 1; div++) {
        if(n % div == 0) {
            prime = 0;
        }
    }

    if(prime == 1) {
        printf("Primo!");
        return 1;
    } else {
        printf("Nao eh primo!");
        return 0;
    }
}

int main() {
    int n;
    printf("informe um valor: ");
    scanf(" %d", &n);
    is_prime(n);

    return 0;
}