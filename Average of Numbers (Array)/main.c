#include <stdio.h>

#define WIDTH 30

void printLine(int width); 

int main(void){
  int number[10], average = 0, array_length;

  array_length = sizeof(number)/sizeof(number[0]);

  //User input

  printLine(WIDTH);
  printf("Average of 10 Numbers\n");
  printLine(WIDTH);
  printf("Enter the numbers \n");

  for(int i = 0; i < array_length; i++){
   printf("Number[%d] : ", i);
   scanf("%d", &number[i]);
  }

  //Calculation of average
  for(int i = 0; i < array_length; i++)
      average += number[i];

  average /= array_length;

  //Output
  printLine(WIDTH);
  printf("Avarage of Number : %d \n", average);
  printLine(WIDTH);

  return 0;
}

void printLine(int width){
  while(width != 0){
    printf("-");
    width--;
  }
  printf("\n");
}
