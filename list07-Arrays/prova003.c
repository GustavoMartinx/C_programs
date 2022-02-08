#include <stdio.h>
#include <stdlib.h>

void randomize(int n, char str[n]) {

    for(int i = 0; i < n; i++) {
        int randPosition = (rand() % n) + 1;
        str[i] = str[randPosition];
        printf("%c ", str[i]);
    }
}

int main() {
    char str[] = "Hello-World!";

    randomize(11, str);

    return 0;
}