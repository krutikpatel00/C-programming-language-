#include <stdio.h>

int main()
{

      int a, count = 0;

      printf("Enter any number: ");
      scanf("%d", &a);

      while (a != 0)
      {
            a /= 10;
            count++;
      }

      printf("Total number of digits: %d\n", count);

      return 0;
}