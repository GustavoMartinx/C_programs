#include <stdio.h>

void read_vector(int n, int vet[n]) {
    for(int i = 0; i < n; i++) {
        printf("Informe um valor para ser inserido no vetor: ");
        scanf(" %d", &vet[i]);
    }

    while((n-1) >= 0) {
        printf("%d ", vet[n-1]);
        n--;
    }
}

int main() {
    int vet[3] = {0};

    read_vector(3, vet);

    return 0;
}