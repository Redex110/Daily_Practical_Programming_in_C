#include <stdio.h>

long long int factorial(int number);

int main(void)
{
    int number;

    printf("Enter the number (1 to 20) : ");
    scanf("%d", &number);

    printf("Factorial of %d : %lld\n", number, factorial(number));
    return 0;
}

long long int factorial(int number)
{
    if (number > 1)
        return number * factorial(number - 1);
    else
        return number;
}
