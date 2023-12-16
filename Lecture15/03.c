#include <stdio.h>

int main()
{
      int a, b;
      printf("Enter array size: ");
      scanf("%d", &a);

      int c[a];
      int d[a];
      printf("Enter array elements:\n");
      for (int i = 0; i < a; i++)
      {
            printf("c[%d] =", i);
            scanf("%d", &c[i]);
      }

      printf("Enter array elements:\n");
      for (int i = 0; i < a; i++)
      {
            printf("d[%d] =", i);
            scanf("%d", &d[i]);
      }

      int e;
      for (int i = 0; i < a; i++)
      {
            e = c[i] + d[i];
            printf("Array E is: %d", e);
      }

      return 0;
}
