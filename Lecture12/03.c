#include <stdio.h>

int main()
{
      int a, ans;

      printf("enter value a : ");
      scanf("%d", &a);
      for (int i = 1; i <= 10; i++)
      {
            ans = a * i;
            printf("%d * %d = %d\n", a, i, ans);
      }
      return 0;
}
