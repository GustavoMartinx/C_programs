#include <stdio.h>

int main() {
    printf("Chars of ASCII table: \n\n");

    printf("DEC  OCT  HEX  CHR\n");
    for(int i = 32; i < 127; i++) {
        printf("%03d  %03o  %03X  %2c\n", i, i, i, i);
    }

    return 0;
}