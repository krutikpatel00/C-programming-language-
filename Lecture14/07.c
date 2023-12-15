#include <stdio.h>

int main()
{

      for (int i = 5; i >= 1; i--)
      {

            for (int k = 1; k <= i; k++)
            {

                  printf("%d", k);
            }
            for (int b = i; b < 5; b++)
            {
                  printf("  ");
            }
            for (int j = i; j >= 1; j--)
            {
                  printf("%d", j);
            }
            printf("\n");
      }

      return 0;
}