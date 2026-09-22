#include <stdio.h>
#include <math.h>

int main(void) {

  double principle, final_amount, interest_rate, time, frequency, interest;

  printf("Enter the Amount            : ");
  scanf("%lf", &principle);

  printf("Enter the Interest Rate (%%) : ");
  scanf("%lf", &interest_rate);

  printf("Enter the Time (Years)      : ");
  scanf("%lf", &time);

  printf("Enter the Frequency         : ");
  scanf("%lf", &frequency);

  final_amount = principle * pow((((interest_rate / frequency) / 100 ) + 1), (frequency * time));
  interest = final_amount - principle;

  printf("Interest                    : %.2lf\n", interest);

  return 0;
}
