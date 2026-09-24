#include <stdio.h>

int main(void)
{
    long long int number, temp, factorial = 1;
    printf("Enter the Number (1 to 20) : ");
    scanf("%lld", &number);

    temp = number;

    while (temp != 0)
    {
        factorial *= temp;
        temp--;
    }

    printf("Factorial of %lld : %lld \n", number, factorial);

    return 0;
}