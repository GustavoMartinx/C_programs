#include <stdio.h>

void stringTrim(char str[]) {
    for(int i = 0; str[i] != '\0'; i++) {
        if(str[i] == ' ') {
            for(int j = 0; ; j++) {}
        }
    }
}

int main() {
    char str[] = "    Hello world     ";    

    stringTrim(str);

    return 0;
}