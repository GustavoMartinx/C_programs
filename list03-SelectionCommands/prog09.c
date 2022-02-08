#include <stdio.h>

int main() {
    char x;
    printf("Informe um caractere: ");
    scanf(" %c", &x);

    if((x >= 65 && x <= 90) || (x >= 97 && x <= 122)) {
        printf(" %c eh uma letra.", x);
    } else {
        printf(" %c nao eh uma letra.", x);
    }

    return 0;
}