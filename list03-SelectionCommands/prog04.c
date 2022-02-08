#include <stdio.h>

int main() {
    int ano;
    printf("Informe um ano: ");
    scanf(" %d", &ano);

    int resto = ano % 4;
    int por400 = ano % 400;
    if(resto == 0 && resto != 100 || por400 == 0) {
        printf("\nO ano %d eh bissexto.", ano);
    } else {
        printf("\nO ano %d nao eh bissexto.", ano);
    }

    return 0;
}