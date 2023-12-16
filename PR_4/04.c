#include <stdio.h>

int main()
{

      for (int i = 5; i >= 1; i--)
      {

            for (int b = 5; b > i; b--)
            {
                  printf(" ");
            }
            for (int k = 1; k <= i; k++)
            {

                  if (k % 2 == 0)
                  {
                        printf("%d", k % 2);
                  }
                  else
                  {
                        printf("%d", k % 2);
                  }
            }

            printf("\n");
      }

      return 0;
}
