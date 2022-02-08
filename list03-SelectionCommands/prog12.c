#include <stdio.h>

int main() {
    printf("CALCULADORA SIMPLEX\n\n");

    int A;
    int B;
    char op;

    printf("\n[Primeiro numero]: ");
    scanf(" %d", &A);

    printf("[Operador]: ");
    scanf(" %c", &op);

    printf("[Segundo numero]: ");
    scanf(" %d", &B);

    // Operação em si e Expressão/Resultado
    if(op == '/') {
        float resultado = A / B;
        printf(" %d %c %d = %f", A, op, B, resultado);
    } else {
        if(op == '*') {
            float resultado = A * B;
            printf(" %d %c %d = %f", A, op, B, resultado);
        } else {
            if(op == '+') {
                float resultado = A + B;
                printf(" %d %c %d = %f", A, op, B, resultado);
            } else {
                if(op == '-') {
                    float resultado = A - B;
                    printf(" %d %c %d = %f", A, op, B, resultado);
                } else {
                    if(op == '%') {
                        float resultado = A % B;
                        printf(" %d %c %d = %f", A, op, B, resultado);
                    }
                }
            }
        }
    }

    return 0;
}