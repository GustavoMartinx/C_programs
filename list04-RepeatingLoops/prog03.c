#include <stdio.h>

int main() {
    int t;

    printf("Voce deseja a tabuada de qual numero?: ");
    scanf(" %d", &t);

    for(int i = 1; i < 11; i++) {
        int produto = t * i;
        printf(" %d x %d = %d\n", t, i, produto);
    }

    return 0;
}