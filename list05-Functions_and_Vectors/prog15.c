#include <stdio.h>

void find_min_max(int n, int vet[n]) {
    int min = 99999;
    int max = -99999;

    for(int i = 0; i < n; i++) {
        if(vet[i] <= min) {
            min = vet[i];
        }
        if(vet[i] >= max) {
            max = vet[i];
        }
    }
    printf("\nO menor valor contido no vetor eh: %d\n", min);
    printf("E o maior valor contido no vetor eh: %d", max);
}

int main() {
    int vet[] = {10, 30, 4, 790, 81, 150, 82};

    find_min_max(7, vet);

    return 0;
}