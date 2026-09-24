#include <stdio.h>
#include <math.h>

int main(void) {

  int number, reverse_digit_number = 0, temp, last_digit, count = 0;

  printf("Enter the number : ");
  scanf("%d", &number);


  temp = number;
  while(temp != 0){
    temp /= 10;
    count++;
  }

  temp = number;
  while(temp != 0){
    last_digit = temp % 10;
    reverse_digit_number += last_digit * pow(10, count - 1);
    count--;
    temp /= 10;
  }

  if(number == reverse_digit_number){
    printf("Number %d is a Palindrome Number.\n", number);
  }
  else{
    printf("Number %d is not a Palindrome Number.\n", number);
  }

  return 0;
}
