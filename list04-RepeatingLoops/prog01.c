#include <stdio.h>

int main() {
    int n;
    printf("Informe o numero de linhas: ");
    scanf(" %d", &n);

    for(int i = 0; i < n; i++) {
        printf("Linha %d\n", i+1);
    }

    return 0;
}