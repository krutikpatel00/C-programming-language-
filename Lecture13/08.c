#include <stdio.h>

int main()
{
      int count= 1;
      for (int i = 1; i <= 5; i++)
      {
            for (int b = 1; b <= i; b++)
            {
                  printf("%d ", count);
                  count++;
            }

            printf("\n");
      }

      return 0;
}