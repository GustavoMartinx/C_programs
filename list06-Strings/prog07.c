#include <stdio.h>
#include <string.h>


// *** ! AVISO ! ***
// *    QUEBRADO   *
// *   INCOMPLETO  *
// *               *
// *****************


int strcmpNoCase(char str1[], char str2[]) {
    int res = 1;
    
    // PRINT THE ORIGINAL
    for(int i = 0; str1[i] != '\0'; i++) {
        printf("%c", str1[i]);
    }
    printf("\n");

    for(int i = 0; str2[i] != '\0'; i++) {
        printf("%c", str2[i]);
    }
    printf("\n");
    printf("\n");
    

    // CHANGE TO UPPERCASE
    for(int i = 0; str1[i] != '\0'; i++) {
        if(str1[i] > 96 && str1[i] < 123) {
            str1[i] = str1[i] - 32;
        }
    }


    for(int i = 0; str2[i] != '\0'; i++) {
        if(str2[i] > 96 && str2[i] < 123) {
            str2[i] = str2[i] - 32;
        }
    }


    // COMPARISON WHO COMES FIRST     (do the "same" as strcmp() )
    for(int i = 0; str1[i] != '\0'; i++) {
        if(str1[i] != str2[i]) {
            res = 1;
            break;
        } else {
            if(str1[i] == str2[i]) {
                res = 0;
            }
        }
    }
    if(res == 0) {
        printf("str1 and str2 are the same");
        return res;
    }

    res = 0;

    for(int i = 0; str1[i] != '\0'; i++) {
        if(str1[i] < str2[i]) {
            res--;
            printf("str1 comes before str2");
            return res;
        }
        if(str1[i] > str2[i]) {
            res++;
            printf("str1 comes after str2");
            return res;
        }
    }


    // strcmp(str1, str2);  <-- easiest way
}

int main() {
    char str1[] = "z";
    char str2[] = "Z";
    int res;

    res = strcmpNoCase(str1, str2);

    printf("\n%d", res);


    return 0;
}