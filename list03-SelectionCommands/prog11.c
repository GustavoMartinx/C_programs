#include <stdio.h>

int main() {
    
    char k;

    printf("Enter a char: ");
    scanf(" %c", &k);

    // If k is an letter
    // Se k eh uma letra
    if((k >= 65 && k <= 90) || (k >= 97 && k <= 122)) {
        printf("'%c' is a letter", k);
        // If k is a vowel
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
            printf("\n and an vowel.");
        } else {
            // If k is a consoant
            // Se k eh uma consoante
            printf("\n and is an consoant.", k);
        }

    } else {
        // If k is a number
        // Se k for um numero
        if(k >= 48 && k <= 57) {
            printf("\n'%c' is a number.", k);
        } else {
            // If k is a symbol
            // Se k for um simbolo
            if((k >= 32 && k <= 47) ||
               (k >= 58 && k <= 64) ||
               (k >= 91 && k <= 96) ||
               (k >= 123 && k <= 126)) {
                printf("\n'%c' is a symbol.", k);
            }
        }
    }

    return 0;
}