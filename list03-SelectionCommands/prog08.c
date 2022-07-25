#include <stdio.h>

int main() {
    int num;                      // 21534

    printf("Enter an value of 5 digits: ");
    scanf(" %d", &num);
    
    int integer1 = num / 10000;   // 2
    
    int rest1 = num % 10000;     //  1534
    int integer2 = rest1 / 1000; //  1
    
    int rest2 = rest1 % 1000;   //   534
    int integer3 = rest2 / 100;  //   5

    int rest3 = rest2 % 100;    //    34
    int integer4 = rest3 / 10;   //     3

    int rest4 = rest3 % 10;     //     4

    int sum = (integer1 + integer2 + integer3 + integer4 + rest4);

    printf("\nThe sum of the values you entered is:  %d", sum);

    return 0;
}