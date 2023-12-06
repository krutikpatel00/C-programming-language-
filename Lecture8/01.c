#include <stdio.h>

int main()
{
      int a, b, c;

      printf("value is a : ");
      scanf("%d", &a);
      printf("value is b : ");
      scanf("%d", &b);
      printf("value is c : ");
      scanf("%d", &c);

      if (a > b)
      {
            if (a > c)
            {
                  printf("max value a : %d", a);
            }
            else
            {
                  printf("max value c : %d", c);
            }
      }
      else
      {
            if (b > c)
            {
                  printf("max value b : %d", b);
            }
            else
            {
                  printf("max value c : %d", c);
            }
      }

      return 0;
}
