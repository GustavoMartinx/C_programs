#include <stdio.h>

int main() {
    int n;
    int prime = 1; // true / false
    printf("Number: ");
    scanf("%d", &n);

    for(int i = 2; i < n; i++) {
        if(n % i == 0) {
            prime = 0;
        }
    }
    if(prime == 1) {
        printf("Prime\n");
    } else {
        printf("Not Prime\n");
    }

    return 0;
}