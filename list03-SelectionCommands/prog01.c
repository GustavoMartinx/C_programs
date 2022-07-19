#include <stdio.h>

int main() {
    printf("Enter a number from 0 to 9 to display it in full: ");
    int number;
    scanf(" %d", &number);

    switch (number)
    {
    case 0:
        printf("The number typed was: Zero");
        break;
    case 1:
        printf("The number typed was: One");
        break;
    case 2:
        printf("The number typed was: Two");
        break;
    case 3:
        printf("The number typed was: Three");
        break;
    case 4:
        printf("The number typed was: Four");
        break;
    case 5:
        printf("The number typed was: Five");
        break;
    case 6:
        printf("The number typed was: Six");
        break;
    case 7:
        printf("The number typed was: Seven");
        break;
    case 8:
        printf("The number typed was: Eigth");
        break;
    case 9:
        printf("The number typed was: Nine");
        break;
    
    default:
        printf("Type other value."); 
        break;
    }

    return 0;
}