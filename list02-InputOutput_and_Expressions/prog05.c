#include <stdio.h>

int main() {
    int a;
    int b;
    int c;

    printf("ENTER THREE VALUES: ");
    scanf(" %d %d %d", &a, &b, &c);

    // Simple Arithmetic Mean
    float simpleAverage = (a + b + c) / 3.0;
    printf("\nThe simple average of these three values is: %.3f", simpleAverage);

    // Weighted Arithmetic Average
    float weightA = 10/100.0;
    float weightB = 50/100.0;
    float weightC = 40/100.0;
    float weightedAverage = ((a * (weightA)) + (b * (weightB)) + (c * (weightC))) / (weightA + weightB + weightC);
    printf("\nAnd the weighted average of these values, considering, respectively, the 10%%, 50%% and 40%% weights:\n%.3f", weightedAverage);

    return 0;
}