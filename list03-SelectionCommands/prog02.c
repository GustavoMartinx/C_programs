#include <stdio.h>

int main() {
    printf("EH PAR OU IMPAR??\n\n");

    int x;
    printf("Informe um inteiro: ");
    scanf(" %d", &x);

    // Se o resto da divisão for zero, então eh par, se não, ímpar
    int resto = x % 2;
    if(resto == 0) {
        printf(" %d eh Par!", x);
    } else {
        printf(" %d eh Impar!", x);
    }

    return 0;
}