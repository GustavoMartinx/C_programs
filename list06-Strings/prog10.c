#include <stdio.h>

void stringCaptalize(char str[]) {

    // Putting Everything in Lowercase
    for(int i = 0; str[i] != '\0'; i++) {
        if(str[i] > 64 && str[i] < 91) {
            str[i] = str[i] + 32;
        }
    }

    // Capitalizing the First Ones
    for(int i = 0; str[i] != '\0'; i++) {
        if(str[i-1] == ' ' && (str[i] > 96 && str[i] < 123)) {
            str[i] = str[i] - 32;
        }
    }
    
    // Capitalizing the First Letter
    if(str[0] > 96 && str[0] < 123) {
        str[0] = str[0] - 32;
    }
}

int main() {
    char s[] = "welCOME   tO      COMPUTER   pRoGrAmMiNg!";

    stringCaptalize(s);
    printf("%s", s);

    return 0;
}