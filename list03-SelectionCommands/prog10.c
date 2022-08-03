#include <stdio.h>

int main() {
    char x;
    printf("Enter a char: ");
    scanf(" %c", &x);

    if(x < 65 || (x >= 91 && x <= 96) || x >= 123) {
        printf(" %c is not a letter.", x);
    } else {
        if((x >= 65 && x <= 90) || (x >= 97 && x <= 122)) {
            printf(" %c is a letter.", x);
        }

        if(x >= 65 && x <= 90) {
            printf("\n %c is upper case");
        } else {
            if(x >= 97 && x <= 122) {
                x = x - 32;
                printf("\nIn upper case: %c", x);
            }
        }
    }

    return 0;
}