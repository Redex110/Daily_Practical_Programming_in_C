#include <stdio.h>

// Correct leap year logic
int isLeapYear(int year)
{
  if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
  {
    return 1;
  }
  return 0;
}

int main()
{
  int year, month;

  char months[][20] = {"January", "February", "March", "April", "May", "June",
                       "July", "August", "September", "October", "November", "December"};

  printf("Enter the year            : ");
  scanf("%d", &year);

  printf("Enter the number of month : ");
  scanf("%d", &month);

  // Validate month range
  if (month < 1 || month > 12)
  {
    printf("Invalid Month\n");
    return 0;
  }

  // Determine the days in the month
  if (month == 2)
  {
    if (isLeapYear(year))
    {
      printf("%s, %d : 29 Days\n", months[month - 1], year);
    }
    else
    {
      printf("%s, %d : 28 Days\n", months[month - 1], year);
    }
  }
  else if (month == 4 || month == 6 || month == 9 || month == 11)
  {
    printf("%s, %d : 30 Days\n", months[month - 1], year);
  }
  else
  {
    printf("%s, %d : 31 Days\n", months[month - 1], year);
  }

  return 0;
}
