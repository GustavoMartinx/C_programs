#include <stdio.h>

int main() {
    int n;
    int primo = 1; // true / false
    printf("Numero: ");
    scanf("%d", &n);

    for(int i = 2; i < n; i++) {
        if(n % i == 0) {
            primo = 0;
        }
    }
    if(primo == 1) {
        printf("Primo\n");
    } else {
        printf("Nao Primo\n");
    }

    return 0;
}