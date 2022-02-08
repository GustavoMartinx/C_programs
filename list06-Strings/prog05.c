#include <stdio.h>

void stringReport(char str[]) {
    int letters = 0;
    int digits = 0;
    int symbols = 0;

    for(int i = 0; str[i] != '\0'; i++) {
        if(str[i] > 64 && str[i] < 91) {
            letters++;
        } else {
            if(str[i] > 96 && str[i] < 123) {
                letters++;
            }
        }

        if(str[i] > 47 && str[i] < 58) {
            digits++;
        }

        if(str[i] > 32 && str[i] < 48) {
            symbols++;
        } else {
            if(str[i] > 57 && str[i] < 65) {
                symbols++;
            } else {
                if(str[i] > 90 && str[i] < 97) {
                    symbols++;
                } else {
                    if(str[i] > 122 && str[i] <= 126) {
                        symbols++;
                    }
                }
            }
        }
    }

    printf("Number of letters: %d\n", letters);
    printf("Number of digits: %d\n", digits);
    printf("Number of symbols: %d", symbols);
}

int main() {
    char str[] = "Isto vale: R$100,00";

    stringReport(str);

    return 0;
}