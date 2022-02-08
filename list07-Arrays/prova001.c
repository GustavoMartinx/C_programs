#include <stdio.h>

void fill_matrix(int l, int j, int m[l][j]) {
    int sequence = 2 * l;

    for(int i = sequence; i < l; i--) {
            for(int l = 0; l < l; l++) {
                for(int j = 0; j != 0; j++) {
                    m[l][j] = i;
                    printf("%d\n", m[l][j]);
                }
            }
    }
}

int main() {
    int mat[4][4];

    fill_matrix(4, 4, mat);

    return 0;
}