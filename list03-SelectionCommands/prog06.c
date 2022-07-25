#include <stdio.h>

int main() {
    float x;
    float y;
    float z;
    float w;

    printf("Enter 4 numbers and I'll tell you which is the biggest: ");
    scanf(" %f %f %f %f", &x, &y, &z, &w);

    // if x is the biggest
    // Se o maior for x
    if(x > y && x > z && x > w) {
        printf("\nThe biggest number is: %.1f", x);
    } else {
        // If y is the biggest
        // Se o maior for y
        if(y > x && y > z && y > w) {
            printf("\nThe biggest number is: %.1f", y);
        } else {
            // If z is the biggest
            // Se o maior for z
            if(z > x && z > y && z > w) {
                printf("\nThe biggest number is: %.1f", z);
            } else {
                // If w is the biggest 
                // Se o maior for w 
                if(w > x && w > y && w > z) {
                    printf("\nThe biggest number is: %.1f", w);
                
                } else {

                    // If someone of then is equal
                    // Se algum deles for igual
                    if(x == y || x == z || x == w) {
                    printf("\nYou type the biggest two times: %.1f", x);
                    } else {
                        if(y == z || y == w) {
                        printf("\nYou type the biggest two times: %.1f", y);
                        } else {
                            if(z == w) {
                            printf("\nYou type the biggest two times: %.1f", z);
                            }
                        }
                    }
                }
            }
        }
    }

    return 0;
}