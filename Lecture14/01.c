#include <stdio.h>

int main()
{

      for (int i = 1; i <= 5; i++)
      {
            for (int b = 5; b > i; b--)
            {
                  printf(" ");
            }

            for (int k = i; k >= 1; k--)
            {
                  printf("%d", k);
            }
            printf("\n");
      }

      return 0;
}
