#include <stdio.h>

int main() {
    int num;

    printf("ENTER A NUMBER: ");
    scanf(" %d", &num);

    int one = num * 1;
    int two = num * 2;
    int three = num * 3;
    int four = num * 4;
    int five = num * 5;
    int six = num * 6;
    int seven = num * 7;
    int eight = num * 8;
    int nine = num * 9;
    int ten = num * 10;

    printf("  %d x 1 = %d        %d x 6 = %d\n", num, one, num, six);
    printf(" %d x 2 = %d        %d x 7 = %d\n", num, two, num, seven);
    printf(" %d x 3 = %d        %d x 8 = %d\n", num, three, num, eight);
    printf(" %d x 4 = %d        %d x 9 = %d\n", num, four, num, nine);
    printf(" %d x 5 = %d        %d x 10= %d", num, five, num, ten);

    return 0;
}