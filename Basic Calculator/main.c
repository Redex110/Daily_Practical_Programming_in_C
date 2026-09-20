#include <stdio.h>

int main(void)
{
    int number1, number2;
    char operation;

    printf("Enter the first number : ");
    scanf("%d", &number1);

    printf("Enter the second number : ");
    scanf("%d", &number2);
    printf("Available Operations :  +, -, *, /\n");
    printf("Select the Operation : ");
    scanf(" %c", &operation);

    switch (operation)
    {
    case '+':
        printf("Result of %2d + %2d : %3d\n", number1, number2, number1 + number2);
        break;

    case '-':
        printf("Result of %2d - %2d : %3d\n", number1, number2, number1 - number2);
        break;
    case '*':
        printf("Result of %2d x %2d : %3d\n", number1, number2, number1 * number2);
        break;

    case '/':
        printf("Result of %2d ÷ %2d : %.2f\n", number1, number2, (float)number1 / number2);
        break;

    default:
        printf("Invalid Operator\n");
    }
    return 0;
}