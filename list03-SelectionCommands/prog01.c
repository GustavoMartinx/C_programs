#include <stdio.h>

int main() {
    printf("Informe um numero de 0 a 9 para exibi-lo por extenso: ");
    int numero;
    scanf(" %d", &numero);

    if(numero == 0) {
        printf("O numero digitado foi: Zero");
    }

    if(numero == 1) {
        printf("O numero digitado foi: Um");
    }
    
    if(numero == 2) {
        printf("O numero digitado foi: Dois");
    }

    if(numero == 3) {
        printf("O numero digitado foi: Tres");
    }

    if(numero == 4) {
        printf("O numero digitado foi: Quatro");
    }

    if(numero == 5) {
        printf("O numero digitado foi: Cinco");
    }

    if(numero == 6) {
        printf("O numero digitado foi: Seis");
    }

    if(numero == 7) {
        printf("O numero digitado foi: Sete");
    }

    if(numero == 8) {
        printf("O numero digitado foi: Oito");
    }

    if(numero == 9) {
        printf("O numero digitado foi: Nove");
    }
    
    // Mensagem de Erro
    if(numero < 0 || numero > 9) {
        printf("DIGITE OUTRO VALOR");
        }

    return 0;
}