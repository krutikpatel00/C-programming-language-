#include <stdio.h>

int main()
{

      for (int i = 5; i >= 1; i--)
      {
            for (int b = i; b > 1; b--)
            {
                  printf(" ");
            }

            for (int k = 5; k >= i; k--)
            {
                  printf("%d", i);
            }
            printf("\n");
      }

      return 0;
}
