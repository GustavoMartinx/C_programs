#include <stdio.h>

void replace_all(int n, int vet[n], int elem) {
    for(int i = 0; i < n; i++) {
        if(vet[i] == elem) {
            vet[i] = -1;
        }
        printf("%d, ", vet[i]);
    }
    printf("\b\b ");
}

int main() {
    int vet[] = {1, 5, 10, 15, 20, 25, 30, 50, 100};

    replace_all(9, vet, 25);

    return 0;
}