#include <stdio.h>

int main() {
    
    int x, y;
    printf("Enter two natural numbers: ");
    scanf(" %d %d", &x, &y);

    if(x < 0 || y < 0) {
        printf("\nERROR: NEGATIVE NUMBERS ARE NOT ALLOWED.");
    } else {
        if(x == y) {
            printf(" %d its the same as %d", x, y);
        } else {
            if(x > y) {
                printf(" %d is bigger than %d", x, y);
            } else {
                if(y > x) {
                    printf(" %d is bigger than %d", y, x);
                }
            }
        }
    }

    return 0;
}