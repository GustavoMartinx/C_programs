#include <stdio.h>

int main() {
    int x;
    int y;
    int z;

    printf("Informe 3 valores: ");
    scanf(" %d %d %d", &x, &y, &z);
    printf("\nA ordem crescente dos numeros digitados eh: ");

    // Definindo o menor
    if(x < y && x < z) {
        printf(" %d", x);
    } else {
        if(y < x && y < z) {
            printf(" %d", y);
        } else {
            if(z < x && z < y) {
                printf(" %d", z);
            }
        }
    }


    // Definindo o mediano
    if((x > z && x < y) || (x > y && x < z)) {
        printf(" %d", x);
    } else {
        if((y > z && y < x || (y > x && y < z))) {
            printf(" %d", y);
        } else {
            if((z > y && z < x || (z > x && z < y))) {
                printf(" %d", z);
            }
        }
    }

    // Definindo qual eh o maior
    if(x > y && x > z) {
        printf(" %d", x);
    } else {
        if(y > x && y > z) {
            printf(" %d", y);
        } else {
            if(z > x && z > y) {
                printf(" %d", z);
            }
        }
    }

    return 0;
}