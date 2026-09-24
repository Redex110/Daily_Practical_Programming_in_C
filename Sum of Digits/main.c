#include <stdio.h>

int main(void) {
  int number, sum_of_digits = 0, last_digit, temp;

  printf("Enter the number : ");
  scanf("%d", &number);

  temp = number;
  while(temp != 0){
    last_digit = temp % 10;
    sum_of_digits += last_digit;
    temp /= 10;
  }

  printf("The Sum of Digits for %d : %d\n", number, sum_of_digits);
  return 0;
}
