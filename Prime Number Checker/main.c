#include <stdio.h>
#include <math.h>

int main(void) {
  int number;

  printf("Enter the number : ");
  scanf("%d", &number);

  for(int i = 2; i <= sqrt(number); i++) {
    if(number % i == 0) {
      printf("This number is not Prime Number\n");
      return 0;
    }
  }
  printf("This number is Prime Number\n");
  return 0;
}
