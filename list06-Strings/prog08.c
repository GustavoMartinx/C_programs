#include <stdio.h>

int countWords(char str[]) {
    int words = 1;

    for(int i = 0; str[i] != '\0'; i++) {
        if(str[i] == ' ') {
            words++;
        }
    }

    return words;
}

int main() {
    char str[] = "How many words?";

    printf("%d", countWords(str));

    return 0;
}