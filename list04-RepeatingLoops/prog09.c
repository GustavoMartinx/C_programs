#include <stdio.h>

int main() {
    printf("Enter some values (0 to getout): \n");

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

    printf("\nThe biggest number typed was: %d", max);
    printf("\nAnd the smallest: %d", min);

    return 0;
}