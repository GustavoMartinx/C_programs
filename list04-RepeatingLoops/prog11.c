#include <stdio.h>

int main() {
    int n;
    int res = 0;
    int impar = 1;
    printf("Informe um valor natural: ");
    scanf(" %d", &n);

    for(int i = 0; i < n; i++) {
        res += impar;
        impar += 2;
    }

    printf("\nO quadrado de %d eh: %d", n, res);

    return 0;
}