#include <stdio.h>

void printStringSparce(char str[], char separator) {
    for(int i = 0; str[i] != '\0'; i++) {
        printf(" %c %c", str[i], separator);
    }
    printf("\b ");
}

int main() {
    char str[] = "MEXEU CO JAPA VIRO HIGHLIGHT";
    char ch;

    printf("What char will divide the string?: ");
    scanf("%c", &ch);

    printStringSparce(str, ch);

    return 0;
}