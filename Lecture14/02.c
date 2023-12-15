#include <stdio.h>

int main()
{

      for (int i = 5; i >= 1; i--)
      {
            for (int b = i; b > 1; b--)
            {
                  printf(" ");
            }

            for (int k = i; k <= 5; k++)
            {
                  printf("%d", k);
            }
            printf("\n");
      }

      return 0;
}
