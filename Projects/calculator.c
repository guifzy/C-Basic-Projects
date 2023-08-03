#include <stdio.h>
#include <math.h>

int main()
{

    printf("Welcome to the C calculator program. \n");
    float num1, num2, result;
    char opperator;

    printf("\nEnter the opperator(+ - * /): ");
    scanf("%c", &opperator);

    printf("\nEnter the number 1: ");
    scanf("%f", &num1);
    printf("\nEnter the number 2: ");
    scanf("%f", &num2);

    switch (opperator)
    {
    case '+':
        result = num1 + num2;
        printf("\nYour result is: %.2f", result);
        break;
    case '-':
        result = num1 - num2;
        printf("\nYour result is: %.2f", result);
        break;
    case '*':
        result = num1 * num2;
        printf("\nYour result is: %.2f", result);
        break;
    case '/':
        result = num1 / num2;
        printf("\nYour result is: %.2f", result);
        break;

    default:
        printf("\n%c is not a valid opperator.", opperator);
        break;
    }

    return 0;
}