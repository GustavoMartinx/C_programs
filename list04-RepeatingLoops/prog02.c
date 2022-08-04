#include <stdio.h>

int main() {
    int n;

    printf("Enter a number of lines: ");
    scanf(" %d", &n);

    for(int i = 0; i < n; n--) {
        printf("Line %d\n", i+n);
    }

    return 0;
}