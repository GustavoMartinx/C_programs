#include <stdio.h>

void print_even(int n, int vet[n]) {
    for(int i = 0; i < n; i++) {
        if(vet[i] < 0) {
            vet[i] = -vet[i];
        }
        printf(" %d", vet[i]);
    }
}

int main() {
    int vet[6] = {-1,-2,3,-4,-5,8};

    print_even(6, vet);

    return 0;
}