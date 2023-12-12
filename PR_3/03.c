#include <stdio.h>

int main()
{

      int a, l, f, ans;

      printf("Enter any number: ");
      scanf("%d", &a);
      l = a % 10;

      while (a >= 10)
      {
            a /= 10;
      }
      f = a;
      ans = f + l;

      printf("Total number of digits: %d\n", ans);

      return 0;
}