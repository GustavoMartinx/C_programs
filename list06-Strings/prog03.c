#include <stdio.h>

void printStringSparce(char str[]) {
    for(int i = 0; str[i] != '\0'; i++) {
        printf("%c*", str[i]);
    }
    printf("\b ");
}

int main() {
    char str[] = "hyphenization";

    printStringSparce(str);

    return 0;
}