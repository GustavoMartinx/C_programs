#include <stdio.h>

void printString(char str[]) {
    for(int i = 0; str[i] != '\0'; i++) {
        printf("%c", str[i]);
    }
}

int main() {
    char str[] = "Hello World!";

    printString(str);

    return 0;
}