#include <stdio.h>

int main() {
    int x;
    int y;
    int z;

    printf("Enter 3 values: ");
    scanf(" %d %d %d", &x, &y, &z);
    printf("\nThe ascending order of the numbers entered is: ");

    // Defining the smallest
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


    // Defining the median
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

    // Defining the biggest
    // Definindo o maior
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