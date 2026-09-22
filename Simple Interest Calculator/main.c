#include <stdio.h>

int main(void) {

  float amount, interest_rate, time, interest;

  printf("Enter the Amount            : ");
  scanf("%f", &amount);

  printf("Enter the Interest Rate (%%) : ");
  scanf("%f", &interest_rate);

  printf("Enter the Time (Years)      : ");
  scanf("%f", &time);

  interest = (amount * time * interest_rate) / 100;

  printf("Interest                    : %.2f\n", interest);

  return 0;
}
