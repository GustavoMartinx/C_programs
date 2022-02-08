#include <stdio.h>

int countWordsPlus(char str[]) {
    int words = 0;

    for(int i = 0; str[i] != '\0'; i++) {
        if(str[i] == ' ' && ((str[i+1] > 64 && str[i+1] < 91) || (str[i+1] > 96 && str[i+1] < 123))) {
            words++;
        }
    }

    return words;
}

int main() {
    char str[] = "  first    things  first, second things latter ";

    printf("%d", countWordsPlus(str));

    return 0;
}