#include <stdio.h>

int main() {
    int n;

    printf("Informe um numero de linhas: ");
    scanf(" %d", &n);

    for(int i = 0; i < n; n--) {
        printf("Linha %d\n", i+n);
    }

    return 0;
}