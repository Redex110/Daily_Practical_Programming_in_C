#include <stdio.h>

#define WIDTH 50
//Function for printing the values stored in the array
void printArray(int array[], int size);

//Function for priting the horizonal line 
void printLine(int width);
  
int main()
{
  int array[10] = {13, 45, 56, 64, 65, 23, 98, 78, 26, 39};
  int length_of_array = sizeof(array) / sizeof(array[0]);

  printLine(WIDTH);
  printf("Array Odd-Even Position Swapper\n");
  printLine(WIDTH);

  printf("Array (Before) : ");
  printArray(array, length_of_array);

  for(int i = 0; i < length_of_array; i+=2)
  {
    int temp = array[i];
    array[i] = array[i+1];
    array[i+1] = temp;
  }

  printf("Array (After)  : ");
  printArray(array, length_of_array);
  printLine(WIDTH);

  return 0;
}

void printArray(int array[], int size)
{
  for(int i = 0; i < size; i++)
  {
    printf("%d ", array[i]);
  }
  printf("\n");
}

void printLine(int width){
  for(int i = width; i != 0; i--)
    printf("-");
  printf("\n");
}
