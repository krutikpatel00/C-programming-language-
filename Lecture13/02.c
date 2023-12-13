#include <stdio.h>

int main()
{
      for (int i = 5; i >= 1; i--)
      {
            for (int b = i; b <= 5; b++)
            {
                  printf("%d", b);
            }

            printf("\n");
      }
      return 0;
}