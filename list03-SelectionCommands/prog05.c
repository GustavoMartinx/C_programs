#include <stdio.h>

int main() {
    float n1;
    float n2;
    float n3;

    printf("Informe as tres notas obtidas: ");
    scanf(" %f %f %f", &n1, &n2, &n3);

    // Determinação dointervalo da nota de 0 a 10
    if(n1 >= 0 && n2 >= 0 && n3 >= 0 && n1 <= 10 && n2 <=10 && n3 <=10) {
        // Cálculo da média simples
        float mediaSimples = (n1 + n2 + n3) / 3;
        printf(" %.1f", mediaSimples);

        // Conceito A
        if(mediaSimples >= 8.5) {
            printf(" Parabens! Voce obteve o Conceito A!");
        } else {
            // Conceito B
            if(mediaSimples >= 7.0 && mediaSimples < 8.5) {
                printf(" Muito Bem! Voce obteve o Conceito B");
            } else {
                // Conceito C
                if(mediaSimples >= 5.5 && mediaSimples < 7.0) {
                    printf(" Voce obteve o Conceito C");
                } else {
                    // Conceito F
                    if(mediaSimples < 5.5) {
                        printf(" Voce obteve o Conceito F. Busque melhorar na proxima nota.");
                    }
                }
            }
        }

    }

    return 0;
}