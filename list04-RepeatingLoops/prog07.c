#include <stdio.h>

int main() {

    int num;
    
    printf("Enter a natural number: ");
    scanf(" %d", &num);

    int prod = 1;
    for(int i = num; i >= 1; i--) {
        printf(" %d", i);
        prod = prod * i;
    }
    printf(" = %d!", num);
    printf("\n %d! = %d\n", num, prod);

    return 0;
}