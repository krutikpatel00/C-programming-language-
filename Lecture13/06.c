#include <stdio.h>

int main()
{
      for (int i = 5; i >= 1; i--)
      {
            for (int b = 1; b <= i; b++)
            {
                  if (b % 2 == 0)
                  {
                        printf("%d", b % 2);
                  }
                  else
                  {
                        printf("%d", b % 2);
                  }
            }
            printf("\n");
      }
      return 0;
}