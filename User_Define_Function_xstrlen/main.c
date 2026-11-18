#include <stdio.h>
#include <string.h>

#define WIDTH 70
// xstrlen() function prototype
int xstrlen(char str[]);

//printLine() function prototype
void printLine(int width);

//main function
int main()
{
    char string[50];
    
    //heading
    printLine(WIDTH);
    printf("User Define xstrlen()\n");
    printLine(WIDTH);
    
    //User Input
    printf("Enter the String (Less then 50 words) : ");
    fgets(string, 50, stdin);
    string[strcspn(string, "\n")] = '\0';

    //Output
    printLine(WIDTH);
    printf("String : %s | String Length : %d \n", string, xstrlen(string));
    printLine(WIDTH);
    
    return 0;
}


int xstrlen(char str[])
{
    int i = 0;

    while(str[i] != '\0')
        i++;

    return i;
}

void printLine(int width)
{
    while(width != 0)
    {
        printf("-");
        width--;
    }
    printf("\n");
}
