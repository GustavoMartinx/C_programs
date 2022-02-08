#include <stdio.h>

void reverse(int n, int vet[n]) {
    int temp;
    int j = 1;
    for(int i = 0; i < (n/2); i++) {
        temp = vet[i];
        vet[i] = vet[n-j];
        vet[n-j] = temp;
        j++;
    }
    for(int i = 0; i < n; i++) {
        printf("%d ", vet[i]);
    }
}

int main() {
    int vet[] = {1, 5, 3, 0, 6, 8, 10};

    reverse(7, vet);

    return 0;
}