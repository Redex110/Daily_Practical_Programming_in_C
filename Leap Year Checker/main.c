#include <stdio.h>

int main(void) {
  int year;

  printf("Enter the year : ");
  scanf("%d", &year);

  if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) {
    printf("Result         : Leap Year\n");
  }
  else {
    printf("Result         : Not a Leap Year\n");
  }

  return 0;
}
