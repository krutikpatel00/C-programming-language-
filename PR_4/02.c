#include <stdio.h>

int main()
{
      int a = 11;
      for (int i = 41; i <= 45; i++)
      {
            for (int k = 41; k <= i; k++)
            {
                  printf(" %d", a);
                  a++;
            }

            printf("\n");
      }

      return 0;
}
