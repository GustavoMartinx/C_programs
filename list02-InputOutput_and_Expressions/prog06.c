#include <stdio.h>

int main() {
    float a;

    printf("INFORME UM NUMERO DECIMAL: ");
    scanf(" %f", &a);

    float b = a - (int)a;
    printf("\nCom duas casas de precisao: %.2f", a);
    printf("\nA parte inteira: %.f", a);
    printf("\nA parte decimal: %f", b);
    printf("\nSua notacao cientifica: %e", &a);

    return 0;
}