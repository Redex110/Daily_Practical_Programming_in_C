#include <stdio.h>

#define WIDTH 30

void printLine(int width);

double averageOfNumbers(int array[], int array_length){
  double average = 0;

  for(int i = 0; i < array_length; i++)
    average += array[i];
  average /= array_length;

  return average;

}
int main(void){
  int numbers[10], array_length;

  array_length = sizeof(numbers)/sizeof(numbers[0]);

  //User input

  printLine(WIDTH);
  printf("Average of 10 Numbers\n");
  printLine(WIDTH);
  printf("Enter the numbers \n");

  for(int i = 0; i < array_length; i++){
   printf("Number[%d] : ", i);
   scanf("%d", &numbers[i]);
  }


  //Output
  printLine(WIDTH);
  printf("Avarage of Number : %.2lf \n", averageOfNumbers(numbers, array_length));
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
