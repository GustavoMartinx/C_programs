#include <stdio.h>

int main() {
    float s1;
    float s2;
    float s3;

    printf("Reporta the three scores obtained: ");
    scanf(" %f %f %f", &s1, &s2, &s3);

    // Determining score range from 0 to 10
    // Determinação do intervalo da nota de 0 a 10
    if(s1 >= 0 && s2 >= 0 && s3 >= 0 && s1 <= 10 && s2 <=10 && s3 <=10) {
        // Average calculation
        // Cálculo da média simples
        float average = (s1 + s2 + s3) / 3;
        printf(" %.1f", average);

        // Concept A
        if(average >= 8.5) {
            printf(" Awesome! You obtained the A Concept!");
        } else {
            // Concept B
            if(average >= 7.0 && average < 8.5) {
                printf(" Very Good! You obtained the B Concept.");
            } else {
                // Concept C
                if(average >= 5.5 && average < 7.0) {
                    printf(" You obtained the C Concept.");
                } else {
                    // Concept F
                    if(average < 5.5) {
                        printf(" You obtained the F Concept. Try to improve in the next note.");
                    }
                }
            }
        }

    }

    return 0;
}