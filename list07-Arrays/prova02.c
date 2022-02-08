#include <stdio.h>

int shuffled_or_sorted(int n, int vet[n]) {
    int res;
    for(int i = 1; i < n; i++) {
        if(vet[i] > vet[i-1]) {
            res = 1;
        } else {
            res = 2;
            return res;
        }
    }
    return res;
}

int main() {
    int vet[] = {1, 2, 3, 4, 5, 6, 7};

    int res = shuffled_or_sorted(7, vet);
    printf("%d", res);

    return 0;
}