#include <stdio.h>

int main() {
    printf("Enter the numbers:\n");

    int num = 1;
    int sum = 0;
    int i = -1;
    
    while(num != 0) {
        printf("> ");
        scanf(" %d", &num);
        sum = sum + num;
        i++;
    }

    float average = sum / (float)i;

    printf("Sum: %d\n", sum);
    printf("Average: %.2f", average);

    return 0;
}