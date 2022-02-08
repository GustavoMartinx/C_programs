#include <stdio.h>

void defrag(int n, int vet[n]) {
    int temp;
    int i = 0;
    int j = 0;

    while(i < n) {
        if(vet[i] != -1) {
            temp = vet[i];
            vet[i] = vet[j];
            vet[j] = temp;
            j++;
        }
        i++;
    }
    
    for(int i = 0; i < n; i++) {
        printf("%d ", vet[i]);
    }
}

int main() {
    int vet[] = {10, 20, -1, 30, -1, -1, 40, 82, -1};

    defrag(9, vet);

    return 0;
}