#include <stdio.h>

int main()
{

      for (int i = 1; i <= 5; i++)
      {
            for (int b = 1; b <= 5 - i; b++)
            {

                  printf("  ");
            }

            for (int k = 1; k <= i; k++)
            {

                  printf("%d", k);
                  if (k <= i)
                  {
                        printf(" ");
                  }
            }

            for (int c = i - 1; c >= 1; c--)
            {

                  printf("%d", c);
                  if (c <= i)
                  {
                        printf(" ");
                  }
            }
            printf("\n");
      }

      return 0;
}