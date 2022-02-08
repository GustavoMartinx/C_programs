#include <stdio.h>

int main() {
    char x;
    printf("Informe um caractere: ");
    scanf(" %c", &x);

    if(x < 65 || (x >= 91 && x <= 96) || x >= 123) {
        printf(" %c nao eh uma letra.", x);
    } else {
        if((x >= 65 && x <= 90) || (x >= 97 && x <= 122)) {
            printf(" %c eh uma letra.", x);
        }

        if(x >= 65 && x <= 90) {
            printf("\n %c eh uma letra mauiscula");
        } else {
            if(x >= 97 && x <= 122) {
                x = x - 32;
                printf("\nEm maiusculo: %c", x);
            }
        }
    }

    return 0;
}