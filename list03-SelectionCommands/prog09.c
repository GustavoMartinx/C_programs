#include <stdio.h>

int main() {
    char x;
    printf("Enter an char: ");
    scanf(" %c", &x);

    if((x >= 65 && x <= 90) || (x >= 97 && x <= 122)) {
        printf(" %c is a letter.", x);
    } else {
        printf(" %c is not a letter.", x);
    }

    return 0;
}