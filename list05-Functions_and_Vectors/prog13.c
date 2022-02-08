#include <stdio.h>

int sum_values(int n, int vet[n]) {
    int sum = 0;
    for(int i = 0; i < 4; i++) {
        sum += vet[i];
    }
    int media = sum / (n+1);
    printf("Media: %d", media);
}

int main() {
    int v[] = {15, 10, 17, 25};

    sum_values(3, v);

    return 0;
}