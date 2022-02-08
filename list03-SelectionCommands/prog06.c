#include <stdio.h>

int main() {
    float x;
    float y;
    float z;
    float w;

    printf("Informe 4 numeros e eu te direi qual eh o maior deles: ");
    scanf(" %f %f %f %f", &x, &y, &z, &w);

    // Se o maior for x
    if(x > y && x > z && x > w) {
        printf("\nO maior numero eh: %.1f", x);
    } else {
        // Se o maior for y
        if(y > x && y > z && y > w) {
            printf("\nO maior numero eh: %.1f", y);
        } else {
            // Se o maior for z
            if(z > x && z > y && z > w) {
                printf("\nO maior numero eh: %.1f", z);
            } else {
                // Se o maior for w 
                if(w > x && w > y && w > z) {
                    printf("\nO maior numero eh: %.1f", w);
                
                } else {

                    // Se algum deles for igual
                    if(x == y || x == z || x == w) {
                    printf("\nVoce digitou o maior valor duas vezes: %.1f", x);
                    } else {
                        if(y == z || y == w) {
                        printf("\nVoce digitou o maior valor duas vezes: %.1f", y);
                        } else {
                            if(z == w) {
                            printf("\nVoce digitou o maior valor duas vezes: %.1f", z);
                            }
                        }
                    }
                }
            }
        }
    }

    return 0;
}