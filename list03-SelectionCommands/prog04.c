#include <stdio.h>

int main() {
    int year;
    printf("Enter an year: ");
    scanf(" %d", &year);

    int rest = year % 4;
    int by400 = year % 400;
    if(rest == 0 && rest != 100 || by400 == 0) {
        printf("\nThe year %d is leap.", year);
    } else {
        printf("\nThe year %d is not leap.", year);
    }

    return 0;
}