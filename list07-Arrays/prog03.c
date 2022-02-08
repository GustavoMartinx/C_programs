#include <stdio.h>

void printMinMax(int rows, int cols, int m[rows][cols]) {
    int max = -99999;
    int min = 99999;

    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            if(m[i][j] > max) {
                max = m[i][j];
            }
            if(m[i][j] < min) {
                min = m[i][j];
            }
        }
    }

    printf("Max: %d\n", max);
    printf("Min: %d", min);
}

int main() {
    int mat[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    printMinMax(3, 3, mat);

    return 0;
}