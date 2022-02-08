#include <stdio.h>

int main() {
    
    int x, y;
    printf("Informe dois numeros naturais: ");
    scanf(" %d %d", &x, &y);

    if(x < 0 || y < 0) {
        printf("\nERRO: NUMEROS NEGATIVOS NAO SAO PERMITIDOS.");
    } else {
        if(x == y) {
            printf(" %d eh igual a %d", x, y);
        } else {
            if(x > y) {
                printf(" %d eh maior que %d", x, y);
            } else {
                if(y > x) {
                    printf(" %d eh maior que %d", y, x);
                }
            }
        }
    }

    return 0;
}