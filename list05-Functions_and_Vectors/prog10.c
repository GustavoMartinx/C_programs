#include <stdio.h>

void print_reverse(int n, int vet[n]) {
    for(int i = 4; i >= 0; i--) {
        printf(" %d", vet[i]);
    }
}

int main() {
    int vet[] = {1, 2, 3, 4, 5};

    print_reverse(4, vet);

    return 0;
}