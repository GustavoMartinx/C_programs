#include <stdio.h>

int main() {
    int n;
    int odd = 1;

    printf("How many odd do you want?: ");
    scanf(" %d", &n);

    for(int i = 0; i < n; i++) {
        printf("%d ", odd);
        odd += 2;
    }

    return 0;
}