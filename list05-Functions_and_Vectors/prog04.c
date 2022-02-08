#include <stdio.h>
#include <stdlib.h>

void print_random(int qteNum, int min, int max) {
    
    printf("\nNumeros sorteados entre %d e %d:\n", min, max);
    
    int i = 0;
    
    while(min < qteNum) {
        int random = (rand() % max) + 1;
        printf("%d) %d\n", i+1, random);
        min++;
        i++;
    }
}

int main() {

    int qteNum;
    int max;
    int min;

    printf("Informe a quantidade de numeros a serem sorteados: ");
    scanf(" %d", &qteNum);

    printf("Informe o limite minimo do sorteio: ");
    scanf(" %d", &min);

    printf("Informe o limite maximo do sorteio: ");
    scanf(" %d", &max);


    print_random(qteNum, min, max);

    return 0;
}