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

                  printf("*");
                  if (k <= i)
                  {
                        printf(" ");
                  }
            }

            for (int c = i - 1; c >= 1; c--)
            {

                  printf("*");
                  if (c <= i)
                  {
                        printf(" ");
                  }
            }
            printf("\n");
      }

      return 0;
}