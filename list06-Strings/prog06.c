#include <stdio.h>

void stringToUpper(char str[]) {
    for(int i = 0; str[i] != '\0'; i++) {
        if(str[i] > 96 && str[i] < 123) {
            str[i] = str[i] - 32;
        }
        printf("%c", str[i]);
    }

}

int main() {
    char str[] = "We ArE mAdE oF mEmOrYeS. WhAt ArE yOuRs?";

    stringToUpper(str);

    return 0;
}