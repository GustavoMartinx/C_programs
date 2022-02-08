#include <stdio.h>

void printStringReverse(char str[]) {
    int len = 0;

    for(int i = 0; str[i] != '\0'; i++) {
        len++;
    }

    for(int i = len; i != 0; i--) {
        printf("%c", str[i-1]);
    }
}

int main() {
    char str[] = "R E V E R S E";

    printStringReverse(str);

    return 0;
}