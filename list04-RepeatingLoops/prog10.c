#include <stdio.h>

int main() {
    int n = 1;

    printf("Informe um numero: ");
    scanf("%d", &n);
    printf("Os algarismos usados para digitar esse numero foram:\n");

    while(n > 0) {
        int resto = n % 10;
        printf(" %d ", resto);
        n = n / 10;
    }

    return 0;
}