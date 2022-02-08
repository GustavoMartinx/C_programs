#include <stdio.h>

int is_letter(int n) {
    if(n >= 65 && n <= 90 || n >= 97 && n <= 122) {
        printf("\nTrue\n");
        return 1;
    } else {
        printf("\nFalse\n");
        return 0;
    }

}

int main() {
    char n;
    printf("\nVamos verificar se eh uma letra: ");
    scanf("%c", &n);
    printf("\n%c eh uma letra?\n", n);
    is_letter(n);

    return 0;
}