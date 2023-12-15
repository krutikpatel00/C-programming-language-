#include <stdio.h>

int main()
{

      for (int i = 1; i <= 5; i++)
      {
            
            for (int b = i; b >=1; b--)
            {
                  printf(" ");
            }

            for (int k = i; k <= 5; k++)
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
