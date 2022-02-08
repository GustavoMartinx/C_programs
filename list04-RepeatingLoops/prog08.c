#include <stdio.h>

int main() {
    printf("Informe os numeros:\n");

    int num = 1;
    int sum = 0;
    int i = -1;
    
    while(num != 0) {
        printf("> ");
        scanf(" %d", &num);
        sum = sum + num;
        i++;
    }

    float media = sum / (float)i;

    printf("Soma: %d\n", sum);
    printf("Media: %.2f", media);

    return 0;
}