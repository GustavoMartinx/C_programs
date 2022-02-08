#include <stdio.h>

int main() {
    printf("Informe alguns valores (0 para sair): \n");

    int n = 1;
    int min = 99999;
    int max = -99999;

    while(n != 0) {
        printf(">");
        scanf(" %d", &n);
        
        if(n > max) {
            max = n;
        }
        if(n < min) {
            min = n;
        }
    }

    printf("\nO maior numero digitado foi: %d", max);
    printf("\nE o menor foi: %d", min);

    return 0;
}