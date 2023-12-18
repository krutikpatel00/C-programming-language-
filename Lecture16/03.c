#include <stdio.h>

int main()
{
      int a, b;

      printf("enter value a :");
      scanf("%d", &a);

      int size1[a];

      for (int i = 0; i < a; i++)
      {
            printf("enter a[%d]", i);
            scanf("%d", &size1[i]);
      }

      for (int i = 0; i < a; i++)
      {

            printf("%d ", size1[i] * size1[i]);
      }

      return 0;
}
