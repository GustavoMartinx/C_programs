#include <stdio.h>

int main() {
    int n;
    printf("Enter a number of lines: ");
    scanf(" %d", &n);

    for(int i = 0; i < n; i++) {
        printf("Line %d\n", i+1);
    }

    return 0;
}