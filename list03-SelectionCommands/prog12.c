#include <stdio.h>

int main() {
    printf("SIMPLE CALCULATOR\n\n");

    int A;
    int B;
    char op;

    printf("\n[First number]: ");
    scanf(" %d", &A);

    printf("[Operator]: ");
    scanf(" %c", &op);

    printf("[Second number]: ");
    scanf(" %d", &B);

    // Operation and Expression/Result
    // Operação em si e Expressão/Resultado
    if(op == '/') {
        float result = A / B;
        printf(" %d %c %d = %f", A, op, B, result);
    } else {
        if(op == '*') {
            float result = A * B;
            printf(" %d %c %d = %f", A, op, B, result);
        } else {
            if(op == '+') {
                float result = A + B;
                printf(" %d %c %d = %f", A, op, B, result);
            } else {
                if(op == '-') {
                    float result = A - B;
                    printf(" %d %c %d = %f", A, op, B, result);
                } else {
                    if(op == '%') {
                        float result = A % B;
                        printf(" %d %c %d = %f", A, op, B, result);
                    }
                }
            }
        }
    }

    return 0;
}