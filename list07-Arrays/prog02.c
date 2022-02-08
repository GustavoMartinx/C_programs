#include <stdio.h>

void printMatRev(int rows, int cols, int mat[rows][cols]) {
    for(int i = (rows-1); i > -1; i--) {
        for(int j = (cols-1); j > -1; j--) {
            printf("%d", mat[i][j]);
        }
    }
}

int main() {
    int mat[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    printMatRev(3, 3, mat);

    return 0;
}