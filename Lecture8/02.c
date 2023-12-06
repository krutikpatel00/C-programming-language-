#include <stdio.h>

int main()
{
      int a, b, c, d;

      printf("value is a : ");
      scanf("%d", &a);
      printf("value is b : ");
      scanf("%d", &b);
      printf("value is c : ");
      scanf("%d", &c);
      printf("value is d : ");
      scanf("%d", &d);

      if (a > b)
      {
            if (a > c)
            {

                  if (a > d)
                  {

                        printf("max value a : %d", a);
                  }
                  else
                  {
                        printf("max value d : %d", d);
                  }
            }
            else
            {
                  if (c > d)
                  {

                        printf("max value c : %d", c);
                  }
                  else
                  {
                        printf("max value d : %d", d);
                  }
            }
      }
      else
      {
            if (b > c)
            {
                  if (b > d)
                  {

                        printf("max value b : %d", b);
                  }
                  else
                  {
                        printf("max value d : %d", d);
                  }
            }
            else
            {
                  if (c > d)
                  {

                        printf("max value c : %d", c);
                  }
                  else
                  {
                        printf("max value d : %d", d);
                  }
            }
      }

      return 0;
}