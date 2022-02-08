#include <stdio.h>

int main() {
    int num;                      // 21534

    printf("informe um valor de 5 digitos: ");
    scanf(" %d", &num);
    
    int inteiro1 = num / 10000;   // 2
    
    int resto1 = num % 10000;     //  1534
    int inteiro2 = resto1 / 1000; //  1
    
    int resto2 = resto1 % 1000;   //   534
    int inteiro3 = resto2 / 100;  //   5

    int resto3 = resto2 % 100;    //    34
    int inteiro4 = resto3 / 10;    //    3

    int resto4 = resto3 % 10;      //    4

    int soma = (inteiro1 + inteiro2 + inteiro3 + inteiro4 + resto4);

    printf("\nA soma dos valores que voce digitou eh:  %d", soma);

    return 0;
}