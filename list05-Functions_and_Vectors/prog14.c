#include <stdio.h>

int find(int n, int vet[n], int elem) {
    int inOrOut = -1; // chave para saber se o elem esta ou nao no vetor
    for(int i = 0; i < n; i++) {
        if(vet[i] == elem) {
            printf("o elemento %d esta na posicao: %d", elem, i);
            inOrOut = 1; // se estiver, recebe 1 e nao entra no prox if
        }
    }
    
    if(inOrOut == -1) { // se inOrOut for -1, eh pq o elem nao esta no vetor
        printf("-1");
        return -1;
    }
}

int main() {
    int vet[10] = {0, 1, 2, 10, 15, 42, 63, 82, 90, 115};
    
    find(10, vet, 15);

    return 0;
}