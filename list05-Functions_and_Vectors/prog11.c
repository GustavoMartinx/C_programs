#include <stdio.h>

void print_even(int n, int vet[n]) {
    int res = 0;
    
    for(int i = 0; i <= n; i++) {
        res = vet[i] % 2;
        if(res == 0) {
            printf(" %d", vet[i]);        
        }
    }
    
}

int main() {
    int v[] = {1, 2, 3, 4, 5, 6, 7, 8};

    print_even(7, v);

    return 0;
}