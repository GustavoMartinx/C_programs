#include <stdio.h>
#include <stdlib.h>

void print_random(qteNum, max) {
    printf("\nNumeros sorteados entre 0 e %d:\n", max);
    for(int i = 0; i < qteNum; i++) {
        int random = (rand() % max) + 1;
        printf("%d) %d\n", i+1, random);
    }
}

int main() {

    int qteNum;
    int max;

    printf("Informe a quantidade de numeros a serem sorteados: ");
    scanf(" %d", &qteNum);

    printf("Informe o numero limite do sorteio: ");
    scanf(" %d", &max);

    print_random(qteNum, max);

    return 0;
}