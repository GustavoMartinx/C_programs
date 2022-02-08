#include <stdio.h>

int is_perfect_number(int n) {
    int div = 1;
    int rest = 0;
    int divisivel = 0;
    int sum = 0;

    if(n >= 0) { // filtrar apenas os positivos
        while(div <= (n/2)) { 
            rest = n % div;

            if(rest == 0) {
                divisivel = div;
                printf(" %d +", divisivel);
                sum += divisivel;
            }
            div++;
        }
        printf("\b= %d", sum);
    } else {
        printf("ERRO: Informe um numero inteiro e positivo.");
        return 0;
    }

    if(sum == n) { // Se a soma dos n divisiveis for = n entao eh perfeito
        printf("\n%d eh um Numero Perfeito!", n);
        return 1;
    } else {
        printf("\n%d nao eh um Numero Perfeito.", n);
        return 0;
    }
}

int main() {
    int n;
    printf("Informe um valor: ");
    scanf(" %d", &n);
    is_perfect_number(n);

    return 0;
}