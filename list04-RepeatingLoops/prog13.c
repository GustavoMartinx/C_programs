#include <stdio.h>

int main() {
    int n;
    int fib = 1;
    printf("informe um numero: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        fib += fib;
    }

    return 0;
} //NAO CONSEGUI DESISTI