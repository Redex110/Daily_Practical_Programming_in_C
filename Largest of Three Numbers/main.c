#include <stdio.h>

int main(void)
{
    int num1, num2, num3;

    printf("Enter first number : ");
        scanf("%d", &num1);

    printf("Enter first second : ");
        scanf("%d", &num2);

    printf("Enter first third  : ");
        scanf("%d", &num3);

    if (num1 > num2 && num1 > num3)
    {
        printf("Largest Number : %d\n", num1);
    }
    else if (num2 > num1 && num2 > num3)
    {
        printf("Largest Number : %d\n", num2);
    }
    else
    {
        printf("Largest Number : %d\n", num3);
    }

    return 0;
}