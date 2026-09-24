#include <stdio.h>
#include <math.h>

int main(void){
  
  int number, count = 0, sum_of_digits = 0, last_digit, temp;

  printf("Enter the number :  ");
  scanf("%d", &number);

  temp = number;
  while(temp != 0){
    count++;
    temp /= 10;
  }

  temp = number;
  while(temp != 0){
    last_digit = temp % 10;
    sum_of_digits += pow(last_digit, count);
    temp /= 10;
  }

  if(number == sum_of_digits){
    printf("Number %d is an Armstrong Number\n", number);
  }
  else{
    printf("Number %d is not an Armstrong Number\n", number);
  }

  return 0;
}
