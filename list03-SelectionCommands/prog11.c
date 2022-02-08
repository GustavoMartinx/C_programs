#include <stdio.h>

int main() {
    
    char k;

    printf("Digite um caractere: ");
    scanf(" %c", &k);

    // Se k eh uma letra
    if((k >= 65 && k <= 90) || (k >= 97 && k <= 122)) {
        printf("'%c' eh uma letra", k);
        // Se k eh uma vogal
        if (k == 65  ||
            k == 97  ||
            k == 69  ||
            k == 101 ||
            k == 73  ||
            k == 105 ||
            k == 79  ||
            k == 111 ||
            k == 85  ||
            k == 117) {
            printf("\ne '%c' eh uma vogal.", k);
        } else {
            // Se k eh uma consoante
            printf("\ne '%c' eh uma consoante.", k);
        }

    } else {
        // Se k for um numero
        if(k >= 48 && k <= 57) {
            printf("\n'%c' eh um numero.", k);
        } else {
            // Se k for um simbolo
            if((k >= 32 && k <= 47) ||
               (k >= 58 && k <= 64) ||
               (k >= 91 && k <= 96) ||
               (k >= 123 && k <= 126)) {
                printf("\n'%c' eh um simbolo.", k);
            }
        }
    }

    return 0;
}