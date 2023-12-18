#include <stdio.h>

int main()
{
      int startYear, endYear;

      
      printf("Enter the first number (year): ");
      scanf("%d", &startYear);

      printf("Enter the second number (year): ");
      scanf("%d", &endYear);

      int a = 0;
      int leapYears[a];
      for (int year = startYear; year <= endYear; year++)
      {
            if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
            {
                  leapYears[a] = year;
                  a++;
            }
      }
      
      printf("array :");
      for (int i = 0; i < a; i++)
      {
            printf("%d ", leapYears[i]);
      }

      return 0;
}
